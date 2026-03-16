#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/led.h>
#include <zephyr/kernel.h>
#include <zephyr/init.h>
#include <zmk/ble.h>
#include <zmk/events/ble_active_profile_changed.h>

#define LED_GPIO_NODE_ID DT_COMPAT_GET_ANY_STATUS_OKAY(gpio_leds)

static const struct device *led_dev = DEVICE_DT_GET(LED_GPIO_NODE_ID);

// BLE Connected LED
static int ble_listener_cb(const zmk_event_t *eh) {
    if (zmk_ble_active_profile_is_connected()) {
        led_on(led_dev, DT_NODE_CHILD_IDX(DT_ALIAS(led_num)));
    } else {
        led_off(led_dev, DT_NODE_CHILD_IDX(DT_ALIAS(led_num)));
    }
    return 0;
}

ZMK_LISTENER(ble_led_listener, ble_listener_cb);
ZMK_SUBSCRIPTION(ble_led_listener, zmk_ble_active_profile_changed);

static int leds_init(const struct device *device) {
    if (!device_is_ready(led_dev)) {
        return -ENODEV;
    }

    // Power ON - always on
    led_on(led_dev, DT_NODE_CHILD_IDX(DT_ALIAS(led_caps)));

    // Set initial BLE state
    if (zmk_ble_active_profile_is_connected()) {
        led_on(led_dev, DT_NODE_CHILD_IDX(DT_ALIAS(led_num)));
    }

    return 0;
}

SYS_INIT(leds_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);

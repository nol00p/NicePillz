# NicePillz Pinout

## U1 — nice!nano V2

| Pad | Pin Name | Signal |
|-----|----------|--------|
| 1 | TX0/D3 | /ROW_10 |
| 2 | RX1/D2 | /ROW_9 |
| 3 | GND | GND |
| 4 | GND | GND |
| 5 | 2/D1 | /ROW_11 |
| 6 | 3/D0 | /ROW_7 |
| 7 | 4/D4 | /ROW_8 |
| 8 | 5/C6 | /SPI_MOSI |
| 9 | 6/D7 | /LATCH |
| 10 | 7/E6 | /SPI_SCK |
| 11 | 8/B4 | /ROW_1 |
| 12 | 9/B5 | /ROW_2 |
| 13 | 10/B6 | /ROW_3 |
| 14 | 16/B2 | /ROW_5 |
| 15 | 14/B3 | /ROW_0 |
| 16 | 15/B1 | /ROW_4 |
| 17 | A0/F7 | /ROW_6 |
| 18 | A1/F6 | /ROW_12 |
| 19 | A2/F5 | /ROW_14 |
| 20 | A3/F4 | /COL_0 |
| 21 | VCC | +5V |
| 22 | RST | /RESET |
| 23 | GND | GND |
| 24 | B0 | BAT |
| 26 | D5 | /LED_CAPS_LOCK |
| 27 | C7 | /LED_NUM_LOCK |
| 28 | F1 | /LED_SCROLL_LOCK |

## U2 — 74HC595 Shift Register

| Pin | Function | Signal |
|-----|----------|--------|
| 1 | QB | /COL_1 |
| 2 | QC | /COL_2 |
| 3 | QD | /COL_3 |
| 4 | QE | /COL_4 |
| 5 | QF | /COL_5 |
| 6 | QG | /COL_6 |
| 7 | QH | NC |
| 8 | GND | GND |
| 9 | QH' | NC |
| 10 | ~SRCLR | +5V (always high) |
| 11 | SRCLK | /SPI_SCK |
| 12 | RCLK | /LATCH |
| 13 | ~OE | GND (always enabled) |
| 14 | SER | /SPI_MOSI |
| 15 | QA | /ROW_13 |
| 16 | VCC | +5V |

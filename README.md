# NicePillz
this is a pillzmod pcb reworked to be dedicated to the nice!nano

Changes include:
- moved the register to the high frequency pins
- Terminal blocks for easy install of the battery and power switch
- moved col0 directly to the nice!nano so the keyboard can wake up by pressing the top ESC key.

![board](Media/nice_pillz.png)

## Bill of materials

| Position          | Description      | Qty | Notes                                      |
| ----------------- | ---------------- | --- | ------------------------------------------ |
| J1–J8             | Molex 39-53-2135 | 6   | [Mouser](https://eu.mouser.com/ProductDetail/Molex/39-53-2135?qs=cm0cgiBciNYI3jeMaEn0Ng%3D%3D) |
|                   | LED              | 2   | [Amazon](https://www.amazon.fr/dp/B005Q2MZ4Q) |
| R1–R4             | 10k resistor     | 2   | Affects LED brightness. Smaller = brighter |
| U2                | 74HC595          | 1   | [Amazon](https://www.amazon.fr/dp/B093Y2MQGV) |
| U2                | 16-pin IC socket | 1   | [Amazon](https://www.amazon.fr/dp/B07ZCRTRXK?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) |
|                   | Terminals        | 3   | [AliExpress](https://fr.aliexpress.com/item/1005006589335718.html)  |
|                   | reset button     | 1   | [AliExpress](https://fr.aliexpress.com/item/1005007623070623.html)  |
|                   | Power button     | 1   | [Amazon](https://www.amazon.fr/dp/B08L484J7W) |
|                   | Nice!Nano        | 1   |                                            |
|                   | 3.7V battery - 2000mAh | 1   | [Amazon](https://www.amazon.fr/dp/B08214DJLJ) |
|                   | USB-C panel mount| 1   | [AliExpress](https://fr.aliexpress.com/item/1005009401577622.html)                        |





## Assembly
Assembly is very straight forward

LED: the trickiest part might be the LED, make sure to first drop them on the chassi pockets and solder them when in place. 
note the short leg goes to the square pad. 

terminal: when installing the terminal make sure they are facing outward so the little arrow indicated the positive wire. 

## ZMK
see: https://github.com/nol00p/ZMK-NicePillz

## Attribution
This project is a fork of https://github.com/dcpedit/pillzmod

## Thumbcluster
Next the Thumbcluster, the plan here is to use the same terminal to be able to reuse the ribbon cables. and include hot swap sockets. Get in touch if that is something of interest.


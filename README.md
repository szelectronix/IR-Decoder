# IR-Decoder
*  Simple Arduino sketch for decoding IR signals from Remote Control
*  use the IRremote.h library
*  Output per Serial Monitor

## Hardware Overview

I use a standard ir receiver as follows:

![grafik](https://user-images.githubusercontent.com/73773036/97799408-6dbb5900-1c2e-11eb-8a76-7e3e1dbaa29b.png)

*  Pinning is:
   *  1...Out
   *  2...GND
   *  3...VCC(3V3)
   
**Refer the datasheet of your sensor for pin description!**

Wiring of sensor is pretty basic:


**The resistor between Out and VCC is optional.**

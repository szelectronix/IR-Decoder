# IR-Decoder
*  Simple Arduino sketch for decoding IR signals from Remote Control
*  use the IRremote.h library
*  Output per Serial Monitor

## Hardware Overview

I use a standard ir-receiver as follows:

![grafik](https://user-images.githubusercontent.com/73773036/97799408-6dbb5900-1c2e-11eb-8a76-7e3e1dbaa29b.png)

*  Pinning is:
   *  1...Out
   *  2...GND
   *  3...VCC(3V3)
   
**Refer the datasheet of your sensor for pin description!**

Wiring of sensor is pretty basic:

![grafik](https://user-images.githubusercontent.com/73773036/97799621-837d4e00-1c2f-11eb-9b96-da6cf88432da.png)


**The resistor between Out and VCC is optional.**

In my setup, i use a cheap third party remote control like this:

![grafik](https://user-images.githubusercontent.com/73773036/97800297-6d25c100-1c34-11eb-8d23-435467d86fd5.png)

At first i've checked the raw signals. They looked like expected

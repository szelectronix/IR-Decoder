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

## Decoding

At first i've checked the raw signals. They looked like expected:

![grafik](https://user-images.githubusercontent.com/73773036/97800561-7b74dc80-1c36-11eb-950d-330fbdda2e18.png)

In the end, i get followed decoded IR- Signals:

| Button | HEX |	BIN |	DEC |
|---|---|---|---|
|Play/Pause|	FF00FF |	11111111.00000000.11111111 |	16.711.935 |
|Snooze|	FF807F|	11111111.10000000.01111111|	16.744.575|
|Alarm|	FF40BF|	11111111.01000000.10111111|	16.728.255|
|Set|	FF20DF|	11111111.00100000.11011111|	16.720.095|
|Vol-|	FFA05F|	11111111.10100000.01011111|	16.752.735|
|Vol+|	FF609F|	11111111.01100000.10011111|	16.736.415|
|Mode|	FF10EF|	11111111.00010000.11101111|	16.716.015|
|Prev|	FF906F|	11111111.10010000.01101111|	16.748.655|
|Next|	FF50AF|	11111111.01010000.10101111|	16.732.335|
|Radio|	FF30CF|	11111111.00110000.11001111|	16.724.175|


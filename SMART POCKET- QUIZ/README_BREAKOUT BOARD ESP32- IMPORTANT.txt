FLASHING CODE TO ESP32 USING USB-UART:


CONNECTIONS:
1) Connect the GND to GND
2) 3V3 to 3V3 (read as 3.3V)
3) The TXD pin on the CP2102 USB board to the RXD pin on the ESP32-F board
4) The RXD pin on the CP2102 USB board to the TXD pin on the ESP32-F PCB board
5) **VERY IMPORTANT** Connect IO0 to GND
(To ensure that the ESP32-F boots into programming mode after Reset, the IO0 (I/O pin zero) must be connected to GND)



After flashing code, open Serial Monitor and nothing may be displayed.

**VERY IMPORTANT**
NOW REMOVE IO0 FROM GND AND PRESS RESET BUTTON AGAIN.
Program will run and display on Serial Monitor



````````````````````````````````````````````````````````````````````````````````````````````````


ABOVE INSTRUCTIONS TAKEN FROM THIS LINK:
https://www.lab4iot.com/2019/07/14/tutorial-on-how-to-program-the-esp32-wroom-32-or-esp32f/

ESP-32 SMART KEYCHAIN V0.1 (23_1_2021)


GPIO used: 26, 13, 14, 2, 21, 22, (4)

Button Left: 26
Button Right: 13
Button NOT USED: 14
Button Sleep/Wake/BT: 2
SDA (OLED): 21
SCL(OLED): 22
4: Gnd (To prevent ESP from accidental wake from floating high)

Button Features:
Button Left: Prev message + Restart timer
Button Right: Next message + Restart timer
Button Sleep/Wake: Sleep + Wake + HOLD FOR 2 SECONDS for BT activate 

Features:
2 modes available: Learning Mode (on start/default), BT mode (for app connect)

1 Auto Sleep after 6 seconds according to code [actual: 6.6 seconds]
2 Timer resets after every button press(Except BT)
3 BT mode is activated after holding button 4 for 2 seconds
4 BT mode disables timer temporarily
5 BT can get message of Button press count from ESP Server
6 BT disconnect event goes back to button press state for keychain & timer starts too
# NACKB

*NACKB stands for "Not Another Corne Keyboard" that I made due to the the occasional thumb paint that I had whenever I tried to put a layer or modifier button on the interior-most thumb cluster. This version puts the thumb cluster slightly more outwards to compensate. I also wanted to move away from the RP2040 based keyboards, onto STM just because they were that much cheaper.*


## Flashing
The following will build and flash the application

>qmk flash -kb aluminum_owls/nackb -km default

## Bootloader
You can enter the bootloader by pressing the NRST button on the MCU while holding down BOOT0, on the back of the keyboard.



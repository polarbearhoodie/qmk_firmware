# Skyfin

*Skyfin is another iteration on my existing keyboard projects, but the first difference is that I am moving onto using a PCB with hotswap sockets rather than handwiring everything. This results in a slightly more involved design process, but makes increases the quality of the switches significantly, since I won't be using the crappy Aliexpress switches anymore. Since I finalized all the kinks using the handwired board, I am confident that I won't butcher the first set of PCBs that I make.*

## Prepare Bootloader
The STM32F103C8 is the target MCU, which doesn't come with the stm32duino bootloader preloaded. First, using STPROGRAMMER and a STLink v2, we can flash an empty bootloader. 

## Enter Bootloader
When first powering on, it will breifly enter the bootloader.

Alternatively, you can enter the bootloader by pressing the NRST button on the MCU while holding down BOOT0, on the back of the keyboard. 

## Flashing
Once in the bootloader, we can flash our QMK configuration.

$ qmk flash -kb aluminum_owls/skyfin -km default


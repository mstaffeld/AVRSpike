avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega168 -c -o led.o led.c
avr-gcc -mmcu=atmega168 led.o -o led
avr-objcopy -O ihex -R .eeprom led led.hex

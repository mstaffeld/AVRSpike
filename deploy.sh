avrdude -F -V -c arduino -p ATMEGA168 -P /dev/ttyUSB0 -b 19200 -U flash:w:led.hex

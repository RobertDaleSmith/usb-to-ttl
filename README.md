usb-to-ttl
===

Simple USB to TTL example for [KB2040](https://learn.adafruit.com/adafruit-kb2040). Useful for debugging a KB2040 with another KB2040 when using one as USB host device.

Wire up RX->RX, TX->TX, and GND->GND between two KB2040s. Compile and upload with Arduino IDE to the KB2040 you want to use for usb-to-ttl. Then select the Port and open Serial Monitor in Arduino IDE. Speed required by the board is 115200 bits per second.

Or on Mac
```screen /dev/tty.board_name 115200```

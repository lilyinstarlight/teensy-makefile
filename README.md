Teensy Makefile
================

Teensy Makefile is a modified version of the wonderful arduino-mk file made by Tim Marston available at http://ed.am/dev/make/arduino-mk to use Teensyduino.

Instructions
------------
To build a .hex file:

1. Copy makefile to project directory
2. Run:
```sh
export ARDUINODIR=/<path_to>/arduino # only if in a weird place
export BOARD=teensy35 # or whatever your target board is
export SPEED=120 # or whatever your target clock speed is
make
```

To compile and upload your .hex file:

1. Run:
```sh
make upload
```

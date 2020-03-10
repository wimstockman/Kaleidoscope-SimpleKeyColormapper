#!/bin/bash
UNAME_S="$(uname -s)"
if [ UNAME_S == "Darwin" ]; then
AR_DIR=$HOME/Documents/Arduino
else
AR_DIR=$HOME/Arduino
fi

INSTALL_DIR=$AR_DIR/hardware/keyboardio/avr/libraries/Kaleidoscope-SimpleKeyColormapper/
SKETCH_DIR=$AR_DIR/Model01-Firmware
SKETCH=$SKETCH_DIR/Model01-Firmware.ino
cp $SKETCH $SKETCH_DIR"/Previous-Firmware.BKP"
awk -f inserter.awk $INSTALL_DIR"Model01-Firmware.gen" > $SKETCH
awk -f inserter-color.awk $INSTALL_DIR"Kaleidoscope-SimpleKeyColormapper.gen" > $INSTALL_DIR"Kaleidoscope-SimpleKeyColormapper.cpp"
echo "Thank you , Your Sketch has been created in: "$SKETCH_DIR
echo "now it is time to flash it to your Keyboardio Model 01"
echo "USAGE : cd"$SKETCH_DIR
echo "make"
echo "make flash"


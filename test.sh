UNAME_S= uname -s

if [ UNAME_S == "Darwin" ]; then
AR_DIR=$HOME/Documents/Arduino
else
AR_DIR=$HOME/Arduino
fi

INSTALL_DIR=$AR_DIR/hardware/keyboardio/avr/libraries/Kaleidoscope-SimpleKeyColormapper/
	echo $INSTALL_DIR 

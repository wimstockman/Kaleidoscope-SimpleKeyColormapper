# keyboardio-SimpleKeyColormapper
A  simple keymapper layer creator with use of calc sheet
## INSTALL:
as other Kaleidoscope Plugin
clone the git 
into "$(HOME)/Arduino/hardware/keyboardio/avr/libraries/"
replace your Model01-Firmware.ino file usually in $HOME/Arduino/Model01-Firmware/
## Usage:
Open the file keymapper.ods
the blocks with title " LAYER"
are for keymapping
You can create up to 9 layers

the blocks with title "COLORMAP"
are for the colors of your keylayer
set the color for your keys by setting the background color of the cell
after you have set all your colors press the "GENERATE COLORCODES

Export the file as csv file

Run generate-ino.sh $HOME/Arduino/Model01-Firmware/Model01-Firmware.ino

goto $HOME/Arduino/Model01-Firmware/
and flash it to your keyboardio command: make flash


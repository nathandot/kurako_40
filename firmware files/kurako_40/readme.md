# kurako_40

![kurako_40]

A compact 40% (12x4) ortholinear keyboard with a 2-1-1 key split on the spacebar

Keyboard Maintainer: Nathan Steward  
Hardware Supported: kurako_40 PCB 
Hardware Availability: Open Source hardware/not intended for direct sale

Make example for this keyboard (after setting up your QMK MSYS):

    qmk compile -kb kurako_40 -km default

Flashing example for this keyboard ([using the command line](https://docs.qmk.fm/#/newbs_flashing?id=flash-your-keyboard-from-the-command-line)):

    qmk flash -kb kurako_40 -km default -bl dfu
	
until I figure out how to get this board officially included in the QMK Firmware repo, 
files must be manually included. The parent folder "./kurako_40/firmware files/kurako_40/" 
must be placed in the appropriate "../qmk_firmware/keyboards/" folder of your current working 
environment.
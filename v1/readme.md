Firmware for the hs-mini keyboard. A modified version of the Sweet16 V1 keyboard. 
In order for this to build properly, replace the qmk_firmware/keyboards/1upkeyboards/sweet16/v1 folder with this one. Then qmk compile -kb 1upkeyboards/sweet16/v1 -km default to create the required hex file. Then run qmk flash -kb 1upkeyboards/sweet16/v1 -km default to flash the file onto the keyboard.


README file for the Sweet16 V1 is below.

# Sweet16 V1

A 4x4 numpad/macro pad sold by 1up Keyboards - designed by Bishop Keyboards

* Keyboard Maintainer: QMK Community
* Hardware Supported: Sweet16 V1 PCB
* Hardware Availability: [1up Keyboards](https://1upkeyboards.com/)

Make example for this keyboard (after setting up your build environment):

    make 1upkeyboards/sweet16/v1:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
hs


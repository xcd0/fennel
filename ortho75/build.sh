#!/bin/bash

rm -rf ~/work/qmk_firmware/keyboards/ortho75
cp -aurf ~/work/fennel/ortho75 ~/work/qmk_firmware/keyboards
cd ~/work/qmk_firmware
make ortho75:default


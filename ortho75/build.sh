#!/bin/bash

cp -aurf ~/work/fennel/ortho75 ~/work/qmk_firmware/keyboards
cd ~/work/qmk_firmware

make ortho75:default:dfu-util


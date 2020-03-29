#!/bin/bash

DIR=~/work/fennel
QMKDIR=~/work/fennel/arm_split/qmk_firmware

cp -aurf ${DIR}/ortho75 ${QMKDIR}/keyboards/ortho75
cd ${QMKDIR}

make ortho75:default:dfu-util
#make ortho75:default


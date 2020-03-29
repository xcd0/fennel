#!/bin/bash

DIR=~/work/fennel
QMKDIR=~/work/fennel/arm_split/qmk_firmware

cp -aurf ${DIR}/fennel ${QMKDIR}/keyboards/fennel
cd ${QMKDIR}

make fennel:default:dfu-util


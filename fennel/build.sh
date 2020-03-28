
rm -rf ~/work/qmk_firmware/keyboards/fennel
cp -aurf ~/work/fennel/fennel ~/work/qmk_firmware/keyboards
cd ~/work/qmk_firmware

make fennel:default:dfu-util


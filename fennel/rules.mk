# qmk_firmware/keyboards/cannonkeys/practice65/rules.mk
# を参考にした

# MCU name
#MCU = atmega32u4
#MCU = STM32F103
MCU_FAMILY = STM32
MCU_SERIES = STM32F1xx
MCU_STARTUP = stm32f1xx
MCU  = cortex-m3
ARMV = 7

VPATH += ./bluepill
SRC += keyboard.c
SRC += i2c_stm32.c

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
#BOOTLOADER = atmel-dfu

# GENERIC STM32F103C8T6 board - stm32duino bootloader

# If you don't know the bootloader type, then you can specify the
# Boot Section Size in *bytes* by uncommenting out the OPT_DEFS line
# Otherwise, delete this section
#   Teensy halfKay      512
#   Teensy++ halfKay    1024
#   Atmel DFU loader    4096
#   LUFA bootloader     4096
#   USBaspLoader        2048
#OPT_DEFS += -DBOOTLOADER_SIZE=4096

OPT_DEFS = -DCORTEX_VTOR_INIT=0x2000

MCU_LDSCRIPT = STM32F103x8_stm32duino_bootloader
BOARD = STM32_F103_STM32DUINO
DFU_ARGS = -d 1eaf:0003 -a2 -R
DFU_SUFFIX_ARGS = -v 1eaf -p 0003


BOOTMAGIC_ENABLE = yes	# Virtual DIP switch configuration
#MOUSEKEY_ENABLE = yes	# Mouse keys
#EXTRAKEY_ENABLE = yes	# Audio control and System control
#CONSOLE_ENABLE = yes	# Console for debug
#COMMAND_ENABLE = yes    # Commands for debug and configuration
#SLEEP_LED_ENABLE = yes  # Breathing sleep LED during USB suspend
#NKRO_ENABLE = yes	    # USB Nkey Rollover
#BACKLIGHT_ENABLE = yes
#BACKLIGHT_DRIVER = custom
#RGBLIGHT_ENABLE = yes

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

#--------

#
## Build Options
##   change yes to no to disable
##
#BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE = no         # Enable support for HD44780 based LCDs

#SRC += matrix.c             # matrix.cを自分で実装する
#CUSTOM_MATRIX = lite        # カスタムマトリックスを使う ちょこっとだけ実装する
#CUSTOM_MATRIX = yes         # スキャンルーチンをさらに制御する必要がある場合は、完全なスキャンルーチンを実装することを選択できます。設定するには、これをrules.mkに追加します。







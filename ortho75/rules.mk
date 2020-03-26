# MCU name
MCU = STM32F103

# GENERIC STM32F103C8T6 board - stm32duino bootloader
OPT_DEFS = -DCORTEX_VTOR_INIT=0x2000
#OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

MCU_LDSCRIPT = STM32F103x8_stm32duino_bootloader
BOARD = STM32_F103_STM32DUINO

DFU_ARGS = -d 1eaf:0003 -a2 -R
DFU_SUFFIX_ARGS = -v 1eaf -p 0003

# project specific files
VPATH += keyboards/cannonkeys/bluepill
SRC = keyboard.c
#SRC += i2c_stm32.c

#BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
#BOOTMAGIC_ENABLE = yes      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE = no         # Enable support for HD44780 based LCDs
ENCODER_ENABLE = no

#LAYOUTS = ortho_5x15


# Enter lower-power sleep mode when on the ChibiOS idle thread

#MCU_FAMILY = STM32
#MCU_SERIES = STM32F1xx
#MCU_STARTUP = stm32f1xx
#MCU  = cortex-m3
#ARMV = 7
#

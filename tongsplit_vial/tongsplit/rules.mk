


# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040


# RP2040-specific options
# ALLOW_WARNINGS = yes
# PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.


# BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
# MOUSEKEY_ENABLE = yes       # Mouse keys
# EXTRAKEY_ENABLE = yes       # Audio control and System control
# CONSOLE_ENABLE = no         # Console for debug
# COMMAND_ENABLE = yes        # Commands for debug and configuration
# NKRO_ENABLE = no            # Enable N-Key Rollover
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes 
EXTRAKEY_ENABLE = yes  #音量控制
ENCODER_ENABLE = yes #编码器


SERIAL_DRIVER = vendor
# UNICODE_ENABLE = yes




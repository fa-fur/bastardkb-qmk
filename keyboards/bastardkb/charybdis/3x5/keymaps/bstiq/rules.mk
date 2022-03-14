ifeq ($(MCU),atmega32u4)
	# Space saving settings.
	TAP_DANCE_ENABLE = no
	COMBO_ENABLE = no
	QMK_SETTINGS = no
else ifeq ($(MCU),STM32F411)
	EEPROM_DRIVER = vendor
endif

VIA_ENABLE = no
VIAL_ENABLE = no
VIALRGB_ENABLE = no

RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = yes

ENCODER_ENABLE = yes

# POINTING_DEVICE_DRIVER = pmw3360
POINTING_DEVICE_DRIVER = pmw3360

#POINTING_DEVICE_DRIVER = custom

#SRC += analog.c drivers/sensors/pmw3360.c drivers/sensors/cirque_pinnacle.c drivers/sensors/cirque_pinnacle_i2c.c
#QUANTUM_LIB_SRC += spi_master.c i2c_master.c #pointing_device_drivers.c
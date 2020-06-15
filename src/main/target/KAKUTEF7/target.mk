F7X5XG_TARGETS += $(TARGET)
ifeq ($(TARGET), KAKUTEF7MINI)
FEATURES       += VCP ONBOARDFLASH
endif
ifeq ($(TARGET), KAKUTEF7MINI_7PWM)
FEATURES       += VCP ONBOARDFLASH
endif
ifeq ($(TARGET), KAKUTEF7MINI_1MOTOR_6SERVOS)
FEATURES       += VCP ONBOARDFLASH
endif
ifeq ($(TARGET), KAKUTEF7)
FEATURES       += SDCARD VCP MSC
endif
ifeq ($(TARGET), KAKUTEF7_7PWM)
FEATURES       += SDCARD VCP MSC
endif
ifeq ($(TARGET), KAKUTEF7_1MOTOR_6SERVOS)
FEATURES       += SDCARD VCP MSC
endif
ifeq ($(TARGET), KAKUTEF7HDV)
FEATURES       += SDCARD VCP MSC
endif

TARGET_SRC = \
            drivers/accgyro/accgyro_icm20689.c \
            drivers/accgyro/accgyro_mpu6000.c \
            drivers/barometer/barometer_bmp280.c \
            drivers/compass/compass_ak8963.c \
            drivers/compass/compass_hmc5883l.c \
            drivers/compass/compass_qmc5883l.c \
            drivers/compass/compass_mag3110.c \
            drivers/compass/compass_ist8310.c \
            drivers/compass/compass_ist8308.c \
            drivers/compass/compass_lis3mdl.c \
            drivers/light_ws2811strip.c \
            drivers/max7456.c

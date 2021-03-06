/*
 * This file is part of INAV.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "O4V7"
#define USBD_PRODUCT_STRING "OmnibusF4 Nano V7"

#define USE_DSHOT
#define USE_ESC_SENSOR

// Status LED
#define LED0                    PB12

// Beeper
#if defined(OMNIBUSF4NANOV7_PC5)
#define BEEPER                  PC5
#else
#define BEEPER                  PB10
#endif
#define BEEPER_INVERTED

// I2C
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8 
#define I2C1_SDA                PB9 
#define DEFAULT_I2C_BUS         BUS_I2C1

// #define USE_EXTI
// #define GYRO_INT_EXTI            NONE

//#define USE_GYRO
//#define USE_ACC

#define USE_IMU_MPU6500
//#define USE_ACC_MPU6500

#define MPU6500_CS_PIN          PD2
#define MPU6500_SPI_BUS         BUS_SPI3
#define IMU_MPU6500_ALIGN      CW0_DEG
//#define ACC_MPU6500_ALIGN       CW0_DEG

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define TEMPERATURE_I2C_BUS     BUS_I2C1

#define USE_BARO
#define USE_BARO_BMP280
//#define BMP280_SPI_BUS          BUS_SPI3
//#define BMP280_CS_PIN           PB3
#define BARO_I2C_BUS            BUS_I2C1

#define PITOT_I2C_BUS           BUS_I2C1

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1
#define USE_RANGEFINDER_HCSR04_I2C

#define USE_VCP
//#define VBUS_SENSING_PIN        PC5
//#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            NONE

#define USE_UART3
#define UART3_RX_PIN            PC11
#define UART3_TX_PIN            PC10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART5
#define UART5_RX_PIN            NONE
#define UART5_TX_PIN            PC12

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

//#define USE_SOFTSERIAL1
//#define SOFTSERIAL_1_RX_PIN     NONE
//#define SOFTSERIAL_1_TX_PIN     NONE    // PA9 Clash with UART1_TX, needed for S.Port

#define SERIAL_PORT_COUNT       8       // VCP, USART1, USART2, USART3, USART4, USART6, SOFTSERIAL1

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
// #define SPI2_NSS_PIN            PB12
#define SPI2_NSS_PIN            NONE
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PC15

#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PA2
#define M25P16_SPI_BUS          BUS_SPI1
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define USE_ADC
#define ADC_CHANNEL_1_PIN               PC1
#define ADC_CHANNEL_2_PIN               PC0
//#define ADC_CHANNEL_3_PIN               PA0

#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_1
#define VBAT_ADC_CHANNEL                ADC_CHN_2
//#define RSSI_ADC_CHANNEL                ADC_CHN_3

#define SENSORS_SET (SENSOR_ACC | SENSOR_BARO)

#define USE_LED_STRIP
#define WS2811_PIN                      PA15
#define WS2811_DMA_HANDLER_IDENTIFER    DMA1_ST0_HANDLER
#define WS2811_DMA_STREAM               DMA1_Stream0
#define WS2811_DMA_CHANNEL              DMA_Channel_2

#define DEFAULT_FEATURES                (FEATURE_TX_PROF_SEL | FEATURE_BLACKBOX | FEATURE_VBAT | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_SOFTSERIAL | FEATURE_TELEMETRY)
#define DEFAULT_RX_TYPE                 RX_TYPE_SERIAL
#define SERIALRX_PROVIDER               SERIALRX_SBUS
#define DISABLE_RX_PWM_FEATURE

#define TELEMETRY_UART                  SERIAL_PORT_SOFTSERIAL1
#define SERIALRX_UART                   SERIAL_PORT_USART1
#define SMARTAUDIO_UART                 SERIAL_PORT_USART5

#define CURRENT_METER_SCALE             179

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// Number of available PWM outputs
#define MAX_PWM_OUTPUT_PORTS    8
#define TARGET_MOTOR_COUNT      6

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define PCA9685_I2C_BUS         BUS_I2C1

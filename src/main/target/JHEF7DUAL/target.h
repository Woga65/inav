/*
 * This file is part of INAV.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "JH7D"
#define USBD_PRODUCT_STRING "JHEF7DUAL"

#define LED0                PA15

#define BEEPER              PC15
#define BEEPER_INVERTED

#define USE_DSHOT
#define USE_SERIALSHOT
#define USE_ESC_SENSOR

//#define USE_ACC
//#define USE_GYRO

#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define USE_EXTI
#define GYRO_1_EXTI_PIN         PC4
#define GYRO_2_EXTI_PIN         PC3
#define GYRO_INT_EXTI           GYRO_2_EXTI_PIN

// ICM-20689
#define USE_IMU_ICM20689
//#define USE_GYRO_ICM20689
#define IMU_ICM20689_ALIGN       CW90_DEG
//#define ACC_ICM20689_ALIGN       CW90_DEG
#define ICM20689_CS_PIN          PB2
#define ICM20689_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW90_DEG
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1

//#define USE_ACC_MPU6000
//#define ACC_MPU6000_ALIGN       CW90_DEG

#define USB_IO
#define USE_VCP
//#define VBUS_SENSING_ENABLED
//#define VBUS_SENSING_PIN          PA8

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PB10
#define UART3_RX_PIN            PB11

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_UART6
#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define SERIAL_PORT_COUNT 7 //VCP,UART1,UART2,UART3,UART4,UART5,UART6

#define USE_SPI
#define USE_SPI_DEVICE_1   //GYROS
#define USE_SPI_DEVICE_2   //OSD
#define USE_SPI_DEVICE_3   //FLASH M25P16

//#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

//#define SPI3_NSS_PIN            PE4
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PB5

#define USE_OSD

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          SPI2_NSS_PIN

#define M25P16_CS_PIN           PC13
#define M25P16_SPI_BUS          BUS_SPI3
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_BARO
#define USE_BARO_BMP280
#define BARO_I2C_BUS            BUS_I2C1

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN       CW270_DEG_FLIP
#define USE_MAG_QMC5883
#define USE_MAG_MAG3110
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_LIS3MDL

//#define TEMPERATURE_I2C_BUS     BUS_I2C1

#define USE_ADC
#define ADC_CHANNEL_1_PIN           PC1
#define ADC_CHANNEL_2_PIN           PC2
#define ADC_CHANNEL_3_PIN           PC0

#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3

#define DEFAULT_FEATURES            (FEATURE_TX_PROF_SEL | FEATURE_TELEMETRY | FEATURE_OSD | FEATURE_VBAT | FEATURE_BLACKBOX)
#define DEFAULT_RX_TYPE             RX_TYPE_SERIAL
#define SERIALRX_UART               SERIAL_PORT_USART2
#define SERIALRX_PROVIDER           SERIALRX_SBUS

#define USE_LED_STRIP
#define WS2811_PIN                  PA8   //TIM1_CH1

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PC14 // 2xCamera switcher
#define PINIO2_PIN                  PB9  // VTX power switcher

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       6

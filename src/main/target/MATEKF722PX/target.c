/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include "platform.h"
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {

#if defined(MATEKF722PX_MOTORS_LAST_VP) || defined(MATEKF722WPX_MOTORS_LAST_VP)
    DEF_TIM(TIM8, CH3, PC8,   TIM_USE_MC_SERVO | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S1   UP2-1   D(2, 4, 7)
    DEF_TIM(TIM8, CH4, PC9,   TIM_USE_MC_SERVO | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S2   UP2-1   D(2, 7, 7)

    DEF_TIM(TIM3, CH1, PB4,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S3   UP1-2   D(1, 4, 5)
    DEF_TIM(TIM3, CH2, PB5,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S4   UP1-2   D(1, 5, 5)
    DEF_TIM(TIM3, CH3, PB0,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S5   UP1-2   D(1, 7, 5)
    DEF_TIM(TIM3, CH4, PB1,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S6   UP1-2   D(1, 2, 5)

    DEF_TIM(TIM2, CH3, PB10,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S7   UP1-7   D(1, 1, 3)
    DEF_TIM(TIM2, CH4, PB11,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 1),   // S8   UP1-7   D(1, 6, 3)
    
    DEF_TIM(TIM4, CH1, PB6,   TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR | TIM_USE_HC_MOTOR, 0, 0),   // S9   UP1-6   D(1, 0, 2)
    DEF_TIM(TIM4, CH2, PB7,   TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR | TIM_USE_HC_MOTOR, 0, 0),   // S10  UP1-6   D(1, 3, 2)
#else
    DEF_TIM(TIM8, CH3, PC8,   TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR | TIM_USE_HC_MOTOR, 0, 0),   // S1   UP2-1   D(2, 4, 7)
    DEF_TIM(TIM8, CH4, PC9,   TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR | TIM_USE_HC_MOTOR, 0, 0),   // S2   UP2-1   D(2, 7, 7)

    DEF_TIM(TIM3, CH1, PB4,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S3   UP1-2   D(1, 4, 5)
    DEF_TIM(TIM3, CH2, PB5,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S4   UP1-2   D(1, 5, 5)
    DEF_TIM(TIM3, CH3, PB0,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S5   UP1-2   D(1, 7, 5)
    DEF_TIM(TIM3, CH4, PB1,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S6   UP1-2   D(1, 2, 5)

    DEF_TIM(TIM2, CH3, PB10,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S7   UP1-7   D(1, 1, 3)
    DEF_TIM(TIM2, CH4, PB11,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 1),   // S8   UP1-7   D(1, 6, 3)
    
    DEF_TIM(TIM4, CH1, PB6,   TIM_USE_MC_SERVO | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S9   UP1-6   D(1, 0, 2)
    DEF_TIM(TIM4, CH2, PB7,   TIM_USE_MC_SERVO | TIM_USE_FW_SERVO | TIM_USE_HC_SERVO, 0, 0),   // S10  UP1-6   D(1, 3, 2)
#endif

    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_LED, 0, 2),                            // LED          D(2, 3, 6)

    DEF_TIM(TIM9, CH2, PA3,  TIM_USE_PPM, 0, 0),                            // RX2, PPM
    DEF_TIM(TIM5, CH3, PA2,  TIM_USE_PWM, 0, 0),                            // TX2, softserial1_tx

    DEF_TIM(TIM12, CH2, PB15, TIM_USE_PWM, 0, 0),                           // Cam_ctrl reserved

};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);

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

#include <stdbool.h>
#include <stdint.h>
#include <math.h>

#include "platform.h"

#if defined(USE_VARIABLE_PITCH)

#include "flight/variable_pitch.h"

#include "config/parameter_group.h"
#include "config/parameter_group_ids.h"

#include "fc/settings.h"

//woga65: helicopter specific settings
PG_REGISTER_WITH_RESET_TEMPLATE(helicopterConfig_t, helicopterConfig, PG_HELICOPTER_CONFIG, 0);

PG_RESET_TEMPLATE(helicopterConfig_t, helicopterConfig,
    .nav_hc_hover_collective[0] = 1600,     // normal
    .nav_hc_hover_collective[1] = 1550,     // idle-up 1
    .nav_hc_hover_collective[2] = 1525,     // idle-up 2
);


uint16_t helicopterGetHoverCollective(uint8_t flightMode) {
    return helicopterConfig()->nav_hc_hover_collective[flightMode];
} 

#endif
/*
Copyright 2022 Nathan Steward (@nathan206100)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID  		0x0000
#define PRODUCT_ID 		0x0000
#define DEVICE_VER 		0x0001
#define MANUFACTURER 	Nathan Steward
#define PRODUCT 		kurako_40

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// wiring of each half
#define MATRIX_ROW_PINS { D4, D5, D6, D7 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, D0, D1, D2, D3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
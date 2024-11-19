/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>
Copyright 2015 ZSA Technology Labs Inc (@zsa)
Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)

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

#define MATRIX_ROWS 10
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP22, GP20, GP23, GP21 }

#define MATRIX_ROW_PINS_RIGHT { GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_COL_PINS_RIGHT { GP21, GP23, GP20, GP22, GP26, GP27, GP28, GP29 }

#define DIODE_DIRECTION COL2ROW


// #define SPLIT_USB_TIMEOUT 2000
// #define SPLIT_USB_TIMEOUT_POOL 10
//  "diode_direction": "COL2ROW",
    // "split": {
    //     "soft_serial_pin": "GP3"
    // },    
    // "processor": "RP2040",
    // "bootloader": "rp2040",

#define SOFT_SERIAL_PIN GP3 
#define MASTER_LEFT


#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP1 }
#define ENCODER_RESOLUTION 4

#define ENCODERS_PAD_A_RIGHT { GP1 }
#define ENCODERS_PAD_B_RIGHT { GP0 }
#define ENCODER_RESOLUTIONS_RIGHT 4 

#define ENCOER_DIRECTION_FLIP

#define USB_VBUS_PIN GP19



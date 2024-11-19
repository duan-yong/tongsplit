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

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT(\
    L00, L01, L02, L03, L04, L05, L06,                R01, R02, R03, R04, R05, R06, R07,\
    L10, L11, L12, L13, L14, L15, L16,                R11, R12, R13, R14, R15, R16, R17,\
    L20, L21, L22, L23, L24, L25, L26,                R21, R22, R23, R24, R25, R26, R27,\
    L30, L31, L32, L33, L34, L35, L36, L37,      R30, R31, R32, R33, R34, R35, R36, R37,\
    L40, L41,      L43, L44, L45, L46, L47,      R40, R41, R42, R43, R44,      R46, R47 \
){  \
    {L00, L01, L02, L03, L04, L05, L06, XXX},\
    {L10, L11, L12, L13, L14, L15, L16, XXX},\
    {L20, L21, L22, L23, L24, L25, L26, XXX},\
    {L30, L31, L32, L33, L34, L35, L36, L37},\
    {L40, L41, XXX, L43, L44, L45, L46, L47},\
    {XXX, R01, R02, R03, R04, R05, R06, R07},\
    {XXX, R11, R12, R13, R14, R15, R16, R17},\
    {XXX, R21, R22, R23, R24, R25, R26, R27},\
    {R30, R31, R32, R33, R34, R35, R36, R37},\
    {R40, R41, R42, R43, R44, XXX, R46, R47} \
}   

﻿/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
  Fontname: HD44780_J
  Copyright: A. Hardtung, public domain
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 6 h=10 x= 2 y= 5 dx= 6 dy= 0 ascent= 8 len= 8
  Font Bounding box     w= 6 h= 9 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-1
  X Font      ascent = 7 descent=-1
  Max Font    ascent = 8 descent=-2
*/
#include  "u8g/U8glib.h"
/// <summary>
/// The u8 g sectio
/// </summary>
const u8g_fntpgm_uint8_t HD44780_J_5x7[2492] U8G_SECTION(".progmem.HD44780_J_5x7") = {
	//head
  0, 6, 9, 0, 254, 7, 1, 145, 3, 34, 32, 255, 255, 8, 254, 7, 255, 
  // 0x20 空格
  0, 0, 0, 6, 0, 0, 
  // 0x21 !
  1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128, 0, 128, 
  // 0x22 "
  3, 2, 2, 6, 1, 5, 160, 160, 
  // 0x23 #
  5, 7, 7, 6, 0, 0, 80, 80, 248, 80, 248, 80, 80, 
  // 0x24 $
  5, 7, 7, 6, 0, 0, 32, 120, 160, 112, 40, 240, 32, 
  // 0x25 %
  5, 7, 7, 6, 0, 0, 192, 200, 16, 32, 64, 152, 24, 
  // 0x26 &
  5, 7, 7, 6, 0, 0, 96, 144, 160, 64, 168, 144, 104,
  // 0x27 `
  2, 3, 3, 6, 1, 4, 192, 64, 128, 
  // 0x28 (
  3, 7, 7, 6, 1, 0, 32, 64, 128, 128, 128, 64, 32, 
  // 0x29 )
  3, 7, 7, 6, 1, 0, 128, 64, 32, 32, 32, 64, 128, 
  // 0x2a *
  5, 5, 5, 6, 0, 1, 32, 168, 112, 168, 32, 
  // 0xab +
  5, 5, 5, 6, 0, 1, 32, 32, 248, 32, 32, 
  // 0x2c ,
  2, 3, 3, 6, 2, 255, 192, 64, 128, 
  // 0x2d -
  5, 1, 1, 6, 0, 3, 248, 
  // 0x2e .
  2, 2, 2, 6, 2, 0, 192, 192, 
  // 0x2f -
  5, 5, 5, 6, 0, 1, 8, 16, 32, 64, 128, 
  // 0x30 0
  5, 7, 7, 6, 0, 0, 112, 136, 152, 168, 200, 136, 112, 
  // 0x31 1
  3, 7, 7, 6, 1, 0, 64, 192, 64, 64, 64, 64, 224, 
  // 0x32 2
  5, 7, 7, 6, 0, 0, 112, 136, 8, 112, 128, 128, 248, 
  // 0x33 3
  5, 7, 7, 6, 0, 0, 248, 16, 32, 16, 8, 8, 240,
  // 0x34 4
  5, 7, 7, 6, 0, 0, 16, 48, 80, 144, 248, 16, 16, 
  // 0x35 5
  5, 7, 7, 6, 0, 0, 248, 128, 240, 8, 8, 136, 112, 
  // 0x36 6
  5, 7, 7, 6, 0, 0, 48, 64, 128, 240, 136, 136, 112, 
  // 0x37 7
  5, 7, 7, 6, 0, 0, 248, 8, 16, 32, 32, 32, 32, 
  // 0x38 8
  5, 7, 7, 6, 0, 0, 112, 136, 136, 112, 136, 136, 112, 
  // 0x39 9
  5, 7, 7, 6, 0, 0, 112, 136, 136, 120, 8, 16, 96, 
  // 0x3a :
  2, 5, 5, 6, 2, 0, 192, 192, 0, 192, 192, 
  // 0x3b ;
  2, 6, 6, 6, 2, 255, 192, 192, 0, 192, 64, 128, 
  // 0x3c <
  4, 7, 7, 6, 0, 0, 16, 32, 64, 128, 64, 32, 16, 
  // 0x3d =
  5, 3, 3, 6, 0, 2, 248, 0, 248, 
  // 0x3e >
  4, 7, 7, 6, 1, 0, 128, 64, 32, 16, 32, 64, 128, 
  // 0x3f ?
  5, 7, 7, 6, 0, 0, 112, 136, 8, 16, 32, 0, 32, 
  // 0x40 @
  5, 6, 6, 6, 0, 0, 112, 136, 8, 104, 168, 112, 
  // 0x41 A
  5, 7, 7, 6, 0, 0, 112, 136, 136, 248, 136, 136, 136, 
  // 0x42 B
  5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 136, 136, 240, 
  // 0x43 C
  5, 7, 7, 6, 0, 0, 112, 136, 128, 128, 128, 136, 112, 
  // 0x44 D
  5, 7, 7, 6, 0, 0, 224, 144, 136, 136, 136, 144, 224, 
  // 0x45 E
  5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128, 128, 248, 
  // 0x46 F
  5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128, 128, 128, 
  // 0x47 G
  5, 7, 7, 6, 0, 0, 112, 136, 128, 184, 136, 136, 112, 
  // 0x48 H
  5, 7, 7, 6, 0, 0, 136, 136, 136, 248, 136, 136, 136, 
  // 0x49 I
  1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128, 128, 128, 
  // 0x4a J
  5, 7, 7, 6, 0, 0, 56, 16, 16, 16, 16, 144, 96, 
  // 0x4b K
  5, 7, 7, 6, 0, 0, 136, 144, 160, 192, 160, 144, 136, 
  // 0x4c L
  5, 7, 7, 6, 0, 0, 128, 128, 128, 128, 128, 128, 248, 
  // 0x4d M
  5, 7, 7, 6, 0, 0, 136, 216, 168, 136, 136, 136, 136, 
  // 0x4e N
  5, 7, 7, 6, 0, 0, 136, 136, 200, 168, 152, 136, 136, 
  // 0x4f O
  5, 7, 7, 6, 0, 0, 112, 136, 136, 136, 136, 136, 112, 
  // 0x50 P
  5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 128, 128, 128, 
  // 0x51 Q
  5, 7, 7, 6, 0, 0, 112, 136, 136, 136, 168, 144, 104, 
  // 0x52 R
  5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 160, 144, 136, 
  // 0x53 S
  5, 7, 7, 6, 0, 0, 120, 128, 128, 112, 8, 8, 240, 
  // 0x54 T
  5, 7, 7, 6, 0, 0, 248, 32, 32, 32, 32, 32, 32, 
  // 0x55 U
  5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 136, 112, 
  // 0x56 V
  5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 80, 32,
  // 0x57 W
  5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 168, 80, 
  // 0x58 X
  5, 7, 7, 6, 0, 0, 136, 136, 80, 32, 80, 136, 136, 
  // 0x59 Y
  5, 7, 7, 6, 0, 0, 136, 136, 136, 80, 32, 32, 32, 
  // 0x5a Z
  5, 7, 7, 6, 0, 0, 248, 8, 16, 32, 64, 128, 248, 
  // 0x5b [
  3, 7, 7, 6, 1, 0, 224, 128, 128, 128, 128, 128, 224, 
  // 0x5c "\"
  5, 7, 7, 6, 0, 0, 136, 80, 248, 32, 248, 32, 32, 
  // 0x5d ]
  3, 7, 7, 6, 1, 0, 224, 32, 32, 32, 32, 32, 224, 
  // 0x5e ^
  5, 3, 3, 6, 0, 4, 32, 80, 136, 
  // 0x5f _
  5, 1, 1, 6, 0, 0, 248, 
  // 0x60 '
  2, 2, 2, 6, 2, 5, 128, 64, 
  // 0x61 a
  5, 5, 5, 6, 0, 0, 112, 8, 120, 136, 120, 
  // 0x62 b
  5, 7, 7, 6, 0, 0, 128, 128, 176, 200, 136, 136, 240, 
  // 0x63 c
  5, 5, 5, 6, 0, 0, 112, 128, 128, 136, 112, 
  // 0x64 d
  5, 7, 7, 6, 0, 0, 8, 8, 104, 152, 136, 136, 120, 
  // 0x65 e
  5, 5, 5, 6, 0, 0, 112, 136, 248, 128, 112, 
  // 0x66 f
  5, 7, 7, 6, 0, 0, 48, 72, 224, 64, 64, 64, 64, 
  // 0x67 g
  5, 6, 6, 6, 0, 255, 112, 136, 136, 120, 8, 112, 
  // 0x68 h
  5, 7, 7, 6, 0, 0, 128, 128, 176, 200, 136, 136, 136, 
  // 0x69 i
  1, 7, 7, 6, 2, 0, 128, 0, 128, 128, 128, 128, 128, 
  // 0x6a j
  3, 8, 8, 6, 1, 255, 32, 0, 32, 32, 32, 32, 160, 64, 
  // 0x62 b
  4, 7, 7, 6, 0, 0, 128, 128, 144, 160, 192, 160, 144, 
  // 0x63 c
  3, 7, 7, 6, 1, 0, 192, 64, 64, 64, 64, 64, 224, 
  // 0x6d m
  5, 5, 5, 6, 0, 0, 208, 168, 168, 168, 168, 
  // 0x6e n
  5, 5, 5, 6, 0, 0, 176, 200, 136, 136, 136, 
  // 0x6f o
  5, 5, 5, 6, 0, 0, 112, 136, 136, 136, 112, 
  // 0x70 p
  5, 6, 6, 6, 0, 255, 240, 136, 136, 240, 128, 128, 
  // 0x71 q
  5, 6, 6, 6, 0, 255, 120, 136, 136, 120, 8, 8,
  // 0x72 r
  5, 5, 5, 6, 0, 0, 176, 200, 128, 128, 128, 
  // 0x73 s
  5, 5, 5, 6, 0, 0, 112, 128, 112, 8, 240, 
  // 0x74 t
  5, 7, 7, 6, 0, 0, 64, 64, 224, 64, 64, 72, 48, 
  // 0x75 u
  5, 5, 5, 6, 0, 0, 136, 136, 136, 152, 104, 
  // 0x76 v
  5, 5, 5, 6, 0, 0, 136, 136, 136, 80, 32, 
  // 0x77 w
  5, 5, 5, 6, 0, 0, 136, 136, 168, 168, 80, 
  // 0x78 x
  5, 5, 5, 6, 0, 0, 136, 80, 32, 80, 136, 
  // 0x79 y
  5, 6, 6, 6, 0, 255, 136, 136, 136, 120, 8, 112, 
  // 0x7a z
  5, 5, 5, 6, 0, 0, 248, 16, 32, 64, 248, 
  // 0x7b {
  3, 7, 7, 6, 1, 0, 32, 64, 64, 128, 64, 64, 32, 
  // 0x7c |
  1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128, 128, 128,
  // 0x7d }
  3, 7, 7, 6, 1, 0, 128, 64, 64, 32, 64, 64, 128, 
  // 0x7e ~
  5, 5, 5, 6, 0, 1, 32, 16, 248, 16, 32, 
  // 0x7f
  5, 5, 5, 6, 0, 1, 32, 64, 248, 64, 32, 
  // 0x80
  0, 0, 0, 6, 0, 0, 
  // 0x81
  0, 0, 0, 6, 0, 0,
  // 0x82
  0, 0, 0, 6, 0, 0, 
  // 0x83
  0, 0, 0, 6, 0, 0, 
  // 0x84
  0, 0, 0, 6, 0, 0, 
  // 0x85
  0, 0, 0, 6, 0, 0, 
  // 0x86
  0, 0, 0, 6, 0, 0, 
  // 0x87
  0, 0, 0, 6, 0, 0, 
  // 0x88
  0, 0, 0, 6, 0, 0, 
  // 0x89
  0, 0, 0, 6, 0, 0, 
  // 0x8a
  0, 0, 0, 6, 0, 0, 
  // 0x8b
  0, 0, 0, 6, 0, 0, 
  // 0x8c
  0, 0, 0, 6, 0, 0, 
  // 0x8d
  0, 0, 0, 6, 0, 0, 
  // 0x8e
  0, 0, 0, 6, 0, 0, 
  // 0x8f
  0, 0, 0, 6, 0, 0, 
  // 0x90
  0, 0, 0, 6, 0, 0, 
  // 0x91
  0, 0, 0, 6, 0, 0, 
  // 0x92
  0, 0, 0, 6, 0, 0, 
  // 0x93
  0, 0, 0, 6, 0, 0, 
  // 0x94
  0, 0, 0, 6, 0, 0, 
  // 0x95
  0, 0, 0, 6, 0, 0, 
  // 0x96
  0, 0, 0, 6, 0, 0, 
  // 0x97
  0, 0, 0, 6, 0, 0, 
  // 0x98
  0, 0, 0, 6, 0, 0, 
  // 0x99
  0, 0, 0, 6, 0, 0, 
  // 0x9a
  0, 0, 0, 6, 0, 0, 
  // 0x9b
  0, 0, 0, 6, 0, 0, 
  // 0x9c
  0, 0, 0, 6, 0, 0, 
  // 0x9d
  0, 0, 0, 6, 0, 0, 
  // 0x9e
  0, 0, 0, 6, 0, 0, 
  // 0x9f
  0, 0, 0, 6, 0, 0, 
  // 0xa0
  0, 0, 0, 6, 0, 0, 
  // 0xa1 
  3, 3, 3, 6, 0, 0, 224, 160, 224, 
  // 0xa2
  3, 4, 4, 6, 2, 3, 224, 128, 128, 128, 
  // 0xa3
  3, 4, 4, 6, 0, 0, 32, 32, 32, 224, 
  // 0xa4
  3, 3, 3, 6, 0, 0, 128, 64, 32, 
  // 0xa5
  2, 2, 2, 6, 1, 2, 192, 192, 
  // 0xa6 ｦ
  5, 6, 6, 6, 0, 0, 248, 8, 248, 8, 16, 32, 
  // 0xa7 ｧ
  5, 5, 5, 6, 0, 0, 248, 8, 48, 32, 64, 
  // 0xa8 ｨ
  4, 5, 5, 6, 0, 0, 16, 32, 96, 160, 32, 
  // 0xa9 
  5, 5, 5, 6, 0, 0, 32, 248, 136, 8, 48, 
  // 0xaa 
  5, 4, 4, 6, 0, 0, 248, 32, 32, 248, 
  // 0xab 
  5, 5, 5, 6, 0, 0, 16, 248, 48, 80, 144, 
  // 0xac 
  5, 5, 5, 6, 0, 0, 64, 248, 72, 80, 64, 
  // 0xad ｭ
  5, 4, 4, 6, 0, 0, 112, 16, 16, 248, 
  // 0xae ｮ
  4, 5, 5, 6, 0, 0, 240, 16, 240, 16, 240, 
  // 0xaf ｯ
  5, 4, 4, 6, 0, 0, 168, 168, 8, 48, 
  // 0xb0
  5, 1, 1, 6, 0, 3, 248, 
  // 0xb1
  5, 7, 7, 6, 0, 0, 248, 8, 40, 48, 32, 32, 64, 
  // 0xb2
  5, 7, 7, 6, 0, 0, 8, 16, 32, 96, 160, 32, 32, 
  // 0xb3 ウ 
  5, 7, 7, 6, 0, 0, 32, 248, 136, 136, 8, 16, 32, 
  // 0xb4
  5, 6, 6, 6, 0, 0, 248, 32, 32, 32, 32, 248, 
  // 0xb5
  5, 7, 7, 6, 0, 0, 16, 248, 16, 48, 80, 144, 16, 
  // 0xb6 カ
  5, 7, 7, 6, 0, 0, 64, 248, 72, 72, 72, 72, 144,   
  // 0xb7
  5, 7, 7, 6, 0, 0, 32, 248, 32, 248, 32, 32, 32, 
  // 0xb8
  5, 6, 6, 6, 0, 0, 120, 72, 136, 8, 16, 96, 
  // 0xb9 ル
  5, 7, 7, 6, 0, 0, 64, 120, 144, 16, 16, 16, 32, 
  5, 6, 6, 6, 0, 0, 248, 8, 8, 8, 8, 248, 
  5, 7, 7, 6, 0, 0, 80, 248, 80, 80, 16, 32, 64, 
  5, 6, 6, 6, 0, 0, 192, 8, 200, 8, 16, 224, 
  5, 6, 6, 6, 0, 0, 248, 8, 16, 32, 80, 136, 
  5, 7, 7, 6, 0, 0, 64, 248, 72, 80, 64, 64, 56, 
  5, 6, 6, 6, 0, 0, 136, 136, 72, 8, 16, 96, 
  5, 6, 6, 6, 0, 0, 120, 72, 168, 24, 16, 96, 
  5, 7, 7, 6, 0, 0, 16, 224, 32, 248, 32, 32, 64, 
  5, 6, 6, 6, 0, 0, 168, 168, 168, 8, 16, 32, 
  5, 7, 7, 6, 0, 0, 112, 0, 248, 32, 32, 32, 64, 
  3, 7, 7, 6, 1, 0, 128, 128, 128, 192, 160, 128, 128, 
  5, 7, 7, 6, 0, 0, 32, 32, 248, 32, 32, 64, 128, 
  5, 6, 6, 6, 0, 0, 112, 0, 0, 0, 0, 248, 
  5, 6, 6, 6, 0, 0, 248, 8, 80, 32, 80, 128, 
  5, 7, 7, 6, 0, 0, 32, 248, 16, 32, 112, 168, 32, 
  3, 7, 7, 6, 1, 0, 32, 32, 32, 32, 32, 64, 128, 
  5, 6, 6, 6, 0, 0, 32, 16, 136, 136, 136, 136, 
  5, 7, 7, 6, 0, 0, 128, 128, 248, 128, 128, 128, 120, 
  5, 6, 6, 6, 0, 0, 248, 8, 8, 8, 16, 96, 
  5, 5, 5, 6, 0, 1, 64, 160, 16, 8, 8, 
  5, 7, 7, 6, 0, 0, 32, 248, 32, 32, 168, 168, 32, 
  5, 6, 6, 6, 0, 0, 248, 8, 8, 80, 32, 16, 
  4, 6, 6, 6, 1, 0, 224, 0, 224, 0, 224, 16, 
  5, 6, 6, 6, 0, 0, 32, 64, 128, 136, 248, 8, 
  5, 6, 6, 6, 0, 0, 8, 8, 80, 32, 80, 128, 
  5, 6, 6, 6, 0, 0, 248, 64, 248, 64, 64, 56, 
  5, 7, 7, 6, 0, 0, 64, 64, 248, 72, 80, 64, 64, 
  5, 7, 7, 6, 0, 0, 112, 16, 16, 16, 16, 16, 248, 
  5, 6, 6, 6, 0, 0, 248, 8, 248, 8, 8, 248, 
  5, 7, 7, 6, 0, 0, 112, 0, 248, 8, 8, 16, 32, 
  4, 7, 7, 6, 0, 0, 144, 144, 144, 144, 16, 32, 64, 
  5, 6, 6, 6, 0, 0, 32, 160, 160, 168, 168, 176, 
  5, 7, 7, 6, 0, 0, 128, 128, 128, 136, 144, 160, 192, 
  5, 6, 6, 6, 0, 0, 248, 136, 136, 136, 136, 248, 
  5, 6, 6, 6, 0, 0, 248, 136, 136, 8, 16, 32, 
  5, 6, 6, 6, 0, 0, 192, 0, 8, 8, 16, 224, 
  4, 3, 3, 6, 0, 4, 32, 144, 64, 
  3, 3, 3, 6, 0, 4, 224, 160, 224, 
  5, 5, 5, 6, 0, 1, 72, 168, 144, 144, 104, 
  5, 7, 7, 6, 0, 0, 80, 0, 112, 8, 120, 136, 120, 
  4, 8, 8, 6, 1, 255, 96, 144, 144, 224, 144, 144, 224, 128, 
  5, 5, 5, 6, 0, 0, 112, 128, 96, 136, 112, 
  5, 6, 6, 6, 0, 255, 136, 136, 152, 232, 136, 128, 
  5, 5, 5, 6, 0, 0, 120, 160, 144, 136, 112, 
  5, 7, 7, 6, 0, 254, 48, 72, 136, 136, 240, 128, 128, 
  5, 8, 8, 6, 0, 254, 120, 136, 136, 136, 120, 8, 8, 112, 
  5, 5, 5, 6, 0, 1, 56, 32, 32, 160, 64, 
  4, 3, 3, 6, 0, 3, 16, 208, 16, 
  4, 8, 8, 6, 0, 255, 16, 0, 48, 16, 16, 16, 144, 96, 
  3, 3, 3, 6, 0, 4, 160, 64, 160, 
  5, 7, 7, 6, 0, 0, 32, 112, 160, 160, 168, 112, 32, 
  5, 7, 7, 6, 0, 0, 64, 64, 224, 64, 224, 64, 120, 
  5, 7, 7, 6, 0, 0, 112, 0, 176, 200, 136, 136, 136, 
  5, 7, 7, 6, 0, 0, 80, 0, 112, 136, 136, 136, 112, 
  5, 7, 7, 6, 0, 255, 176, 200, 136, 136, 240, 128, 128, 
  5, 7, 7, 6, 0, 255, 104, 152, 136, 136, 120, 8, 8, 
  5, 6, 6, 6, 0, 0, 112, 136, 248, 136, 136, 112, 
  5, 3, 3, 6, 0, 2, 88, 168, 208, 
  5, 5, 5, 6, 0, 0, 112, 136, 136, 80, 216, 
  5, 7, 7, 6, 0, 0, 80, 0, 136, 136, 136, 152, 104, 
  5, 7, 7, 6, 0, 0, 248, 128, 64, 32, 64, 128, 248, 
  5, 5, 5, 6, 0, 0, 248, 80, 80, 80, 152, 
  5, 7, 7, 6, 0, 0, 248, 0, 136, 80, 32, 80, 136, 
  5, 7, 7, 6, 0, 255, 136, 136, 136, 136, 120, 8, 112, 
  5, 6, 6, 6, 0, 0, 8, 240, 32, 248, 32, 32, 
  5, 5, 5, 6, 0, 0, 248, 64, 120, 72, 136, 
  5, 5, 5, 6, 0, 0, 248, 168, 248, 136, 136, 
  5, 5, 5, 6, 0, 1, 32, 0, 248, 0, 32, 
  0, 0, 0, 6, 0, 0, 
  6, 10, 10, 6, 0, 254, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252
};

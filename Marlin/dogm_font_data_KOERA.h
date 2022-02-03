/**
* Copyright (C) 2019 WEEDO3D Perron
*/

#include  "u8g/U8glib.h"
const u8g_fntpgm_uint8_t ISO10646_KR[4656] U8G_SECTION(".progmem.ISO10646_KR") = {
  //head
  0, 12, 11, 0, 254, 7, 1, 146, 3, 33, 32, 255, 255, 10, 255, 7, 255, 
  // 0x20 空格
  0, 0, 0, 6, 0, 10, 
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
  5, 7, 7, 6, 0, 0, 112, 128, 128, 240, 136, 136, 112, 
  // 0x37 7
  5, 7, 7, 6, 0, 0, 248, 8, 16, 32, 32, 32, 32, 
  // 0x38 8
  5, 7, 7, 6, 0, 0, 112, 136, 136, 112, 136, 136, 112, 
  // 0x39 9
  5, 7, 7, 6, 0, 0, 112, 136, 136, 120, 8, 8, 112, 
  // 0x3a :
  2, 5, 5, 6, 2, 0, 192, 192, 0, 192, 192, 
  // 0x3b ;
  2, 6, 6, 6, 2, 255, 192, 192, 0, 192, 64, 128, 
  // 0x3c <
  4, 7, 7, 6, 0, 0, 16, 32, 64, 128, 64, 32, 16, 
  // 0x3d =
  5, 3, 3, 6, 0, 2, 248, 0, 248, 
  // 0x3e >
  4, 7, 7, 6, 0, 0, 128, 64, 32, 16, 32, 64, 128, 
  // 0x3f ?
  5, 7, 7, 6, 0, 0, 112, 136, 8, 16, 32, 0, 32, 
  // 0x40 @
  5, 7, 7, 6, 0, 0, 112, 136, 8, 104, 168, 168, 112, 
  // 0x41 A
  5, 7, 7, 6, 0, 0, 112, 136, 136, 248, 136, 136, 136, 
  // 0x42 B
  5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 136, 136, 240, 
  // 0x43 C
  5, 7, 7, 6, 0, 0, 112, 136, 128, 128, 128, 136, 112, 
  // 0x44 D
  5, 7, 7, 6, 0, 0, 240, 136, 136, 136, 136, 136, 240, 
  // 0x45 E
  5, 7, 7, 6, 0, 0, 248, 128, 128, 240,128, 128, 248, 
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
  3, 7, 7, 6, 0, 0, 224, 128, 128, 128, 128, 128, 224, 
  // 0x5c "\"
  5, 5, 5, 6, 0, 1, 128, 64, 32, 16, 8, 
  // 0x5d ]
  3, 7, 7, 6, 0, 0, 224, 32, 32, 32, 32, 32, 224, 
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
  // 0x6b k
  4, 7, 7, 6, 1, 0, 128, 128, 144, 160, 192, 160, 144, 
  // 0x6c l
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
  4, 7, 7, 6, 0, 0, 64, 64, 224, 64, 64, 64, 48, 
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
  5, 2, 2, 6, 0, 3, 104, 144, 
  // 0x7f
  0, 0, 0, 6, 0, 10, 
  // 0x80
  0, 0, 0, 6, 0, 10, 
  // 0x81
  0, 0, 0, 6, 0, 10, 
  // 0x82
  0, 0, 0, 6, 0, 10,
  // \x83 가
  11,11,22,12,0,254,124,128,4,128,4,128,4,128,4,224,8,128,8,128,48,128,192,128,0,128,0,128,
  // \x84 개
  9,11,22,12,2,254,244,128,20,128,20,128,20,128,23,128,36,128,36,128,68,128,132,128,4,128,4,128,
  // \x85 거
  10,12,24,12,1,254,0,64,124,64,4,64,4,64,4,64,5,192,8,64,16,64,32,64,192,64,0,64,0,64,
  // \x86 결
  9,11,22,12,2,254,248,128,11,128,8,128,19,128,224,128,0,0,127,128,0,128,127,128,64,0,63,128,
  // \x87 경
  9,11,22,12,2,254,248,128,8,128,11,128,16,128,35,128,192,128,0,0,63,0,64,128,64,128,63,0,
  // \x88 계
  9,11,22,12,2,254,242,128,18,128,30,128,18,128,18,128,34,128,46,128,66,128,130,128,2,128,2,128,
  // \x89 고
  10,10,20,12,1,255,127,128,0,128,0,128,0,128,0,128,8,128,8,128,8,128,8,0,255,192,
  // \x8a 그
  9,10,20,12,2,255,255,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,255,128,
  // \x8b 기
  10,11,22,12,1,254,124,64,4,64,4,64,4,64,4,64,8,64,16,64,32,64,192,64,0,64,0,64,
  // \x8c 깅
  9,11,22,12,2,254,252,128,4,128,4,128,4,128,24,128,224,128,0,0,63,0,64,128,64,128,63,0,
  // \x8d ﻿꺼
  9,11,22,12,2,254,252,128,36,128,36,128,36,128,39,128,36,128,36,128,72,128,152,128,0,128,0,128,
  // \x8e 끄
  9,10,20,12,2,255,255,0,17,0,17,0,17,0,17,0,17,0,17,0,17,0,0,0,255,128,
  // \x8f 노
  10,10,20,12,1,255,64,0,64,0,64,0,64,0,63,128,0,0,4,0,4,0,4,0,255,192,
  // \x90 누
  10,11,22,12,1,254,128,0,128,0,128,0,127,192,0,0,0,0,255,192,4,0,4,0,4,0,4,0,
  // \x91 니
  9,11,22,12,1,254,128,128,128,128,128,128,128,128,128,128,128,128,128,128,126,128,0,128,0,128,0,128,
  // \x92 다
  10,11,22,12,1,254,254,128,128,128,128,128,128,128,128,192,128,128,128,128,126,128,0,128,0,128,0,128,
  // \x93 대
  10,11,22,12,1,254,253,64,129,64,129,64,129,64,129,192,129,64,129,64,129,64,125,64,1,64,1,64,
  // \x94 더
  10,11,22,12,1,254,254,64,128,64,128,64,128,64,131,192,128,64,128,64,128,64,126,64,0,64,0,64,
  // \x95 데
  10,11,22,12,1,254,249,64,129,64,129,64,129,64,143,64,129,64,129,64,129,64,121,64,1,64,1,64,
  // \x96 도
  10,10,20,12,1,255,127,128,64,0,64,0,64,0,64,0,63,128,0,0,4,0,4,0,255,192,
  // \x97 ﻿동
  10,11,22,12,1,254,127,128,64,0,64,0,63,128,4,0,255,192,0,0,63,0,64,128,64,128,63,0,
  // \x98 ﻿됨
  10,11,22,12,1,254,126,64,64,64,64,64,62,64,8,64,255,64,0,0,127,192,64,64,64,64,63,192,
  // \x99 ﻿드
  10,10,20,12,1,255,127,128,64,0,64,0,64,0,64,0,63,128,0,0,0,0,0,0,255,192,
  // \x9a ﻿디
  9,11,22,12,2,254,248,128,128,128,128,128,128,128,128,128,128,128,128,128,124,128,0,128,0,128,0,128,
  // \x9b ﻿딩
  10,11,22,12,1,254,254,64,128,64,128,64,128,64,126,64,0,64,0,0,63,128,64,64,64,64,63,128,
  // \x9c ﻿라
  11,11,22,12,1,254,252,128,4,128,4,128,252,128,128,224,128,128,128,128,126,128,0,128,0,128,0,128,
  // \x9d ﻿레
  10,11,22,12,1,254,249,64,9,64,9,64,249,64,135,64,129,64,129,64,125,64,1,64,1,64,1,64,
  // \x9e ﻿력
  10,11,22,12,1,254,252,64,4,64,253,192,128,64,128,64,126,64,0,0,127,192,0,64,0,64,0,64,
  // \x9f ﻿로
  10,11,22,12,1,254,127,128,0,128,0,128,127,128,64,0,64,0,63,128,0,0,4,0,4,0,255,192,
  // \xa0 ﻿료
  10,11,22,12,1,254,127,128,0,128,0,128,127,128,64,0,64,0,63,128,0,0,18,0,18,0,255,192,
  // \xa0 ﻿루
  10,11,22,12,1,254,127,128,0,128,127,128,64,0,63,128,0,0,255,192,4,0,4,0,4,0,4,0,
  // \xa0 ﻿르
  10,11,22,12,1,254,127,128,0,128,0,128,127,128,64,0,64,0,63,128,0,0,0,0,0,0,255,192,
  // \xa0 ﻿리
  10,11,22,12,1,254,252,64,4,64,4,64,252,64,128,64,128,64,128,64,126,64,0,64,0,64,0,64,
  // \xa0 ﻿마
  11,11,22,12,1,254,252,128,132,128,132,128,132,128,132,224,132,128,132,128,124,128,0,128,0,128,0,128,
  // \xa0 ﻿메
  10,11,22,12,1,254,249,64,137,64,137,64,143,64,137,64,137,64,137,64,121,64,1,64,1,64,1,64,
  // \xa0 ﻿멘
  10,11,22,12,1,254,249,64,137,64,143,64,137,64,137,64,121,64,0,0,64,0,64,0,64,0,63,192,
  // \xa0 ﻿면
  10,11,22,12,1,254,252,64,133,192,132,64,133,192,132,64,124,64,0,0,64,0,64,0,64,0,63,192,
  // \xa0 ﻿모
  10,10,20,12,1,255,127,128,64,128,64,128,64,128,64,128,63,128,0,0,4,0,4,0,255,192,
  // \xa0 ﻿미
  10,11,22,12,1,254,252,64,132,64,132,64,132,64,132,64,132,64,132,64,124,64,0,64,0,64,0,64,
  // \xaa ﻿버
  10,11,22,12,1,254,132,64,132,64,132,64,252,64,133,192,132,64,132,64,124,64,0,64,0,64,0,64,
  // ﻿\xab 법
  10,11,22,12,1,254,132,64,132,64,253,192,132,64,132,64,124,64,0,0,64,64,127,192,64,64,63,192,
  // \xac 베
  10,11,22,12,1,254,137,64,137,64,137,64,255,64,137,64,137,64,137,64,121,64,1,64,1,64,1,64,
  // \xad 벨
  10,11,22,12,1,254,137,64,137,64,255,64,137,64,121,64,0,0,127,192,0,64,127,192,64,0,63,192,
  // \xae 변
  10,11,22,12,1,254,132,64,133,192,252,64,133,192,132,64,124,64,0,0,64,0,64,0,64,0,63,192,
  // \xaf 보
  10,10,20,12,1,255,64,128,64,128,127,128,64,128,64,128,64,128,63,128,4,0,4,0,255,192,
  // \xb0 복
  10,11,22,12,1,254,64,128,127,128,64,128,127,128,4,0,255,192,0,0,127,128,0,128,0,128,0,128,
  // \xb1 비
  10,11,22,12,1,254,66,64,66,64,126,64,66,64,66,64,62,64,8,64,8,64,255,64,0,64,0,64,
  // \xb2 사
  11,11,22,12,1,254,16,128,16,128,16,128,16,128,40,224,40,128,68,128,68,128,130,128,0,128,0,128,
  // \xb3 삽
  11,11,22,12,1,254,16,128,16,128,16,224,40,128,68,128,130,128,0,0,64,128,127,128,64,128,63,128,
  // \xb4 상
  11,11,22,12,1,254,16,128,16,128,16,224,40,128,68,128,130,128,0,0,63,0,64,128,64,128,63,0,
  // \xb5 선
  10,11,22,12,1,254,16,64,16,64,17,192,40,64,68,64,130,64,0,0,64,0,64,0,64,0,63,192,
  // \xb6 설
  9,11,22,12,2,254,32,128,32,128,35,128,80,128,136,128,0,0,255,128,0,128,255,128,128,0,127,128,
  // \xb7 세
  10,11,22,12,1,254,17,64,17,64,17,64,17,64,47,64,41,64,69,64,69,64,131,64,1,64,1,64,
  // \xb8 셋
  10,11,22,12,1,254,17,64,17,64,23,64,41,64,69,64,131,64,0,0,4,0,4,0,27,0,96,192,
  // \xb9 션
  10,11,22,12,1,254,16,64,17,192,16,64,41,192,68,64,130,64,0,0,64,0,64,0,64,0,63,192,
  // \xba 속
  9,11,22,12,2,254,8,0,8,0,54,0,193,128,8,0,255,128,0,0,255,128,0,128,0,128,0,128,
  // \xbb 스
  9,10,20,12,2,255,8,0,8,0,20,0,34,0,193,128,0,0,0,0,0,0,0,0,255,128,
  // \xbc 습
  9,11,22,12,2,254,8,0,8,0,54,0,193,128,0,0,255,128,0,0,128,128,255,128,128,128,127,128,
  // \xbd 시
  9,11,22,12,1,254,16,128,16,128,16,128,16,128,40,128,40,128,68,128,68,128,130,128,0,128,0,128,
  // \xbe 실
  9,11,22,12,1,254,16,128,16,128,40,128,68,128,130,128,0,0,127,128,0,128,127,128,64,0,63,128,
  // ﻿\xbf 암
  11,11,22,12,1,254,120,128,132,128,132,224,132,128,132,128,120,128,0,0,127,128,64,128,64,128,63,128,
  // \xc0 압
  11,11,22,12,1,254,120,128,132,128,132,224,132,128,132,128,120,128,0,0,64,128,127,128,64,128,63,128,
  // \xc1 앱
  10,11,22,12,1,254,113,64,137,64,137,192,137,64,137,64,113,64,0,0,64,64,127,192,64,64,63,192,
  // \xc2 어
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,133,192,132,64,132,64,132,64,120,64,0,64,0,64,
  // \xc3 언
  10,11,22,12,1,254,120,64,132,64,133,192,132,64,132,64,120,64,0,0,64,0,64,0,64,0,63,192,
  // \xc4 업
  10,11,22,12,1,254,120,64,132,64,133,192,132,64,132,64,120,64,0,0,64,64,127,192,64,64,63,192,
  // \xc5 없
  11,11,22,12,1,254,120,64,132,64,133,192,132,64,132,64,120,64,0,0,68,128,124,128,69,64,62,32,
  // \xc6 여
  10,11,22,12,1,254,120,64,132,64,133,192,132,64,132,64,133,192,132,64,132,64,120,64,0,64,0,64,
  // \xc7 연
  10,11,22,12,1,254,120,64,133,192,132,64,132,64,133,192,120,64,0,0,64,0,64,0,64,0,63,192,
  // \xc8 열
  10,11,22,12,1,254,120,64,133,192,132,64,133,192,120,64,0,0,127,192,0,64,127,192,64,0,63,192,
  // \xc9 영
  10,11,22,12,1,254,120,64,133,192,132,64,132,64,133,192,120,64,0,0,63,128,64,64,64,64,63,128,
  // \xca 오
  9,10,20,12,1,255,28,0,34,0,65,0,65,0,34,0,28,0,0,0,8,0,8,0,255,128,
  // \xcb 온
  10,11,22,12,1,254,63,0,64,128,64,128,63,0,8,0,255,192,0,0,64,0,64,0,64,0,63,128,
  // \xcc 옵
  9,11,22,12,1,254,63,0,64,128,64,128,63,0,8,0,255,128,0,0,64,128,127,128,64,128,63,128,
  // \xcd 완
  11,11,22,12,1,254,124,128,130,128,130,224,124,128,16,128,254,128,0,0,128,0,128,0,128,0,127,128,
  // \xce 요
  9,10,20,12,1,255,28,0,34,0,65,0,65,0,34,0,28,0,0,0,34,0,34,0,255,128,
  // \xcf 운
  10,11,22,12,1,254,63,0,64,128,64,128,63,0,0,0,255,192,4,0,68,0,64,0,64,0,63,128,
  // \xd0 원
  10,11,22,12,1,254,60,64,66,64,61,192,0,64,255,64,8,64,8,64,72,64,64,0,64,0,63,192,
  // \xd1 위
  9,11,22,12,2,254,120,128,132,128,132,128,132,128,120,128,0,128,254,128,16,128,16,128,16,128,16,128,
  // \xd2 을
  10,11,22,12,1,254,63,0,64,128,63,0,0,0,255,192,0,0,127,128,0,128,127,128,64,0,63,128,
  // ﻿\xd3 음
  10,11,22,12,1,254,63,0,64,128,64,128,63,0,0,0,255,192,0,0,127,128,64,128,64,128,63,128,
  // \xd4 이
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,132,64,132,64,132,64,132,64,120,64,0,64,0,64,
  // \xd5 익
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,132,64,120,64,0,0,127,192,0,64,0,64,0,64,
  // \xd6 인
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,132,64,120,64,0,0,64,0,64,0,64,0,63,192,
  // \xd7 일
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,120,64,0,0,127,192,0,64,127,192,64,0,63,192,
  // \xd8 입
  10,11,22,12,1,254,120,64,132,64,132,64,132,64,132,64,120,64,0,0,64,64,127,192,64,64,63,192,
  // \xd9 자
  11,11,22,12,1,254,254,128,16,128,16,128,16,128,40,224,40,128,68,128,68,128,130,128,0,128,0,128,
  // \xda 작
  11,11,22,12,1,254,254,128,16,128,16,224,40,128,68,128,130,128,0,0,127,128,0,128,0,128,0,128,
  // \xdb 잠
  11,11,22,12,1,254,254,128,16,128,16,224,40,128,68,128,130,128,0,0,127,128,64,128,64,128,63,128,
  // \xdc 장
  11,11,22,12,1,254,254,128,16,128,16,224,40,128,68,128,130,128,0,0,63,0,64,128,64,128,63,0,
  // \xdd 재
  10,11,22,12,1,254,253,64,17,64,17,64,17,64,41,192,41,64,69,64,69,64,69,64,1,64,1,64,
  // \xde 저
  10,11,22,12,1,254,254,64,16,64,16,64,16,64,41,192,40,64,68,64,68,64,130,64,0,64,0,64,
  // \xdf 전
  10,11,22,12,1,254,254,64,16,64,17,192,40,64,68,64,130,64,0,0,64,0,64,0,64,0,63,192,
  // \xe0 정
  10,11,22,12,1,254,254,64,16,64,17,192,40,64,68,64,130,64,0,0,63,128,64,64,64,64,63,128,
  // \xe1 제
  10,11,22,12,1,254,253,64,17,64,17,64,23,64,41,64,41,64,69,64,69,64,129,64,1,64,1,64,
  // \xe2 조
  9,10,20,12,1,255,127,0,8,0,8,0,20,0,34,0,65,0,8,0,8,0,8,0,255,128,
  // \xe3 준
  9,11,22,12,1,254,255,128,8,0,20,0,227,128,0,0,255,128,8,0,136,0,128,0,128,0,127,128,
  // \xe4 중
  9,11,22,12,1,254,255,128,8,0,20,0,227,128,0,0,255,128,8,0,127,0,128,128,128,128,127,0,
  // \xe5 즐
  9,11,22,12,1,254,255,128,8,0,247,128,0,0,255,128,0,0,255,128,0,128,255,128,128,0,127,128,
  // \xe6 지
  9,11,22,12,1,254,254,128,16,128,16,128,16,128,40,128,40,128,68,128,68,128,130,128,0,128,0,128,
  // \xe7 ﻿짐
  9,11,22,12,1,254,254,128,16,128,16,128,40,128,68,128,130,128,0,0,127,128,64,128,64,128,63,128,
  // \xe8 초
  11,10,20,12,1,255,14,0,0,0,127,192,4,0,10,0,17,0,100,192,4,0,4,0,255,224,
  // \xe9 추
  10,11,22,12,1,254,30,0,0,0,255,192,12,0,18,0,97,128,0,0,255,192,4,0,4,0,4,0,
  // \xea 축
  10,11,22,12,1,254,30,0,0,0,127,128,12,0,115,128,0,0,255,192,4,0,127,128,0,128,0,128,
  // \xeb 출
  10,11,22,12,1,254,4,0,255,192,12,0,115,128,255,192,4,0,127,128,0,128,127,128,64,0,63,128,
  // \xec 치
  10,11,22,12,1,254,56,64,0,64,254,64,16,64,16,64,16,64,40,64,36,64,66,64,128,64,0,64,
  // \xed 카
  10,11,22,12,1,254,249,0,9,0,9,0,249,0,9,192,17,0,17,0,33,0,193,0,1,0,1,0,
  // \xee 태
  10,11,22,12,1,254,250,64,130,64,130,64,251,192,130,64,130,64,130,64,122,64,2,64,2,64,2,64,
  // \xef 택
  10,11,22,12,1,254,242,64,130,64,243,192,130,64,130,64,122,64,0,0,127,192,0,64,0,64,0,64,
  // \xf0 터
  9,11,22,12,1,254,248,128,128,128,128,128,248,128,131,128,128,128,128,128,120,128,0,128,0,128,0,128,
  // \xf1 토
  10,10,20,12,1,255,127,128,64,0,127,128,64,0,64,0,63,128,0,0,4,0,4,0,255,192,
  // \xf2 트
  10,10,20,12,1,255,127,128,64,0,64,0,127,128,64,0,64,0,63,128,0,0,0,0,255,192,
  // \xf3 튼
  10,11,22,12,1,254,127,128,64,0,127,128,64,0,63,128,0,0,255,192,0,0,64,0,64,0,127,128,
  // \xf4 파
  11,11,22,12,1,254,252,128,0,128,72,128,72,128,72,224,72,128,72,128,252,128,0,128,0,128,0,128,
  // \xf5 패
  10,11,22,12,1,254,253,64,1,64,73,64,73,64,73,192,73,64,73,64,253,64,1,64,1,64,0,64,
  // \xf6 팬
  10,11,22,12,1,254,253,64,1,64,73,64,73,192,73,64,253,64,1,64,65,64,64,0,64,0,63,192,
  // \xf7 필
  10,12,24,12,1,254,0,64,126,64,36,64,36,64,36,64,255,64,8,64,63,192,0,64,63,192,32,0,63,192,
  // \xf8 하
  12,11,22,12,1,254,56,64,0,64,254,64,0,64,56,64,68,112,68,64,68,64,68,64,56,64,0,64,
  // \xf9 합
  11,11,22,12,1,254,56,128,0,128,254,224,40,128,68,128,68,128,56,128,32,128,63,128,32,128,31,128,
  // \xfa 행
  10,11,22,12,1,254,49,64,1,64,253,192,49,64,73,64,73,64,49,64,0,0,31,128,32,64,31,128,
  // \xfb 호
  10,11,22,12,1,254,30,0,0,0,255,192,30,0,33,0,33,0,33,0,30,0,4,0,4,0,255,192,
  // \xfc 화
  11,11,22,12,1,254,56,128,0,128,254,128,40,128,68,224,68,128,56,128,16,128,254,128,0,128,0,128,
  // \xfd 환
  11,11,22,12,1,254,16,128,254,128,40,128,68,128,68,224,56,128,16,128,254,128,64,0,64,0,63,128,
  // \xfe 후
  10,11,22,12,1,254,30,0,0,0,255,192,51,0,64,128,63,0,0,0,255,192,4,0,4,0,4,0,
  // ﻿\xff 단
  10, 11, 22, 12, 1, 254, 254, 128, 128, 128, 128, 192, 128, 128, 128, 128, 126, 128, 0, 0, 64, 0, 64, 0, 64, 0, 63, 128,
};

/* This file is copied and then modified from https://github.com/urob/zmk-helpers/blob/673d51e47487bb7c9eb087702e9a81a9cde9f743/include/zmk-helpers/key-labels/sofle.h
 * LICENSE for that repo is inlined below.

 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*   

/*                                      61 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5     │      6   7   8   9  10  11 │ │ LN5 LN4 LN3 LN2 LN1 LN0     │     RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 12  13  14  15  16  17     │     18  19  20  21  22  23 │ │ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 24  25  26  27  28  29     │     30  31  32  33  34  35 │ │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 36  37  38  39  40  41  42 │ 43  44  45  46  47  48  49 │ │ LB5 LB4 LB3 LB2 LB1 LB0 LSN │ RSN RB0 RB1 RB2 RB3 RB4 RB5 │
  │ 50  51  52  53  54  55  56 │ 57  58              59  60 | | LH6 LH5 LH4 LH3 LH2 LH1 LH0 │ RH0 RH1             RH2 RH3 |
  ╰────────────────────────────┴────────────────────────────╯ ╰─────────────────────────────┴─────────────────────────────╯         */

          #pragma once

          #define LN0  5  // left-number row
          #define LN1  4
          #define LN2  3
          #define LN3  2
          #define LN4  1
          #define LN5  0
          
          #define RN0  6  // right-number row
          #define RN1  7
          #define RN2  8
          #define RN3  9
          #define RN4 10
          #define RN5 11
          
          #define LT0 17  // left-top row
          #define LT1 16
          #define LT2 15
          #define LT3 14
          #define LT4 13
          #define LT5 12
          
          #define RT0 18  // right-top row
          #define RT1 19
          #define RT2 20
          #define RT3 21
          #define RT4 22
          #define RT5 23
          
          #define LM0 29  // left-middle row
          #define LM1 28
          #define LM2 27
          #define LM3 26
          #define LM4 25
          #define LM5 24
          
          #define RM0 30  // right-middle row
          #define RM1 31
          #define RM2 32
          #define RM3 33
          #define RM4 34
          #define RM5 35
          
          #define LB0 41  // left-bottom row
          #define LB1 40
          #define LB2 39
          #define LB3 38
          #define LB4 37
          #define LB5 36
          
          #define LSN 42  // left single
          #define RSN 43  // right single
          
          #define RB0 44  // right-bottom row
          #define RB1 45
          #define RB2 46
          #define RB3 47
          #define RB4 48
          #define RB5 49
          
          #define LH0 56  // left thumb keys
          #define LH1 55
          #define LH2 54
          #define LH3 53
          #define LH4 52
          #define LH5 51
          #define LH6 50
          
          #define RH0 57  // right thumb keys
          #define RH1 58
          #define RH2 59
          #define RH3 60

          #define KEYS_L LN0 LN1 LN2 LN3 LN4 LN5 LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5 LH3 LH4 LH5 LH6  // left-hand keys
          #define KEYS_R RN0 RN1 RN2 RN3         RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 RH2 RH3          // right-hand keys
          #define THUMBS LH2 LH1 LH0 RH0 RH1                                                                                              // thumb keys

          #define LAYER_FROM64( \
            k00, k01, k02, k03, k04, k05,           k06, k07, k08, k09, k10, k11, \
            k12, k13, k14, k15, k16, k17,           k18, k19, k20, k21, k22, k23, \
            k24, k25, k26, k27, k28, k29,           k30, k31, k32, k33, k34, k35, \
            k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, \
            k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k60, k61, k62, k63  \
        ) \
            k00  k01  k02  k03  k04  k05            k06  k07  k08  k09  k10  k11  \
            k12  k13  k14  k15  k16  k17            k18  k19  k20  k21  k22  k23  \
            k24  k25  k26  k27  k28  k29            k30  k31  k32  k33  k34  k35  \
            k36  k37  k38  k39  k40  k41  k42  k43  k44  k45  k46  k47  k48  k49  \
            k50  k51  k52  k53  k54  k55  k56  k57  k58                 k59  k63
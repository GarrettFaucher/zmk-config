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

/*                                     43 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────┬────────────────────────╮  ╭─────────────────────────┬─────────────────────────╮
  │  0   1   2   3   4     │      5   6   7   8   9 │  │ LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │  │ LM4 LM3 LM2 LM1 LM0 LMN │ RMN RM0 RM1 RM2 RM3 RM4 │
  │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │  │ LB4 LB3 LB2 LB1 LB0 LSN │ RSN RB0 RB1 RB2 RB3 RB4 │
  │ 34  35  36  37  38  39 │ 40  41              42 │  │ LH5 LH4 LH3 LH2 LH1 LH0 │ RH0 RH1             RH2 │
  ╰────────────────────────┴────────────────────────╯  ╰─────────────────────────┴─────────────────────────╯  */

#pragma once

#define LT0 4  // left-top row
#define LT1 3
#define LT2 2
#define LT3 1
#define LT4 0

#define RT0 5  // right-top row
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

#define LMN 15  // left-middle row
#define LM0 14
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RMN 16  // right-middle row
#define RM0 17
#define RM1 18
#define RM2 19
#define RM3 20
#define RM4 21

#define LB0 26  // left-bottom row
#define LB1 25
#define LB2 24
#define LB3 23
#define LB4 22

#define LSN 27  // left single
#define RSN 28  // right single

#define RB0 29  // right-bottom row
#define RB1 30
#define RB2 31
#define RB3 32
#define RB4 33

#define LH0 39  // left thumb keys
#define LH1 38
#define LH2 37
#define LH3 36
#define LH4 35
#define LH5 34

#define RH0 40  // right thumb keys
#define RH1 41
#define RH2 42

<<<<<<< HEAD
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LMN LB0 LB1 LB2 LB3 LB4 LSN LH3 LH4 LH5 // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RMN RB0 RB1 RB2 RB3 RB4 RSN RH2         // right-hand keys
#define THUMBS LH2 LH1 LH0 RH0 RH1                                                             // thumb keys
=======
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LH3 LH4 LH5 // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RH2         // right-hand keys
#define THUMBS LH2 LH1 LH0 RH0 RH1                                                         // thumb keys
>>>>>>> 68e6014f92acfaa9040942cd3a72f17946d9b42d

#define LAYER_FROM64( \
    k00, k01, k02, k03, k04, k05,           k06, k07, k08, k09, k10, k11, \
    k12, k13, k14, k15, k16, k17,           k18, k19, k20, k21, k22, k23, \
    k24, k25, k26, k27, k28, k29,           k30, k31, k32, k33, k34, k35, \
    k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, \
    k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k60, k61, k62, k63  \
) \
    k13  k14  k15  k16  k17            k18  k19  k20  k21  k22 \
    k25  k26  k27  k28  k29  k24  k35  k30  k31  k32  k33  k34 \
    k37  k38  k39  k40  k41  k42  k43  k44  k45  k46  k47  k48 \
    k50  k51  k59  k54  k55  k56  k57  k58                 k59

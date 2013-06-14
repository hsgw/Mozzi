#ifndef THUMBPIANO3_H_
#define THUMBPIANO3_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define THUMBPIANO3_NUM_CELLS 8193
#define THUMBPIANO3_SAMPLERATE 16384
 
const char __attribute__((progmem)) THUMBPIANO3_DATA [] = {-1, 2, 4, -9, -16,
-7, -4, -6, 2, 8, 7, 13, 17, 6, 0, 11, 17, 14, 21, 23, 16, 14, 15, 13, 6, 6, 8,
14, 22, 16, -6, -25, -27, -26, -37, -37, -27, -31, -25, -25, -23, -28, -61, -67,
-50, -50, -53, -43, -39, -33, -7, 15, 9, -12, -8, 3, -2, -1, 7, 10, 27, 85, 108,
85, 83, 64, 38, 45, 66, 64, 59, 92, 108, 96, 102, 89, 34, 15, 45, 39, 8, 14, 15,
-19, -20, 2, -23, -62, -58, -55, -81, -81, -71, -96, -122, -108, -85, -96, -99,
-95, -124, -128, -93, -84, -99, -85, -65, -79, -77, -38, -37, -52, -15, 14, -1,
3, 28, 18, 3, 30, 60, 65, 86, 105, 102, 101, 109, 111, 97, 92, 106, 112, 114,
117, 104, 93, 90, 86, 80, 77, 72, 54, 42, 41, 33, 9, -5, -13, -31, -40, -48,
-58, -59, -58, -59, -61, -63, -70, -83, -100, -108, -101, -93, -88, -82, -77,
-74, -66, -65, -70, -69, -60, -49, -38, -27, -24, -17, -2, 5, 7, 17, 31, 35, 37,
46, 48, 52, 70, 82, 81, 83, 90, 92, 84, 78, 80, 72, 63, 67, 67, 54, 51, 55, 41,
18, 13, 8, -14, -27, -27, -42, -53, -43, -41, -60, -72, -72, -77, -83, -82, -86,
-92, -90, -81, -77, -76, -71, -65, -62, -55, -44, -39, -36, -26, -20, -19, -5,
14, 23, 30, 41, 51, 58, 64, 64, 62, 68, 76, 86, 96, 98, 97, 100, 92, 75, 71, 71,
61, 59, 64, 59, 50, 46, 33, 12, 2, -3, -17, -30, -32, -34, -44, -49, -48, -52,
-63, -67, -68, -72, -76, -74, -70, -67, -62, -58, -61, -64, -59, -53, -49, -43,
-37, -31, -22, -14, -7, -4, 0, 5, 12, 19, 23, 23, 28, 34, 34, 40, 50, 58, 58,
58, 54, 47, 43, 40, 34, 31, 34, 39, 40, 39, 34, 27, 22, 14, 3, -5, -7, -8, -11,
-10, -8, -12, -18, -19, -23, -33, -36, -35, -35, -32, -29, -29, -30, -28, -29,
-34, -38, -35, -32, -30, -26, -19, -14, -11, -8, -8, -11, -11, -9, -6, -3, 2,
10, 19, 22, 19, 19, 23, 27, 31, 33, 34, 35, 37, 35, 34, 37, 38, 39, 42, 42, 41,
40, 37, 31, 27, 26, 23, 17, 15, 13, 10, 9, 5, -1, -9, -17, -25, -29, -31, -33,
-35, -38, -40, -43, -50, -58, -63, -63, -62, -59, -54, -53, -53, -52, -52, -51,
-51, -49, -44, -38, -32, -25, -19, -12, -2, 4, 5, 11, 19, 23, 25, 32, 41, 44,
50, 55, 55, 57, 62, 63, 61, 61, 65, 68, 69, 67, 63, 60, 56, 48, 41, 37, 31, 25,
20, 17, 12, 5, 0, -4, -12, -20, -27, -34, -39, -44, -49, -52, -54, -55, -58,
-65, -67, -65, -64, -64, -62, -59, -56, -55, -54, -54, -53, -48, -40, -33, -25,
-17, -7, 1, 4, 7, 13, 20, 26, 31, 37, 42, 45, 48, 50, 51, 53, 59, 65, 68, 69,
67, 63, 57, 51, 44, 40, 40, 37, 34, 31, 27, 19, 9, 1, -6, -13, -19, -24, -28,
-31, -35, -39, -43, -47, -53, -59, -62, -62, -61, -61, -60, -58, -56, -55, -54,
-53, -51, -47, -40, -33, -28, -23, -15, -6, -1, 3, 10, 18, 25, 30, 33, 37, 40,
45, 50, 54, 59, 64, 67, 66, 63, 60, 59, 58, 56, 53, 49, 46, 43, 38, 31, 23, 18,
12, 6, -2, -9, -15, -20, -23, -27, -33, -38, -41, -46, -52, -58, -60, -61, -61,
-61, -60, -58, -55, -52, -52, -50, -47, -43, -39, -35, -31, -26, -19, -10, -3,
1, 6, 14, 19, 21, 25, 31, 36, 40, 43, 43, 45, 49, 52, 51, 49, 49, 51, 51, 49,
46, 42, 38, 34, 29, 24, 22, 20, 16, 11, 6, 1, -6, -13, -17, -21, -24, -25, -27,
-31, -35, -39, -43, -45, -45, -47, -48, -45, -42, -43, -44, -43, -41, -39, -37,
-32, -29, -25, -21, -15, -10, -6, -1, 4, 8, 12, 14, 18, 23, 28, 32, 34, 36, 38,
40, 42, 43, 44, 45, 46, 47, 44, 41, 39, 37, 34, 31, 29, 26, 24, 20, 15, 11, 6,
0, -6, -11, -16, -20, -23, -24, -26, -30, -33, -36, -40, -44, -49, -52, -50,
-48, -47, -46, -45, -43, -42, -42, -40, -38, -35, -30, -26, -22, -18, -11, -5,
0, 3, 8, 13, 18, 22, 25, 30, 35, 38, 40, 42, 46, 49, 51, 52, 53, 52, 52, 51, 49,
47, 45, 42, 38, 35, 30, 25, 20, 16, 9, 3, -2, -7, -12, -17, -21, -27, -32, -36,
-40, -46, -50, -52, -54, -55, -55, -55, -56, -55, -54, -54, -54, -51, -47, -43,
-39, -34, -30, -25, -18, -11, -5, 1, 7, 12, 16, 20, 24, 29, 34, 39, 44, 49, 53,
56, 57, 57, 59, 59, 59, 58, 57, 54, 52, 49, 45, 40, 36, 32, 28, 23, 17, 10, 3,
-2, -7, -13, -19, -24, -28, -33, -38, -43, -48, -52, -56, -59, -62, -62, -61,
-61, -62, -61, -60, -58, -57, -54, -50, -46, -41, -36, -31, -26, -20, -14, -7,
-1, 5, 12, 18, 24, 28, 32, 36, 41, 45, 48, 53, 56, 59, 62, 63, 62, 60, 59, 58,
56, 53, 51, 49, 45, 40, 35, 30, 25, 19, 13, 8, 4, -1, -6, -11, -16, -22, -28,
-33, -38, -42, -45, -48, -50, -51, -52, -54, -55, -55, -56, -56, -55, -54, -51,
-48, -44, -41, -37, -33, -28, -22, -17, -12, -7, -2, 2, 6, 10, 15, 20, 25, 30,
35, 39, 42, 45, 47, 48, 48, 49, 49, 49, 47, 46, 45, 44, 41, 39, 36, 33, 28, 23,
18, 13, 9, 5, 1, -3, -7, -12, -17, -21, -25, -30, -33, -35, -37, -39, -41, -42,
-42, -43, -45, -45, -44, -42, -40, -38, -35, -32, -29, -26, -23, -19, -15, -11,
-6, -2, 2, 6, 10, 13, 16, 19, 23, 26, 29, 32, 35, 38, 39, 40, 39, 38, 38, 37,
36, 35, 34, 32, 29, 26, 23, 19, 15, 12, 8, 5, 2, -1, -5, -9, -13, -17, -20, -24,
-27, -30, -32, -33, -34, -35, -36, -36, -36, -37, -37, -36, -35, -33, -31, -28,
-25, -21, -18, -15, -12, -8, -4, -1, 2, 4, 7, 10, 12, 15, 19, 23, 26, 28, 30,
32, 32, 32, 32, 31, 30, 29, 28, 27, 25, 24, 23, 21, 18, 15, 13, 10, 7, 3, 0, -3,
-5, -8, -11, -13, -16, -18, -20, -22, -23, -25, -26, -27, -28, -28, -28, -28,
-27, -27, -25, -23, -22, -20, -18, -16, -13, -11, -8, -6, -3, -1, 2, 4, 6, 8,
11, 14, 16, 18, 20, 22, 23, 24, 24, 25, 26, 25, 24, 23, 22, 20, 19, 17, 15, 13,
11, 9, 7, 4, 1, -2, -4, -6, -9, -12, -14, -16, -18, -20, -22, -23, -24, -26,
-27, -27, -27, -26, -26, -25, -24, -23, -21, -19, -18, -16, -14, -11, -8, -5,
-3, 1, 4, 7, 9, 12, 14, 16, 17, 19, 21, 23, 25, 27, 29, 30, 31, 31, 31, 29, 28,
26, 24, 23, 21, 19, 17, 14, 11, 8, 6, 2, -1, -4, -7, -10, -14, -17, -21, -24,
-26, -29, -31, -32, -33, -34, -35, -36, -36, -36, -36, -36, -35, -33, -31, -28,
-26, -23, -20, -16, -13, -9, -5, -2, 2, 6, 9, 13, 17, 20, 23, 25, 28, 31, 33,
35, 37, 38, 39, 40, 39, 39, 38, 37, 35, 33, 31, 28, 25, 22, 18, 15, 11, 8, 4, 0,
-3, -7, -11, -14, -18, -21, -24, -27, -30, -33, -35, -37, -39, -40, -41, -41,
-41, -41, -40, -38, -36, -34, -33, -30, -27, -24, -21, -18, -14, -11, -7, -3, 1,
5, 9, 13, 16, 19, 22, 25, 27, 30, 32, 35, 36, 38, 39, 39, 39, 38, 37, 35, 33,
32, 29, 27, 24, 21, 18, 15, 12, 9, 5, 2, -2, -5, -9, -12, -16, -19, -22, -25,
-27, -29, -31, -33, -34, -35, -35, -36, -36, -35, -34, -33, -32, -30, -28, -26,
-23, -21, -18, -15, -12, -9, -6, -3, 0, 3, 7, 10, 13, 16, 19, 22, 24, 26, 28,
29, 30, 31, 31, 32, 32, 32, 31, 30, 29, 27, 25, 22, 20, 17, 15, 12, 9, 6, 3, 0,
-3, -6, -9, -12, -15, -18, -20, -23, -25, -27, -29, -31, -32, -33, -33, -33,
-32, -31, -30, -28, -27, -26, -24, -21, -19, -16, -14, -11, -8, -5, -2, 1, 5, 8,
11, 14, 17, 20, 22, 23, 25, 27, 28, 30, 30, 31, 31, 31, 30, 29, 28, 26, 24, 22,
20, 18, 15, 12, 10, 7, 4, 1, -2, -5, -8, -11, -14, -17, -19, -22, -24, -26, -28,
-29, -30, -31, -31, -31, -31, -31, -30, -29, -28, -27, -25, -22, -20, -17, -14,
-11, -9, -6, -3, 0, 2, 5, 8, 12, 14, 17, 20, 22, 24, 26, 28, 29, 29, 29, 29, 29,
28, 28, 27, 25, 24, 22, 20, 17, 15, 12, 9, 7, 4, 1, -1, -4, -7, -9, -12, -15,
-17, -19, -21, -22, -24, -25, -26, -27, -28, -28, -28, -27, -26, -25, -23, -22,
-20, -18, -16, -14, -12, -10, -7, -5, -3, 0, 2, 5, 8, 10, 13, 15, 17, 19, 20,
21, 23, 24, 25, 25, 25, 25, 24, 24, 23, 21, 19, 18, 16, 14, 12, 10, 8, 5, 3, 1,
-2, -4, -7, -9, -12, -14, -17, -19, -21, -22, -24, -25, -26, -26, -27, -27, -26,
-26, -25, -25, -24, -22, -21, -19, -17, -15, -12, -9, -7, -4, -1, 1, 3, 6, 8,
11, 13, 15, 18, 20, 22, 24, 26, 27, 28, 29, 29, 29, 28, 27, 26, 25, 24, 22, 21,
19, 17, 14, 12, 9, 6, 4, 1, -2, -4, -7, -10, -13, -16, -18, -21, -23, -25, -27,
-29, -30, -31, -32, -32, -32, -32, -32, -31, -30, -29, -27, -25, -23, -21, -18,
-16, -13, -10, -7, -4, -1, 2, 5, 8, 12, 15, 18, 21, 23, 25, 27, 28, 30, 31, 32,
32, 32, 32, 31, 31, 29, 28, 26, 24, 22, 20, 18, 15, 12, 10, 7, 4, 1, -2, -5, -8,
-11, -14, -17, -19, -21, -23, -25, -27, -28, -29, -29, -30, -30, -30, -29, -29,
-28, -27, -26, -25, -23, -21, -18, -16, -13, -10, -8, -5, -3, 0, 2, 5, 7, 10,
13, 15, 17, 19, 21, 23, 24, 24, 25, 25, 25, 24, 24, 23, 23, 22, 20, 19, 17, 16,
14, 12, 10, 7, 5, 3, 1, -1, -4, -6, -8, -10, -12, -14, -16, -17, -19, -19, -20,
-21, -21, -21, -21, -21, -20, -20, -19, -18, -17, -16, -14, -13, -11, -10, -8,
-6, -4, -2, -1, 2, 4, 6, 8, 9, 11, 12, 13, 14, 15, 15, 16, 16, 17, 17, 17, 17,
16, 15, 14, 13, 12, 11, 10, 8, 7, 6, 4, 3, 1, 0, -2, -4, -6, -7, -9, -10, -12,
-13, -14, -15, -15, -16, -16, -16, -16, -16, -16, -15, -15, -14, -14, -13, -12,
-11, -9, -8, -6, -5, -3, -1, 0, 2, 3, 5, 6, 8, 9, 10, 12, 13, 14, 14, 15, 15,
15, 14, 14, 13, 13, 12, 12, 11, 10, 9, 8, 6, 5, 4, 2, 1, -1, -2, -3, -5, -6, -8,
-9, -10, -11, -12, -13, -13, -14, -14, -14, -14, -14, -13, -13, -12, -12, -11,
-10, -9, -8, -7, -6, -5, -3, -2, -1, 1, 2, 3, 5, 6, 8, 9, 10, 11, 12, 12, 12,
12, 12, 12, 12, 11, 11, 10, 9, 9, 8, 7, 5, 4, 3, 1, 0, -2, -3, -5, -6, -7, -8,
-9, -10, -11, -12, -13, -14, -14, -14, -14, -14, -14, -13, -13, -12, -11, -10,
-9, -8, -6, -5, -3, -2, 0, 1, 3, 4, 6, 7, 8, 10, 11, 12, 13, 14, 14, 15, 15, 15,
16, 15, 15, 15, 14, 13, 12, 11, 9, 8, 6, 5, 3, 2, 0, -1, -3, -5, -6, -8, -10,
-11, -13, -14, -16, -17, -18, -19, -19, -20, -20, -20, -20, -20, -19, -19, -18,
-17, -16, -15, -13, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 13, 15, 16,
18, 19, 20, 21, 22, 23, 23, 23, 22, 22, 21, 20, 19, 18, 16, 15, 13, 11, 10, 8,
5, 3, 1, -1, -3, -6, -8, -10, -12, -14, -15, -17, -19, -20, -22, -23, -24, -24,
-25, -25, -25, -25, -24, -24, -23, -22, -20, -19, -18, -16, -14, -12, -10, -8,
-5, -3, -1, 2, 4, 6, 9, 11, 13, 15, 17, 18, 20, 21, 22, 23, 24, 24, 25, 25, 24,
24, 23, 22, 20, 19, 17, 15, 14, 12, 10, 8, 6, 4, 1, -1, -4, -6, -8, -11, -13,
-15, -17, -18, -20, -21, -22, -23, -23, -23, -23, -23, -23, -23, -22, -21, -20,
-19, -17, -16, -14, -12, -10, -8, -6, -3, -1, 1, 3, 5, 7, 9, 11, 13, 15, 16, 17,
19, 19, 20, 20, 20, 20, 20, 19, 19, 18, 17, 16, 15, 13, 12, 10, 8, 6, 4, 2, 1,
-1, -3, -5, -7, -9, -10, -12, -14, -15, -16, -17, -18, -19, -19, -19, -20, -19,
-19, -18, -18, -17, -16, -15, -13, -12, -11, -9, -7, -6, -4, -2, 0, 2, 4, 6, 7,
9, 11, 12, 13, 14, 15, 16, 16, 17, 17, 17, 17, 17, 16, 16, 15, 14, 13, 12, 10,
9, 8, 6, 5, 3, 2, 0, -1, -3, -5, -6, -8, -9, -11, -12, -13, -14, -15, -15, -16,
-16, -16, -16, -16, -16, -16, -16, -15, -14, -14, -13, -12, -11, -9, -8, -6, -5,
-3, -2, 0, 2, 3, 4, 6, 7, 9, 10, 11, 12, 13, 14, 14, 14, 14, 14, 14, 14, 14, 13,
13, 12, 11, 10, 9, 8, 7, 5, 4, 3, 1, 0, -2, -3, -4, -5, -7, -8, -9, -10, -11,
-12, -12, -13, -13, -13, -13, -13, -13, -13, -12, -12, -11, -10, -9, -9, -8, -7,
-5, -4, -3, -2, -1, 1, 2, 3, 5, 6, 7, 8, 9, 9, 10, 10, 11, 11, 11, 11, 11, 10,
10, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -9, -9, -10, -11,
-12, -12, -12, -12, -12, -12, -12, -11, -11, -10, -10, -9, -8, -7, -6, -5, -3,
-2, -1, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 13, 13, 13, 13, 13, 12, 12,
11, 10, 9, 8, 7, 6, 5, 4, 2, 1, 0, -2, -3, -5, -6, -8, -9, -10, -11, -12, -13,
-13, -14, -14, -15, -15, -15, -15, -15, -15, -15, -14, -13, -12, -11, -10, -9,
-8, -7, -6, -4, -3, -1, 0, 1, 3, 4, 6, 7, 8, 10, 11, 12, 13, 13, 14, 14, 15, 15,
15, 15, 14, 14, 13, 13, 12, 11, 11, 10, 8, 7, 6, 5, 3, 2, 0, -1, -2, -4, -5, -6,
-8, -9, -10, -11, -12, -13, -13, -14, -14, -14, -14, -14, -14, -14, -14, -13,
-13, -12, -11, -11, -10, -9, -8, -6, -5, -4, -3, -1, 0, 1, 2, 4, 5, 6, 7, 8, 8,
9, 10, 10, 11, 11, 11, 11, 11, 11, 11, 10, 10, 9, 9, 8, 7, 6, 6, 5, 3, 2, 1, 0,
-1, -3, -4, -5, -6, -6, -7, -8, -8, -9, -9, -10, -10, -10, -10, -10, -10, -10,
-10, -9, -9, -8, -7, -6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 6, 7, 7,
8, 8, 8, 8, 8, 8, 8, 7, 7, 6, 6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -2, -3, -4, -5,
-6, -6, -7, -7, -8, -8, -9, -9, -9, -9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -5,
-4, -3, -2, -1, -1, 0, 1, 2, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7,
7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -2, -3, -4, -5, -5, -6, -7, -7, -8, -8, -8,
-9, -9, -9, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1, 2,
2, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 3, 2, 2, 1, 0, 0,
-1, -2, -3, -3, -4, -5, -6, -6, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8,
-7, -7, -6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9, 10,
10, 10, 10, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -6, -7,
-8, -9, -10, -11, -11, -12, -13, -13, -14, -14, -14, -14, -14, -14, -14, -13,
-13, -12, -11, -10, -9, -8, -7, -5, -4, -3, -1, 0, 2, 3, 5, 6, 8, 9, 10, 11, 13,
13, 14, 15, 16, 16, 16, 17, 17, 16, 16, 15, 15, 14, 13, 12, 10, 9, 8, 6, 5, 3,
2, 0, -2, -3, -5, -7, -8, -10, -11, -13, -14, -15, -16, -16, -17, -17, -18, -18,
-18, -18, -18, -17, -17, -16, -15, -14, -13, -12, -10, -9, -8, -6, -5, -3, -1,
0, 2, 3, 5, 6, 8, 9, 11, 12, 13, 14, 14, 15, 15, 16, 16, 16, 16, 15, 15, 14, 14,
13, 12, 11, 10, 9, 8, 6, 5, 3, 2, 0, -1, -2, -4, -5, -6, -8, -9, -10, -11, -12,
-13, -13, -14, -14, -14, -15, -14, -14, -14, -14, -13, -13, -12, -11, -10, -9,
-8, -7, -6, -5, -3, -2, -1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 11, 11, 11, 11,
11, 11, 11, 11, 10, 10, 9, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -3, -4, -5, -6, -7,
-7, -8, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -11, -10, -10, -9, -8,
-8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9, 9, 9, 10,
10, 10, 9, 9, 9, 8, 8, 7, 6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6,
-7, -8, -8, -9, -9, -9, -10, -10, -10, -9, -9, -9, -9, -8, -8, -8, -7, -6, -6,
-5, -4, -3, -2, -1, 0, 0, 1, 2, 3, 3, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
6, 6, 5, 5, 4, 4, 3, 2, 2, 1, 1, 0, -1, -1, -2, -3, -3, -4, -4, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1,
1, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, -1, -1, -1,
-2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3,
-2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5,
5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -3, -4, -4, -5, -6, -6, -7, -7,
-8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -4, -3,
-3, -2, -1, 0, 1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8,
7, 6, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -6, -7, -8, -8, -9, -9,
-9, -9, -10, -10, -10, -10, -9, -9, -9, -8, -8, -7, -7, -6, -5, -4, -4, -3, -2,
-1, 0, 1, 1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4,
3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4,
4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2,
-3, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -5,
-5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6,
7, 7, 6, 6, 6, 6, 6, 5, 5, 4, 4, 3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -4, -4, -5,
-5, -6, -6, -7, -7, -7, -7, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -4, -4,
-3, -3, -2, -1, -1, 0, 1, 2, 2, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5,
5, 4, 4, 3, 3, 2, 1, 1, 0, -1, -1, -2, -3, -3, -4, -4, -5, -5, -6, -6, -7, -7,
-7, -7, -7, -7, -7, -7, -6, -6, -5, -5, -5, -4, -3, -3, -2, -1, 0, 0, 1, 2, 3,
3, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 2, 1, 1, 0,
-1, -2, -3, -4, -5, -5, -6, -7, -8, -8, -9, -9, -9, -10, -10, -10, -10, -10,
-10, -9, -9, -9, -8, -8, -7, -6, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 5, 6,
7, 7, 8, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 7, 7, 6, 5, 4, 3, 2,
1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8, -9, -10, -10, -11, -11, -11, -12, -12,
-12, -12, -11, -11, -11, -10, -10, -9, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1,
2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 9, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 7, 7,
6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -6, -6, -7, -8, -8, -8, -9, -9,
-9, -9, -9, -9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -4, -4, -3, -2, -1, 0, 0, 1,
2, 2, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1,
0, -1, -1, -2, -2, -3, -3, -3, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2,
-2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0,
0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4,
3, 3, 2, 1, 1, 0, -1, -1, -2, -3, -3, -4, -5, -5, -6, -6, -7, -7, -8, -8, -8,
-9, -9, -9, -9, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -4, -3, -3, -2, -1, 0,
1, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 6, 6, 5, 5, 4,
4, 3, 2, 2, 1, 0, -1, -1, -2, -3, -3, -4, -5, -5, -6, -6, -7, -7, -7, -8, -8,
-8, -8, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0,
1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 2, 2,
1, 1, 0, 0, -1, -1, -2, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -6, -6,
-6, -5, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3,
4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2,
-3, -3, -4, -4, -5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5,
-5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6,
6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4,
-5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -3, -3,
-2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3,
3, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1,
1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1,
-1, -2, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5,
5, 5, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 2, 1, 1, 0, 0, -1, -2, -2,
-3, -4, -4, -5, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6,
-6, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1,
-2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3,
-3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1,
-1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5,
5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2,
-3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -7, -7,
-7, -6, -6, -6, -5, -5, -4, -4, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 4, 4, 5, 5, 6,
6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 3, 2, 2, 1, 0, 0, -1, -2,
-2, -3, -3, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7,
-6, -6, -6, -5, -5, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2, 2, 1, 0, 0, 0, -1, -1, -2, -2,
-3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -3, -3,
-3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -3, -3, -3, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2,
2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4,
-4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1,
2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0,
0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0,
1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3,
-3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1,
-1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2,
-1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 5, 5, 5, 5, 5, 4,
4, 4, 3, 3, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5,
-5, -5, -5, -5, -6, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -3, -3, -3, -2, -2,
-1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2,
2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1,
0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2,
2, 2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1,
1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0,
0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, };
 
 #endif /* THUMBPIANO3_H_ */
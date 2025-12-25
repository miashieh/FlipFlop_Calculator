#ifndef FLIPFLOP_H
#define FLIPFLOP_H

// 使用指標傳回下一狀態 (Next State) 與反相狀態 [cite: 10, 227, 231]
void calc_sr(int s, int r, int qn, int* next_q);
void calc_jk(int j, int k, int qn, int* next_q);
void calc_d(int d, int qn, int* next_q);
void calc_t(int t, int qn, int* next_q);

#endif
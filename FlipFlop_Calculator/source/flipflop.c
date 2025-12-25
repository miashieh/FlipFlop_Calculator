#include "../include/flipflop.h"

// SR 正反器邏輯 [cite: 228]
void calc_sr(int s, int r, int qn, int* next_q) {
    if (s == 0 && r == 0) *next_q = qn;      // 保持
    else if (s == 0 && r == 1) *next_q = 0; // 重設
    else if (s == 1 && r == 0) *next_q = 1; // 設置
    else *next_q = -1; // 禁止狀態 (Invalid)
}

// JK 正反器邏輯 (組員開發範例) [cite: 228]
void calc_jk(int j, int k, int qn, int* next_q) {
    if (j == 0 && k == 0) *next_q = qn;
    else if (j == 0 && k == 1) *next_q = 0;
    else if (j == 1 && k == 0) *next_q = 1;
    else *next_q = !qn; // 反相 (Toggle)
}

// D 與 T 正反器可由其他組員在各自的分支實作 [cite: 20, 137]
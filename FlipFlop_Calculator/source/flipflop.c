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

// D 正反器邏輯：下一狀態等於輸入 D
void calc_d(int d, int qn, int* next_q) {
    *next_q = d;
}

// T 正反器邏輯：T=1 時反相，T=0 時保持
void calc_t(int t, int qn, int* next_q) {
    if (t == 0) *next_q = qn;
    else *next_q = !qn;
}
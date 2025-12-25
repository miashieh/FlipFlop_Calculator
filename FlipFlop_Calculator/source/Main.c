#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "../include/flipflop.h"

int main() {
    int choice, qn, next_q;
    FILE* fptr; // 用於檔案紀錄 [cite: 227]

    do {
        printf("\n--- 正反器計算機 ---\n");
        printf("1. SR  2. JK  3. D  4. T  0. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice); //[cite:10]

            if (choice == 0) break;

        printf("輸入當前狀態 Qn (0 或 1): ");
        scanf("%d", &qn);

        // 根據選擇執行對應邏輯 [cite: 10, 11, 227, 228]
        switch (choice) {
        case 1: // SR 正反器 [cite: 11, 227]
        {
            int s, r;
            printf("輸入 S 與 R (用空格隔開, 如 '1 0'): ");
            scanf("%d %d", &s, &r);
            calc_sr(s, r, qn, &next_q); // 傳入 next_q 的位址 (指標應用) 
            break;
        }
        case 2: // JK 正反器 [cite: 11, 227]
        {
            int j, k;
            printf("輸入 J 與 K (用空格隔開, 如 '1 1'): ");
            scanf("%d %d", &j, &k);
            calc_jk(j, k, qn, &next_q); //[cite:227]
                break;
        }
        case 3: // D 正反器 [cite: 11, 227]
        {
            int d;
            printf("輸入 D (0 或 1): ");
            scanf("%d", &d);
            calc_d(d, qn, &next_q);// [cite:227]
                break;
        }
        case 4: // T 正反器 [cite: 11, 227]
        {
            int t;
            printf("輸入 T (0 或 1): ");
            scanf("%d", &t);
            calc_t(t, qn, &next_q);// [cite:227]
                break;
        }
        default:
            printf("無效的選擇，請重新輸入。\n"); //[cite:11]
                continue; // 跳過本次迴圈剩餘部分，重新開始 [cite: 11, 227]
        }

        // 課外延伸：使用 ANSI Colors 顯示結果 (15分) [cite: 15, 126, 235]
        printf("\033[1;32m下一狀態 Qn+1 = %d\033[0m\n", next_q);

        // 將紀錄寫入檔案 [cite: 13, 227, 231]
        fptr = fopen("history.txt", "a");
        fprintf(fptr, "選擇: %d, Qn: %d, Next Q: %d\n", choice, qn, next_q);
        fclose(fptr);

    } while (choice != 0);// [cite:11, 227]

        return 0;
}
#include <stdio.h>
#include "../include/flipflop.h"

int main() {
    int choice, qn, next_q;
    FILE* fptr; // 用於檔案紀錄 [cite: 227]

    do {
        printf("\n--- 正反器計算機 ---\n");
        printf("1. SR  2. JK  3. D  4. T  0. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice); [cite:10];

            if (choice == 0) break;

        printf("輸入當前狀態 Qn (0 或 1): ");
        scanf("%d", &qn);

        // 根據選擇執行對應邏輯 [cite: 11, 227, 228]
        switch (choice) {
        case 1:
            // 呼叫 SR 邏輯...
            break;
            // 其他 Case...
        }

        // 課外延伸：使用 ANSI Colors 顯示結果 (15分) [cite: 15, 126, 235]
        printf("\033[1;32m下一狀態 Qn+1 = %d\033[0m\n", next_q);

        // 將紀錄寫入檔案 [cite: 13, 227, 231]
        fptr = fopen("history.txt", "a");
        fprintf(fptr, "選擇: %d, Qn: %d, Next Q: %d\n", choice, qn, next_q);
        fclose(fptr);

    } while (choice != 0); [cite:11, 227] ;

        return 0;
}
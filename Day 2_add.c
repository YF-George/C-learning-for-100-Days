#include <stdio.h>

int main() {
    // 第一種寫法：一次性讀取所有整數
    int integer1, integer2, integer3, sum1;
    printf("First method:\n");
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);  // 讀取並儲存第一個整數
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);  // 讀取並儲存第二個整數
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);  // 讀取並儲存第三個整數

    sum1 = integer1 + integer2 + integer3;  // 計算這三個整數的和
    printf("Sum (first method) is %d.\n\n", sum1);  // 顯示總和

    // 第二種寫法：每次讀取並累加一個整數
    int integer, sum2 = 0;
    printf("Second method:\n");
    printf("Please enter the first integer: ");
    scanf("%d", &integer);  // 讀取第一個整數
    sum2 += integer;  // 累加到總和
    printf("Please enter the second integer: ");
    scanf("%d", &integer);  // 讀取第二個整數
    sum2 += integer;  // 累加到總和
    printf("Please enter the third integer: ");
    scanf("%d", &integer);  // 讀取第三個整數
    sum2 += integer;  // 累加到總和

    printf("Sum (second method) is %d.\n\n", sum2);  // 顯示總和

    // 更優化的寫法：使用循環和陣列
    int n, i, sum3 = 0;
    printf("Optimized method:\n");
    printf("How many integers would you like to sum? ");
    scanf("%d", &n);  // 讀取欲輸入整數的數量

    // 檢查輸入的數量是否有效
    if (n <= 0) {
        printf("The number of integers must be positive.\n");
        return 1;  // 結束程序，如果輸入的數量無效
    }

    int integers[n];  // 定義一個陣列來存儲輸入的整數

    // 使用循環來讀取並累加整數
    for (i = 0; i < n; i++) {  // 循環開始：從0到n-1，每次遞增1
        printf("Please enter integer %d: ", i + 1);  // 輸出提示，請使用者輸入第i+1個整數
        scanf("%d", &integers[i]);  // 讀取第 i+1 個整數並存入陣列中
        sum3 += integers[i];  // 將這個整數累加到總和變數 sum3 中
    }

    // 循環解釋：
    // 1. 循環變數 `i` 由 0 開始，每次增加 1，直到 `i` 到達 `n-1`。
    //    這樣可以確保循環共執行 `n` 次。
    // 2. 在每次迭代中：
    //    a. 輸出提示使用者輸入一個整數，提示訊息包括整數的序號 (i + 1)。
    //    b. 使用 `scanf` 讀取使用者的輸入，並將其存入陣列 `integers` 的第 i 個位置。
    //    c. 將剛讀取的整數值添加到變數 `sum3` 中，累加求和。

    printf("Sum (optimized method) is %d.\n", sum3);  // 循環結束，顯示累計的總和

    return 0;
}
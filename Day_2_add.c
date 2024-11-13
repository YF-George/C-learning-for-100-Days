#include <stdio.h>

int main() {
    // 第一種寫法：一次性讀取所有整數並計算總和
    int integer1, integer2, integer3, sum1;
    printf("First method:\n");
    printf("Please enter the first integer: ");
    scanf("%d", &integer1); // 讀取並儲存第一個整數
    printf("Please enter the second integer: ");
    scanf("%d", &integer2); // 讀取並儲存第二個整數
    printf("Please enter the third integer: ");
    scanf("%d", &integer3); // 讀取並儲存第三個整數

    sum1 = integer1 + integer2 + integer3;  // 計算三個整數的和
    printf("Sum (first method) is %d.\n\n", sum1); // 顯示總和

    // 第二種寫法：每次讀取一個整數並累加
    int integer, sum2 = 0;
    printf("Second method:\n");
    printf("Please enter the first integer: ");
    scanf("%d", &integer); // 讀取第一個整數
    sum2 += integer;        // 累加到總和
    printf("Please enter the second integer: ");
    scanf("%d", &integer); // 讀取第二個整數
    sum2 += integer;        // 累加到總和
    printf("Please enter the third integer: ");
    scanf("%d", &integer); // 讀取第三個整數
    sum2 += integer;        // 累加到總和

    printf("Sum (second method) is %d.\n\n", sum2); // 顯示總和

    // 更優化的寫法：使用循環和陣列處理不定數量的整數
    int n, i, sum3 = 0;
    printf("Optimized method:\n");
    printf("How many integers would you like to sum? ");
    scanf("%d", &n); // 讀取欲輸入整數的數量

    // 檢查輸入的數量是否有效
    if (n <= 0) {
        printf("The number of integers must be positive.\n");
        return 1; // 結束程式，如果輸入的數量無效
    }

    int integers[n]; // 根據輸入的數量動態定義陣列

    // 使用循環來讀取並累加整數
    for (i = 0; i < n; i++) { // 循環從 0 到 n-1
        printf("Please enter integer %d: ", i + 1); // 提示使用者輸入第 i+1 個整數
        scanf("%d", &integers[i]); // 讀取整數並存入陣列
        sum3 += integers[i]; // 將讀取的整數累加到總和
    }

    // 顯示累計的總和
    printf("Sum (optimized method) is %d.\n", sum3); 

    return 0; // 程式結束
}

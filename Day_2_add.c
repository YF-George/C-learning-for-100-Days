#include <stdio.h>

// 函數用於讀取整數並返回其值
int readInteger(int index)
{
    int value;
    printf("請輸入第 %d 個整數：", index);
    scanf("%d", &value);
    return value;
}

int main()
{
    // 第一種寫法：一次性讀取所有整數並計算總和
    int integer1, integer2, integer3, sum1;
    printf("第一種寫法：\n");
    integer1 = readInteger(1); // 讀取第一個整數
    integer2 = readInteger(2); // 讀取第二個整數
    integer3 = readInteger(3); // 讀取第三個整數

    sum1 = integer1 + integer2 + integer3;         // 計算總和
    printf("總和（第一種寫法）是 %d。\n\n", sum1); // 顯示總和

    // 第二種寫法：每次讀取一個整數並累加
    int integer, sum2 = 0;
    printf("第二種寫法：\n");
    sum2 += readInteger(1); // 累加第一個整數
    sum2 += readInteger(2); // 累加第二個整數
    sum2 += readInteger(3); // 累加第三個整數

    printf("總和（第二種寫法）是 %d。\n\n", sum2); // 顯示總和

    // 顯示加法過程
    printf("加法過程：\n");
    printf("%d + %d + %d = %d\n", integer1, integer2, integer3, sum1); // 顯示計算過程

    // 優化版本：允許用戶輸入更多整數並計算總和
    int n, i, sum3 = 0;
    printf("你想計算多少個整數的總和？ ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int num = readInteger(i); // 讀取每個整數
        sum3 += num;              // 累加到總和
        if (i < n)
        {
            printf("%d + ", num); // 顯示中間過程
        }
        else
        {
            printf("%d = %d\n", num, sum3); // 顯示最終結果
        }
    }

    printf("總和（優化後的寫法）是 %d。\n", sum3); // 顯示總和

    return 0; // 程式結束
}

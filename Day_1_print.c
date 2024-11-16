#include <stdio.h> // 標準輸入輸出庫

int main(void)
{
    // 輸出字串
    printf("Hello\n");               // 輸出 "Hello"
    printf("world!\n");              // 輸出 "world!"
    printf("hellow \"c\" world!\n"); // 輸出包含雙引號的字串
    printf("hellow \\n world\n");    // 輸出包含反斜線的字串

    // 輸出字母圖形：H 和 A 組成的圖案
    printf("\n字母圖形:\n");
    printf("H     H     A\n");
    printf("H     H    A A\n");
    printf("HHHHHHH   A   A\n");
    printf("H     H  AAAAAAA\n");
    printf("H     H  A     A\n");

    // 數字格式化範例
    int number = 42;
    printf("\n數字格式化範例:\n");
    printf("右對齊數字：|%10d|\n", number);             // 右對齊，總長度10
    printf("左對齊數字：|%-10d|\n", number);            // 左對齊，總長度10
    printf("浮點數：%.2f\n", 3.14159);                  // 顯示浮點數，保留兩位小數
    printf("浮點數（總長度控制）：|%8.2f|\n", 3.14159); // 控制總長度並保留兩位小數

    // 顯示數字轉換為十六進制和八進制
    printf("\n數字轉換範例:\n");
    printf("整數 %d 以十六進制顯示：%X\n", number, number); // 十六進制
    printf("整數 %d 以八進制顯示：%o\n", number, number);   // 八進制

    // 顯示字符和字串
    char c = 'A';
    char str[] = "Hello, C!";
    printf("\n字符與字串輸出範例:\n");
    printf("字符：%c\n", c);                  // 顯示字符
    printf("字符（用ASCII值表示）：%d\n", c); // 顯示字符的ASCII值
    printf("字串：%s\n", str);                // 顯示字串

    // 使用條件語句進行邏輯判斷
    int a = 5, b = 7;
    printf("\n條件語句範例:\n");
    if (a > b)
    {
        printf("結果：a 比 b 大\n");
    }
    else
    {
        printf("結果：a 比 b 小或相等\n");
    }

    // 使用循環輸出 1 到 5
    printf("\n循環輸出1到5:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0; // 結束程式
}

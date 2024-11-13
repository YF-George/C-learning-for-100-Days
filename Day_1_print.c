#include <stdio.h> // 標準輸入輸出庫

// 輸出字母圖形的函數
void printPattern(void)
{
    printf("H     H     A\n");
    printf("H     H    A A\n");
    printf("HHHHHHH   A   A\n");
    printf("H     H  AAAAAAA\n");
    printf("H     H  A     A\n");
}

int main(void)
{
    // 輸出不同的字符串
    printf("Hello\n");
    printf("world!\n");
    printf("hellow \"c\" world!\n");
    printf("hellow \\n world\n");

    // 呼叫函數輸出字母圖形
    printPattern();

    // 另一種方式：直接輸出字母圖形
    printf(
        "H     H     A\n"
        "H     H    A A\n"
        "HHHHHHH   A   A\n"
        "H     H  AAAAAAA\n"
        "H     H  A     A\n");

    // 數字格式化輸出示例
    int number = 42;
    printf("\n數字格式化範例：\n");

    // 控制輸出長度和對齊方式
    printf("右對齊數字：|%10d|\n", number);  // 右對齊，總長度10
    printf("左對齊數字：|%-10d|\n", number); // 左對齊，總長度10

    // 控制小數位數
    printf("浮點數：%.2f\n", 3.14159);                  // 顯示浮點數，保留兩位小數
    printf("浮點數（總長度控制）：|%8.2f|\n", 3.14159); // 控制總長度並保留兩位小數

    // 使用變數進行計算並顯示結果
    int a = 5, b = 7;
    printf("\n變數計算範例：\n");
    printf("a + b = %d\n", a + b); // 顯示加法結果
    printf("a * b = %d\n", a * b); // 顯示乘法結果

    // 輸出十六進制和八進制數字
    printf("\n數字轉換範例：\n");
    printf("整數 %d 以十六進制顯示：%X\n", number, number); // 十六進制
    printf("整數 %d 以八進制顯示：%o\n", number, number);   // 八進制

    // 顯示字符
    char c = 'A';
    printf("\n字符輸出範例：\n");
    printf("字符：%c\n", c);                  // 顯示字符
    printf("字符（用ASCII值表示）：%d\n", c); // 顯示字符的ASCII值

    // 顯示字串
    char str[] = "Hello, C!";
    printf("\n字串輸出範例：\n");
    printf("字串：%s\n", str); // 顯示字串

    // 使用條件語句展示邏輯判斷
    if (a > b)
    {
        printf("\n結果：a 比 b 大\n");
    }
    else
    {
        printf("\n結果：a 比 b 小或相等\n");
    }

    // 使用循環輸出1到5的數字
    printf("\n循環輸出1到5：\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0; // 結束程式
}

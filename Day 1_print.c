#include <stdio.h> // 引入標準輸入輸出標頭檔案

int main(void) {
    // 輸出 "Hello" 並換行
    printf("Hello\n");

    // 輸出 "world!" 並換行
    printf("world!\n");

    // 輸出包含雙引號的字符串 "hellow "c" world!"
    printf("hellow \"c\" world!\n");

    // 輸出包含反斜槓的字符串 "hellow \n world"
    printf("hellow \\n world\n");

    // 輸出由字符 H 和 A 組成的圖形（逐行輸出）
    printf("H     H     A\n");    // 第一行
    printf("H     H    A A\n");   // 第二行
    printf("HHHHHHH   A   A\n");  // 第三行
    printf("H     H  AAAAAAA\n"); // 第四行
    printf("H     H  A     A\n"); // 第五行
    printf("\n");               // 輸出空行分隔

    // 使用單次 printf 語句輸出相同圖形，提升可讀性
    printf(
        "H     H     A\n"
        "H     H    A A\n"
        "HHHHHHH   A   A\n"
        "H     H  AAAAAAA\n"
        "H     H  A     A\n");

    return 0; // 程式成功結束
}

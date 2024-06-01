#include <stdio.h>  // 引入標準輸入輸出標頭檔案

int main(void) {
    // 輸出 "Hello"
    printf("Hello\n");
    
    // 輸出 "world!" 並換行
    printf("world!\n");
    
    // 輸出包含雙引號的字符串 "hellow "c" world!"
    printf("hellow \"c\" world!\n");
    
    // 輸出包含反斜槓和字符 n 的字符串 "hellow \n world"
    printf("hellow \\n world\n");
    
    // 用普通方式輸出一個 H 和 A 組合的圖形
    // normal
    printf("H     H     A\n");   // 輸出 "H     H     A"
    printf("H     H    A A\n");  // 輸出 "H     H    A A"
    printf("HHHHHHH   A   A\n"); // 輸出 "HHHHHHH   A   A"
    printf("H     H  AAAAAAA\n"); // 輸出 "H     H  AAAAAAA"
    printf("H     H  A     A\n"); // 輸出 "H     H  A     A"
    printf("\n");                // 輸出一個空行
    
    // 用更好的方式（單次 printf 語句）輸出相同的圖形
    // better
    printf(
        "H     H     A\n"
        "H     H    A A\n"
        "HHHHHHH   A   A\n"
        "H     H  AAAAAAA\n"
        "H     H  A     A\n"
    );

    return 0;  // 返回 0，程式成功結束
}
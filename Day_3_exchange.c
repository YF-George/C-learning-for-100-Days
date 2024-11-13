#include <stdio.h> // 引入標準輸入輸出函式庫，提供基本的輸入輸出功能

int main(void){
    int integer1, integer2, temp; // 宣告兩個整數變數以及一個臨時變數 temp 用於交換操作

    // 輸入第一個整數
    printf("請輸入第一個整數: ");
    scanf("%d", &integer1);

    // 輸入第二個整數
    printf("請輸入第二個整數: ");
    scanf("%d", &integer2);

    // 方法 1: 使用臨時變數進行交換
    temp = integer1;     // 將 integer1 的值存儲到 temp 中
    integer1 = integer2; // 將 integer2 的值賦給 integer1
    integer2 = temp;     // 將 temp（原 integer1）賦給 integer2
    printf("交換後的值(方式1): integer1 = %d, integer2 = %d\n", integer1, integer2);

    // 輸入新的整數值以便使用第二種交換方法
    printf("請再次輸入第一個整數: ");
    scanf("%d", &integer1);
    printf("請再次輸入第二個整數: ");
    scanf("%d", &integer2);

    // 方法 2: 使用加法和減法進行交換
    integer1 = integer1 + integer2; // integer1 現在保存兩個數的總和
    integer2 = integer1 - integer2; // integer2 現在是原來的 integer1
    integer1 = integer1 - integer2; // integer1 現在是原來的 integer2
    printf("交換後的值(方式2): integer1 = %d, integer2 = %d\n", integer1, integer2);

    // 輸入新的整數值以便使用第三種交換方法
    printf("請再次輸入第一個整數: ");
    scanf("%d", &integer1);
    printf("請再次輸入第二個整數: ");
    scanf("%d", &integer2);

    // 方法 3: 使用 XOR 位運算進行交換
    integer1 = integer1 ^ integer2; // 進行 XOR 操作，integer1 包含了 integer1 和 integer2 的位元組合
    integer2 = integer1 ^ integer2; // 這一步會恢復 integer2 為原來的 integer1
    integer1 = integer1 ^ integer2; // 這一步會恢復 integer1 為原來的 integer2
    printf("交換後的值(方式3): integer1 = %d, integer2 = %d\n", integer1, integer2);

    // 註解：使用 XOR 位運算進行交換
    // XOR 操作：兩個相同的位元結果為 0，不同的結果為 1
    // 步驟：
    // 1. integer1 = integer1 ^ integer2;  // 結果是 integer1 和 integer2 的位元組合
    // 2. integer2 = integer1 ^ integer2;  // 這樣 integer2 變成原 integer1
    // 3. integer1 = integer1 ^ integer2;  // 這樣 integer1 變成原 integer2

    // 輸入新的整數值以便使用第四種交換方法
    printf("請再次輸入第一個整數: ");
    scanf("%d", &integer1);
    printf("請再次輸入第二個整數: ");
    scanf("%d", &integer2);

    // 方法 4: 使用多重賦值進行交換
    // 這種方法通過同時賦值給多個變數來進行交換
    temp = integer1;     // 保存 integer1 的值到 temp
    integer1 = integer2; // 將 integer2 的值賦給 integer1
    integer2 = temp;     // 將 temp 中的原 integer1 賦給 integer2
    printf("交換後的值(方式4): integer1 = %d, integer2 = %d\n", integer1, integer2);

    // 程式結束，返回 0，表示正常退出
    return 0; // 程式執行成功後返回 0，表示程序執行無誤
}

#include <stdio.h> // 引入標準輸入輸出標頭檔案

int main(void) {
  int integer1, integer2, temp; // 宣告三個整數變數，其中 temp 用於臨時存儲值

  printf("請輸入第一個整數: "); // 提示用戶輸入第一個整數
  scanf("%d", &integer1); // 讀取用戶輸入的第一個整數並存入 integer1
  printf("請輸入第二個整數: "); // 提示用戶輸入第二個整數
  scanf("%d", &integer2); // 讀取用戶輸入的第二個整數並存入 integer2

  // 方法 1: 使用臨時變數交換
  temp = integer1;     // 將 integer1 的值存儲在 temp 中
  integer1 = integer2; // 將 integer2 的值賦給 integer1
  integer2 = temp;     // 將 temp 中的值（原 integer1）賦給 integer2
  printf("交換後的值（方式1）：integer1 = %d, integer2 = %d\n", integer1,
         integer2);

  // 重新讀取輸入以便進行下一種方法
  printf("請再次輸入第一個整數: ");
  scanf("%d", &integer1);
  printf("請再次輸入第二個整數: ");
  scanf("%d", &integer2);

  // 方法 2: 使用加法和減法交換
  integer1 = integer1 + integer2; // integer1 現在等於兩數之和
  integer2 = integer1 - integer2; // integer2 現在等於原來的 integer1
  integer1 = integer1 - integer2; // integer1 現在等於原來的 integer2
  printf("交換後的值（方式2）：integer1 = %d, integer2 = %d\n", integer1,
         integer2);

  // 重新讀取輸入以便進行下一種方法
  printf("請再次輸入第一個整數: ");
  scanf("%d", &integer1);
  printf("請再次輸入第二個整數: ");
  scanf("%d", &integer2);

  // 方法 3: 使用異或運算交換
  integer1 = integer1 ^ integer2; // integer1 現在等於 integer1 XOR integer2
  integer2 = integer1 ^ integer2; // integer2 現在等於原來的 integer1
  integer1 = integer1 ^ integer2; // integer1 現在等於原來的 integer2
  printf("交換後的值（方式3）：integer1 = %d, integer2 = %d\n", integer1,
         integer2);

  // XOR（異或）是一種位元運算符號，用於在位元級別對兩個數字進行操作。
  // 當執行 XOR 操作時，如果兩個對應位不同，則結果為1；如果相同，則結果為0。
  // 這可以應用於交換兩個數值而不需要使用臨時變數的方法。
  // 交換變量的 XOR 方法
  // 異或運算的特點使其能夠在交換兩個整數值時，不需要額外的臨時變數。
  // 這種方法具體操作如下：
  // 假設有兩個變數 A 和 B：
  // A = A ^ B
  // B = A ^ B (之後 B 就是 A 原來的值了)
  // A = A ^ B (之後 A 就是 B 原來的值了)
  // 為什麼這樣能夠成功交換？
  // 在進行 A = A ^ B 操作後，A 變成了新的值。
  // 當進行 B = A ^ B 操作時，由於 A 已經是經過 A ^ B 的結果，
  // 所以這一步可以被理解為：B = (A ^ B) ^ B，根據異或的特性，
  // (A ^ B) ^ B 就等於 A，所以 B 取回 A 的原值。
  // 最後一步 A = A ^ B 則是使用新的 B 值（即 A 的舊值）來完成互換，
  // A 被換成 B 的原始值。

  // 重新讀取輸入以便進行下一種方法
  printf("請再次輸入第一個整數: ");
  scanf("%d", &integer1);
  printf("請再次輸入第二個整數: ");
  scanf("%d", &integer2);

  // 方法 4: 使用多重賦值進行交換
  // 這是一個複合賦值語句，逐步操作如下：
  // (1) temp = integer1  // 將 integer1 的值存入 temp 中
  // (2) integer2 = temp  // 將 temp 的值賦給 integer2
  // (3) integer1 = integer2  // 將 integer2（現在是原來的 integer1 的值）賦給
  // integer1
  temp = integer1;     // 保存 integer1 的值到 temp
  integer1 = integer2; // 將 integer2 的值賦給 integer1
  integer2 = temp; // 將原來 integer1 的值（在 temp 中）賦給 integer2

  // 輸出交換後的值
  printf("交換後的值（方式4）：integer1 = %d, integer2 = %d\n", integer1,
         integer2);

  return 0; // 主程式返回 0，表示順利結束
}
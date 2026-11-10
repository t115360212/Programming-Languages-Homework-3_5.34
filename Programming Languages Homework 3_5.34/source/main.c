#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 遞迴計算 base 的 exponent 次方
long long power(int base, int exponent) {
    // 終止條件：當次方為 1 時，回傳底數本身
    if (exponent == 1) {
        return base;
    }
    // 遞迴步驟：base * base^(exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("請輸入底數 (base) 與次方 (exponent >= 1)，以空白分隔: ");
    scanf("%d %d", &base, &exponent);

    // 防呆檢查：確保次方符合題目假設 (>= 1)
    if (exponent < 1) {
        printf("次方必須是 1 以上的整數！\n");
    }
    else {
        printf("power(%d, %d) = %lld\n", base, exponent, power(base, exponent));
    }

    return 0;
}
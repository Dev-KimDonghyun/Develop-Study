#include <stdio.h>

int main(void) {
    int a, b;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &b);

    int sum = a + b;

    printf("두 수의 합은 %d입니다.\n", sum);

    return 0;
}

// clang index.c -o index
// ./index
#include <stdio.h>

/**
 * 1. 정수값 입력 받기 (ex)412
 * 2.
 * 3. 출력 4+1+2
 */

int main() {
    int n;
    int sum = 0;

    printf("숫자를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        sum += n % 10;
        n /= 10; 
    }

    printf("출력: %d\n", sum);
    return 0;
}

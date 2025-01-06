#include <stdio.h>
// 지수 표현법
// - x10을 e로 표현
// - 0.0000314 = 3.14e-5

int main(){
    printf("%.1lf\n", 1e6);         // 소수점 이하 1자리까지 출력
    printf("%.7lf\n", 3.14e-5);    // 소수점 이하 7자리까지 출력
    printf("%.1e\n", 0.0000314);   // 지수 표현법 사용
    return 0;
}
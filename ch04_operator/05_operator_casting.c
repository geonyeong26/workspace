#include <stdio.h>

/**
 * 형 변환(Casting)
 *  1. 프로모션(small type -> big type)
 *      - 문제 없음 (일반적으로 자동으로 형 변환환)
 *      ex) int 값 -> double 값
 *  2. 캐스팅(bit type -> small type)
 *      - 값의 손실이 생김(직접 코드 작성)
 */

int main(){
    double res;
    res = 5;
    printf("%.1lf", res);

    // 2. 캐스팅
    double pi = 3.14;
    int a;
    a = (int)pi;
    printf("%d", a);
    printf("%.2lf, %d", pi, a);
}
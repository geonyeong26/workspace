#include <stdio.h>

/**
 * 실수자료형(소수점)
 * - float(7), double(15), long double(15이상)
 * - 정수형(int)을 기본으로 사용, 실수형은은 꼭 필요한 경우만 사용
 * - 실수형은 double을 기본으로 사용
 * - 실수형은 값의 범위보다 유효숫자 개수(소수점 몇째자리)까지가 중요
 * 
 * ※ C, JAVA, Python, JavaScript
 *      → 수치연산(C 최강)
 *      → 인공지능 → 수치연산 → Python
 *        Python → 수치연산 → CPyhon
 */
int main(){
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수값: %.20f\n", ft);
    printf("double형 변수값: %.20lf\n", db);

}
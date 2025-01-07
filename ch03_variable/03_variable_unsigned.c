/**
 * 
 */

#include <stdio.h>

int main(){

    unsigned int a; //양수값 2배 범위위
    a = 4294967295; // 2147483647 x 2 + 1
    printf("%d\n",a); //부호 추가해서 10진수 출력력
    a = -1;
    printf("%u\n",a); //부호 없이 10진수 출력력

}
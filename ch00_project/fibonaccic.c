#include <stdio.h>

/**
 * 피보나치 수열 코드 개발
 *  - 피보나치 수열이란, 첫째 및 둘째 항이 1이며
 *    그 뒤의 모든 항은 바로 앞 두 항의 합인 수열이다.
 *  - 1 1 2 3 5 8 13 21 34 55 89 144 ...
 */

int main(){
    
    int a = 0, b = 0;
    int c = 1;

    for(int i = 0; i < 10; i++){
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

}

/*

int a = 1, b = 1, fib;
printf("%d %d ", a, b);

while(1){
    fib = a + b;
    if(fib > 13) break;
    printf("%d ", fib);
    a = b;
    b = fib;
}

*/
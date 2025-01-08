#include <stdio.h>

int main(){
    // 두 수를 입력받고 크기를 비교 프로그램

    int a,b;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("%d가 크다.\n", a);
    } else if(a < b){
        printf("%d가 작다.\n", a);
    } else {
        printf("%d와 %d는 같다.\n", a, b);
    }
}
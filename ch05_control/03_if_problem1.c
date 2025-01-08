#include <stdio.h>

int main(){
    //사용자에게 나이를 입력받고, 20살 이상이면 주류판매 시스템

    int age;

    printf("나이: ");
    scanf("%d", &age);
    //주류 구매 여부 판단단
    if(age >= 20){
        printf("주류 구매가가 가능합니다.\n");
    } else {
        printf("주류 구매가 불가능합니다.\n");
    }
}
#include <stdio.h>

//1~100까지 더하기
int main(){

    int total = 0;

    for(int i=1; i<=100; i++){
        total += i;

    if(total > 30){
        break;         
    }

    }

    printf("1~100까지의 합: %d", total);
}
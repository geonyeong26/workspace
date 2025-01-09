#include <stdio.h>

//짝수합, 홀수합 더하기

int main(){

    int jjack_sum = 0;
    int hol_sum = 0;

    for(int i=1; i<101; i++){
        if(i%2 == 0){
            jjack_sum += i;
        }else{
            hol_sum += i;
        }
    }

    printf("짝수합: %d\n", jjack_sum);
    printf("홀수합: %d\n", hol_sum);
}
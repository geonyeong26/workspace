#include <stdio.h>

//문제 : while문을 사용해서 1~100까지의 홀수합, 짝수합 구하기
int main(){

    int i = 0;
    int jjak_sum = 0;
    int hol_sum = 0;

    while(i < 101){
        if(i % 2 == 0){
            jjak_sum += i;
        }else{
            hol_sum += i;
        }
    }
    printf("1~100까지의 홀수합 : %d\n", hol_sum);
    printf("1~100까지의 짝수합 : %d\n", jjak_sum);

}
#include <stdio.h>

//3개의 수를 입력받고 큰 숫자로 정렬해서 출력하는 프로그램램
int main(){

    int n1 = 20, n2 = 10, n3 = 50;

    if(n1 < n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    else if(n2 < n3){
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    else if(n1 < n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    

    printf("%d > %d > %d\n", n1, n2, n3);

    

}
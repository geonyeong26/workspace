#include <stdio.h>
//재귀함수와 for문의 차이
// - 재귀함수는 코드를 반복실행하는 것 처럼 보이지만
//   실제로는 새로운 함수를 실행하는 것과 동일일
// - 재귀함수는 최초호출했던 곳이 아닌 이전에 호출했던 곳으로 돌아간다.
void fruit(int count);


void fruit(int count) {  
    printf("apple\n");

    if(count == 3) {
        return;
    }

        fruit(count + 1); 
        printf("jam\n"); 
}

int main() {
    fruit(1);
}
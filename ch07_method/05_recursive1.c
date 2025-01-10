#include <stdio.h>

//1. 무한 호출되는 재귀함수수
void fruit(void);

// 재귀함수 : 자기 자신을 호출하는 함수
void fruit(void) {  
    printf("apple");
    fruit();  //재귀함수수
}

int main() {
    fruit(); 
    return 0;
}

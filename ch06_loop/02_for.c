#include <stdio.h>

/**
 * for문
 *  - 반복 횟수를 아는 경우사용 ex) 게시글 목록
 *  - for문은 초기식, 조건식, 증감식으로 구성
 *  - i, j, k변수 → 반복횟수
 *  - 중첩 for문
 *  - for 블럭문 내에서 i,j,k 값을 수정할 수 없음
 */
int main(){

    for(int i=1; i<10; i++){
        printf("2 X %d = %d\n", i, 2*i);
    }
}
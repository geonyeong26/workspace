#include <stdio.h>

int main(){

    // 0~100점을 입력받고, 학점으로 변환해서 출력하는 프로그램

    int score;

    //1. 입력부
    printf("점수: ");
    char grade;

    scanf("%d", &score);
    // + 유효성 체크: 사용자가 입력한 값이 유효한 값인지 체크
    // 1. 값이 있는지 체크
    // 2. 정수형 숫자인지 체크
    // 3. 0~100사이의 범위인지 체크

    //2.제어부부
    if(score >= 90){
        grade = 'A';
    } else if(score >= 80){
        grade = 'B';
    } else if(score >= 70){
        grade = 'C';
    } else if(score >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 3. 출력부
    printf("당신의 점수는 %d점으로 %c학점 입니다.", score, grade);

}
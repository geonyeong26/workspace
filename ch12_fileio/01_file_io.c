#include <stdio.h>

void main(){

    FILE *fp; //파일 포인터 선언
    int ch; // 문자를 저장할 변수

    fp = fopen("abc.txt", "r");

    //예외처리(Exception)
    // - 예외가 발생했을 때 대처하는 방법
    // - C언어는 예외처리(high-level) 기술이 없음
    // - 반드시 예외처리가 필요한 경우(file, DB 사용)
    if(fp == NULL){
        printf("파일이 열리지 않습니다.\n");
        return;
    }
    printf("파일이 열렸습니다.\n");

    // fp 주소로 가서 문자를 하나씩 읽어 반환하는 역할
    fgetc(fp);

    // fp 주소로 가서 문자를 하나씩 읽어 (ASCII)로 반환하는 역할
    while(1){
        ch = fgetc(fp);

        //EOF(End of File) → ASCII 코드
        if(ch == EOF) {
            break;
        }

        //입력한 문자 화면에 출력
        putchar(ch);
    }

    fclose(fp);
}
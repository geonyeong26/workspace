/**
 * 구조체를 사용하면 다양한 자료형을 하나로 묶어서 사용 가능
 * 동일한 자료형을 여러번 구조체로 사용하는 경우 메모리 낭비 발생!
 * → 공용체를 사용하면 메모리 낭비 없이 사용 가능!
 * 
 * 공용체(union)
 *  - 공용체는 모든 멤버가 하나의 저장 공간을 같이 사용
 *  - struct 대신 union 키워드 사용
 *  - 공용체 변수의 크기는 멤버 중 크기가 가장 큰 멤버로 결정
 * 
 */

#include <stdio.h>

union student{
    int n;
    double grade;
};

int main(){
    //공용체 변수 선언 및 초기화
    // - 공용체 멤버 중 가장 큰 자료형 → double 8byte 저장공간 확보
    // - n과 grade가 하나의 공간을 공유!
    union student s1 = {315};

    printf("학번: %d\n", s1.n);
    s1.grade = 4.4;
    printf("학점: %.lf\n", s1.grade);
    printf("학번: %d\n", s1.n);
}
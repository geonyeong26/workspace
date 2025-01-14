#include <stdio.h>

/**
 * 변수 : 하나의 값을 저장하는 메모리 공간
 * 배열(Array)
 *  - 동일한 자료형의 데이터를 메모리에 연속적으로 저장하는 방법
 *  - 변수에 다수의 값을 저장하고 싶을 때 사용!(실질적으로 변수를 여러개 선언하는 것과 같은 효과)
 *  
 * 특징
 *  1. 다른 자료형처러 선언을 통해 저장공간 확보
 *  2. 배열의 개수와 상관없이 하나의 이름으로 선언 가능
 *  3. 동일한 자료형만 넣을 수 있음
 *  4. 배열은 한 번에 변수를 여러개 선언하는 것과 동일
 *  5. 배열 안의 아이템들은 0번부터 인덱스번호를 가짐
 * 
 * 문법 : 자료형 변수명[배열의 크기];
 *  ex) int arr[5]; //5칸짜리 정수형 배열 선언언
 * 
 * 단점
 *  1. 동일한 자료형만 저장 가능
 *    ㄴ int배열 만들었으면 int만 저장 가능
 *  2. 배열은 항상 고정된 크기를 유지!
 *    ㄴ arr[5] → 값을 2개만 저장, 3칸 현재 사용안함 /그럼에도 5칸 공간 모두 메모리 유지
 * 
 * * 위의 단점을 보완해서 객체지향 프로그래밍 언어에서는 컬렉션 프레임워크(자료형) → list, map, ...
 */
 

int main(){

    int arr[5]; //100칸짜리 정수형 배열 선언
                  // - 배열의 길이(lengh) :100
                  // - 배열의 인덱스 : 0 ~ 99
    arr[0] = 10; // 배열 0번칸에 10을 저장
    arr[3] = 5; // 배열 3번칸에 5를 저장
    arr[1] = arr[0] + arr[3];

    // & → 포인터
    // scanf에서 문자배열 → 사용하지 않음
    // scanf에서 정수/실수 배열 → & 사용

    scanf("%d", &arr[2]);
    printf("[%d] 인덱스: %d\n", arr[0]);
    printf("[%d] 인덱스: %d\n", arr[1]);
    printf("[%d] 인덱스: %d\n", arr[2]);
    printf("[%d] 인덱스: %d\n", arr[3]);
    printf("[%d] 인덱스: %d\n", arr[4]);
    //arr[] 값을 담지 않음(초기화 x) → 그래서 쓰레기값이 출력
    
}
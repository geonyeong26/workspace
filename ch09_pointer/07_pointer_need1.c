/**
 * 포인터가 필요한 이유
 *  - 일반변수를 사용하는 방법은 선언하고 이름으로 호출해서 사용(매우 간단)
 *  - 포인터 변수를 사용하는 방법은 변수 선언 및 주소연산, 간접참조 연산 등 복잡
 *    (이것만 보면 포인터변수를 사용할 이유가 없음)
 *  → 개발시 포인터를 즐겨 사용할 필요 없음!
 *  ※ 임베디드 프로그래밍을 할 때 메모리에 직접 접근하는 경우
 *     또는, 동적할당한 메모리를 사용하는 경우에 포인터가 반드시 필요함(+ swap)
 *  ※ 크기가 큰 배열값을 사용할 때 값을 복사해서 넘기기 어려운 경우
 *     배열과 포인터를 함께 사용하면 값을 복사하지 않고 전달 가능
 *  ex) 배열의 이름은 배열 시작주소와 동일  →  포인터  → 값을 복사하지 않고 사용
 */

#include <stdio.h>

void swap(int *pa, int *pb); // a와 b 변수의 값을 교환하는 함수

void swap(int *pa, int * pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    int a=10, b = 99;

    // 프로그래밍 언어에서 함수가 외부로부터 데이터를 얻는 방법 2가지
    // 1. Call-by-value(값에 의한 호출)
    //    - 함수 호출시 매개변수로 값의 복사본이 전달
    //    - 함수 내에서 매개변수를 변경해도 원본값에는 영향을 주지 않음음
    // 2. Call-by-reference(참조에 의한 호출)
    //    - 함수 호출시 원본(주소)를 매개변수로 전달
    //    - 함수 내에서 매개변수를 변경하면 원본값도 변경 됨
    //  ※ C언어는 Call-by-value이기 때문에 swap(a, b)의 a와 b가 복사해서 전달되기 때문에 main() 함수의 원본 값인 a,b는 영향을 받지 않음
    //      
    swap(&a,&b);
    printf("a : %d, b: %d", a, b);

}
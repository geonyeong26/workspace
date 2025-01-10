/**
 * 함수의 문법
 * 데이터 반환타입 함수명(매개변수1, 매개변수2, ...){
 *     실행문:
 *    return 반환값;
 * }
 * 
 * int sum(int a, int b){
 *    total = a +b;
 *   return total;
 * }
 * 
 * 함수의 종류
 *  1. 내장함수(built-ln) : 프로그래밍 언어(우리는 c언어)에서 기본적으로 제공하는 함수
 *  2. 외장함수(Library) : 외부에서 제공하는 함수
 *  3. 사용자 정의 함수 : 개발자가 직접 만들어 사용하는 함수
 
 * 함수 종료
 * return문을 만나면 종료
 * }를 만나서 더이상 실행할 코드가 없을 경우
 * 
 
 * 함수의 키워드
 *  1. 매개변수 : 함수의 입력 값, 여러 개 사용가능(,로 구분)
 *   - 매개변수가 없는 함수도 존재 가능!
 *  2. return : 기본적으로 함수 종료를 의미미
 *   - return 반환값; → 호출했던 곳으로 돌아가면서 반환값을 가짐짐
 *   - return과 반환값 모두 생략 가능
 *  3. 매개변수, 데이터반환타입이든 생략 "void" 사용
 *   - 매개변수, 데이터반환타입을 사용하지 않겠다는 의미
 *  void sum(void){
 *     printf("Hello.");}
 */

#include <stdio.h>

//3. 함수선언
// - 컴파일러에게 함수를 사용하겠다고 선언
int sum(int x, int y);

//1. 함수정의
// - 사용자 정의 함수 생성
int sum(int x, int y){
    int temp;
    temp = x + y;
    return temp;
}

int main(){
    int a = 10, b = 5;
    int result;

    //2. 함수호출
    // - 생성 된 함수를 호출해서 사용
    result = sum(a, b);
    prinf("%d", result);

}

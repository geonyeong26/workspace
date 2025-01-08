#include <stdio.h>
#include <string.h>

int main(){
    // BMI 계산기

    // 1. 입력부(신장, 몸무게)
    // 2. 제어부(BMI 계산)
    // 3. 출력부(BMI 값 출력)

    // BMI = 몸무게(kg) / (신장(m) * 신장(m))
    // BMI 범위
    // 저체중: 18.5 미만
    // 정상: 18.5 이상 23 미만
    // 과체중: 23 이상 26 미만
    // 비만: 26 ~30 미만
    // 고도비만: 30 이상

    int h, w;
    char bmiClass[20];

    printf("신장을 입력하세요: ");
    scanf("%d", &h);
    printf("몸무게를 입력하세요: ");
    scanf("%d", &w);

    double h_m = (double)h / 100; 
    double bmiValue = w / (h_m * h_m);

    if (bmiValue < 18.5) {
        strcpy(bmiClass, "저체중");
    } else if (bmiValue >= 18.5 && bmiValue < 23) {
        strcpy(bmiClass, "정상");
    } else if (bmiValue >= 23 && bmiValue < 26) {
        strcpy(bmiClass, "과체중");
    } else if (bmiValue >= 26 && bmiValue < 30) {
        strcpy(bmiClass, "비만");
    } 
    else {
        strcpy(bmiClass, "고도비만");
    }

    printf("당신의 신장은 %d cm이고 몸무게는 %d kg으로 ", h, w);
    printf("BMI지수는 %.2lf로 %s입니다.\n", bmiValue, bmiClass);

    return 0;
}

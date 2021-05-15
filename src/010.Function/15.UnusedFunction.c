//함수 - 함수 사용 연습1(함수 미사용), 아스키코드 안외우는 이상 제 3자가 볼때 코드 보면 이게 무슨코드인지 직관적으로 알기힘들다.
#include <stdio.h>
int main() {
    char input;

    printf("아무 문자나 숫자 하나를 입력하세요. : ");
    scanf("%c", &input);

    if (48 <= input && input <= 57) { //아스키코드를 외우고 다니지 않는 이상 이 코드가 무엇을 의미하는지 직관적으로 이해하기 어렵다.
        printf("%c 는(은) 숫자 입니다. \n", input);
    } 
    else {
        printf("%c 는(은) 숫자가 아닙니다. \n", input);
    }

    return 0;
}
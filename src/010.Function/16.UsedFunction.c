////함수 - 함수 사용 연습2(함수 사용)
#include <stdio.h>
int is_digit(char c);
int main() {
    char input;

    printf("아무 문자나 숫자 하나를 입력하세요. : ");
    scanf("%c", &input);

    if (is_digit(input)) {
        printf("%c 는(은) 숫자 입니다. \n", input);
    } 
    else {
        printf("%c 는(은) 숫자가 아닙니다. \n", input);
    }

    return 0;
}
//15.예제에 비해 함수를 밑으로 빼줌으로써 난해한 코드를 어느정도 완화(?) 
int is_digit(char c) {
    if (48 <= c && c <= 57) {
        return 1;
    } 
    else {
        return 0;
    }
}
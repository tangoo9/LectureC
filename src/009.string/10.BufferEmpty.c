#include<stdio.h>
int main(){
	int num;
	char c;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	getchar(); //stdin에서 한글자를 읽어서 리턴
	
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	
	printf("입력한 문자 :%c \n ",c);
	return 0;
}

//버퍼 문제해결방법 결론 : 문자대신 문자열을 입력받자 --> %c 대신 %s
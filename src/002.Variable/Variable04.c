#include <stdio.h>

int main()
{
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	
	printf("a : %2f \n", a);
	printf("c : %5d \n", c);
	printf("b : %6.3f \n", b);
	
	return 0;
	
	
	/*
	%d.2f : 무조건 소수점 이하 2자리 표시
	%5d : 숫자의 자릿수를 5자리(정수형)로 표시
	%6.3f : 전체 자릿수는 6자리, 소수점  이하 3자리 표시
	
}
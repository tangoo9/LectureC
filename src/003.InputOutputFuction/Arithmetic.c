#include <stdio.h>
int main()
{
	int a,b;
	a=10;
	b=5;
	
	printf("a+b는 : %d \n", a +b);
	printf("a-b는 : %d \n", a -b);
	printf("a*b는 : %d \n", a *b);
	printf("a/b는 : %d \n", a /b);
	printf("a%%b는 : %d \n", a %b);
	
	
	
	//자료형 불일치 예제 printf("a/b는 :%f \n", a/b);
	
	int c = 10;
	double d = 3;
	
	printf("c / d는 : %f \n", c / d);
	printf("d / c는 : %f \n", d / c);
	
	
	return 0;
	
	
	

}
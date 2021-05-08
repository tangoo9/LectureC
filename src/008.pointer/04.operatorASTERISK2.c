#include<stdio.h>
int main(){
	int *p;
	int a;
	
	p = &a;
	*p = 3;
	
	printf("a의 값 : %d \n", a); //변수 a의 값
	printf("*p의 값 : %d \n", *p); //포인터p가 가리키는 변수의 값
	
	return 0;
}
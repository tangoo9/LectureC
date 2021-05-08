#include<stdio.h>
int main(){
	int *p;
	int a;
	
	p = &a;
	
	printf("포인터 p에 들어 있는 값	: %p \n", p); //포인터p
	printf("int 변수 a가 저장된 주소 : %p \n" , &a);//변수 a
	
	return 0;
}


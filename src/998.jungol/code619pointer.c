#include<stdio.h>
int main(){
	int a;
	int *p;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	
	p = &a;
	
	printf("메모리 주소 : %p\n", p);
	printf("값 : %d\n", *p);

	return 0;
}
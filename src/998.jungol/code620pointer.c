#include<stdio.h>
int main(){
	
	int a;
	int *p;
	
	printf("값을 입력하세요 : ");
	scanf("%d", &a);
	
	p = &a;
	
	
	// printf("입력값을 10으로 나눈 몫 : %d", *p /10);
	// printf("...%d \n", *p %10);
	// printf("입력값을 10으로 나눈 나머지 : %d \n", *p %10);
	printf("%d...%d \n", *p/10, *p%10);
	
	// printf("입력값을 10으로 나눈 나머지 : %d \n", *p %10);
	// 
	// printf("나머지값 :  ", );
		
	return 0;
}
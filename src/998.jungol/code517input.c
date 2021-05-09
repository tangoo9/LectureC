#include<stdio.h>
int main(){
	double num1;
	double num2;
	double num3;
	
	printf("세 개의 실수를 입력받아 받올림하여 소수 셋째자리 까지 출력하는 프로그램을 작성하시오.\n");
	printf("1번째 실수 입력 : ");
	scanf("%lf", &num1);
	printf("2번째 실수 입력 : ");
	scanf("%lf", &num2);
	printf("3번째 실수 입력 : ");
	scanf("%lf", &num3);
	
	printf("1번째 실수 : %.3lf\n" ,num1);
	printf("2번째 실수 : %.3lf\n" ,num2);
	printf("3번째 실수 : %.3lf\n" ,num3);
	
	return 0;
}
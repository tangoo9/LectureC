//지역변수(중괄호로 지역나누기)
#include<stdio.h>
int main (){
	int a = 3; 
	
	//c에서의 지역변수 사용 예제
	//중괄호가 된 구간에서 지역변수를 정의하고 할당해서 사용가능함.
	{
		int a = 4;
		printf("a = %d \n", a);
	}
		printf("a = %d \n", a);
	
	return 0;
}
#include<stdio.h>

int main()
{
	int a = 127;
	printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a);
	printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a);
	
	//127의 177은 x진수 표현입니다..
	printf("%d의 %o은 %d 진수표현 입니다. \n", a, a, 8);
	printf("%d의 %d은 %d 진수표현 입니다. \n", a, a, 10);
	printf("%d의 %x은 %d 진수표현 입니다. \n", a, a, 16);
	
	printf("%d의 %x은 %d 진수표현 입니다. \n", 1, 2, a);
	printf("1의 2은 %d 진수표현 %d %d %d %d %d %d입니다. \n", 9,8,7,a,1,2,3,4,5,6);
	return 0;
}

/*
o 8진수 영어로는 Octal
d 10진수 영어로는 decimal
x 16진수 영어로는 hexadecimal
*/
/*
127의 177은 x진수 표현입니다..
	127의 10진수 표현은 127입니다.
	127dml 16진수 표현은 */
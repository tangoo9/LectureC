#include<stdio.h>
int main()
{
	int i, j;
	
	printf("크기 비교옹 변수 첫번째 : ");
	scanf("%d", &i);
	printf("크기 비교옹 변수 두번째 : ");
	scanf("%d", &j);
	
	if(i > j)
	{
		printf("%d는 %d보다 큽니다. \n", i, j);	
	}
	if(i < j)
	{
		printf("%d는 %d보다 큽니다. \n", i, j);	
	
	}
	if(i == j)
	{
		printf("%d와 %d는 같습니다. \n", i, j);	
	}
	if(i >= j)
	{
		printf("%d는 %d보다 크거나 같습니다. \n", i, j);	
	}
	if(i <= j)
	{
		printf("%d는 %d보다 작거나 같습니다. \n", i, j);	
	}
	
	return 0;
	
}
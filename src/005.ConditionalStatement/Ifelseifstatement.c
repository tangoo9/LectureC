#include<stdio.h>
int main()
{
	int num;
	
	printf("아무 숫자나 입력하세요 : ");
	scanf("%d", &num);
	
	if (num == 7)
	{
		printf("행운의 숫자 7입니다.\n");
	}
	else if (num == 4)
	{
		printf("죽음의 숫자 4입니다.\n");
	}
	else
	{
		printf("평범한 숫자 %d 입니다.\n", num);
	}	
	
	return 0;
	
}
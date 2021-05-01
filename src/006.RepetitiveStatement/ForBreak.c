#include<stdio.h>
int main()
{
	int useranswer;
	printf("컴퓨터가 생각한 숫자를 맞춰 보세요! \n");
	
	for(;;) //무한반복
	
	{
		scanf("%d", &useranswer);
		if(useranswer ==3)
		{
		printf("맞추셨군요!\n");
		break;
		}
		else
		{
		printf("틀렸어요! \n");
		}
		
	}
	return 0;
}


/*
반복문 break : 제일가까운 반복문을 중지하고 빠져나감
*/
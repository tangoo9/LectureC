#include<stdio.h>
int main()
{
	int i, toNum = 30000000000000000, sum=0;
	for (i = 1; i <= toNum; ++i)
	
		 sum+=i;
		
	printf("1부터 %d까지의 합 : %d \n",toNum, sum);

	return 0;
}


/* 반복문 for 1부터 N까지 합



*/
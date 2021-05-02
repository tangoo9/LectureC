#include<stdio.h>
int main()
{
	int i = 1, sum = 0;
	while(i <= 100)
	{
	sum += i;
		i++;
	}
	printf("1부터 100까지의 합 : %d \n", sum);
	
	return 0;
}
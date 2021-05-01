#include<stdio.h>
int main()
{
	int i;
	
	for(i = 0; i<100; i++)
	{
		if(i%2==0)
		{
			continue;
		}
		printf("%d ",i);

	}
	printf("/n");
	return 0;	
}

/*

if(i%5==0) , %5로 나누어지는거 출력을 안해버리나? 
continue : 다시 조건을 검사하는 문장으로 점프



*/
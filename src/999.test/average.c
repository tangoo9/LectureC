#include<stdio.h>
	int main(){
		int score [3][2];
		int i, j;
		
		for (i = 0; i < 3; i++)
		{
			for(j = 0;  j < 2; j++)
			{
				if(j == 0)
				printf("%d 번째 학생의 국어점수 : \n", i + 1 );
				
			}
		}
		return 0;
	}
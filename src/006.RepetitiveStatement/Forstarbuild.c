#include<stdio.h>
int main()
{
	int i, j, k ;
	for(i = 0; i < 5; i++)
	{
		for(k = 0; k < 5 - i - 1; k++)
		{
		printf("_");	
		}
		for(j = 0; j <= i; j++)	
		{
	    printf ("*");
		}
		printf("\n");
		
	}
	

	
	return 0;
	
}

/*i가 문단
  j가 별
  k가 왼쪽 공백
 
*/

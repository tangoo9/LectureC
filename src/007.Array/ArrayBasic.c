#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("array 3번쨰 원소 : %d \n", arr[9]);
	return 0;
	
}


/*array의 arr[]은 0부터 시작한다.
arr[]에 10넣으면 심각한 버그생김.


*/
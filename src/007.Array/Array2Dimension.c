#include<stdio.h>
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	
	printf("arr 배열의 2행 3열의 수를 출력 : %d \n", arr[1][2]);
	printf("arr 배열의 1행 2열의 수를 출력 : %d \n", arr[0][1]);
	return 0;
}
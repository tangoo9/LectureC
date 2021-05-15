//swap 함수 , **매우 중요** 빨간줄 10개, 
// 어떤 함수가 특정한 타입의 변수(또는 배열)의 값을 바꾸려면 함수의 인자는 반드시 그 타입을 가리키느 포인터를 이용해야 한다.

#include<stdio.h>
int swap(int *a, int *b){
	int temp = *a;
	
	*a = *b;
	*b = temp;
	
	return 0;
}

int main(){
	int i,j;
	i = 3;
	j = 5;

	printf("SWAP 이전 : i : %d, j : %d \n", i ,j);
	swap(&i, &j);
	printf("SWAP 이후 : i : %d, j : %d \n", i ,j);
	
	return 0;
}


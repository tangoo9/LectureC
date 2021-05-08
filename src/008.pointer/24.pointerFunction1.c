#include<stdio.h>
int return_plus_one(int n){
	return n + 1; //n은 main에서 만든 number와 다른 변수(당연히)
} 

int main(){
	int number =3;
	printf("%d\n", number);

	number = 4;
	printf("%d\n", number);
	
	number = return_plus_one(number);
	printf("%d\n", number);
	return 0;

}


// 프로그래밍 처리 순서 1.위>아래 왼쪽>오른쪽 2.연산자 우선순위
#include<stdio.h>
void change_plus_one(int *n){
	 *n + 1; 
} 

int main(){
	int number =3;
	printf("%d\n", number);

	number = 4;
	printf("%d\n", number);
	
	change_plus_one(&number);
	printf("%d\n", number);
	return 0;

}


//함수 호출법
//콜바이 밸류 변수의 값
//콜바이 레퍼런스 변수의 주소값
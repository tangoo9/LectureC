#include<stdio.h>
//사용자에게 입력받은 정수를 2배로 증가
void changeDouble(int *p){
	*p = *p *2;
	
}

int main(){
	int num;
	
	printf("숫자입력 : ");
	scanf("%d", &num); //scanf의 변수에는 &(주소값)를 계속 사용해왔음
	
	changeDouble(&num);
	printf("두배증가 : %d \n", num);
	
return 0;
}


/*
변수 쓰는 스타일
스네이크 기법 : 언더바 쓰는거 수업시간때 쓴 기법 
ex) change_double
카멜 기법 :대문자로 변수명 구분하는 방식
ex) changeDouble
*/
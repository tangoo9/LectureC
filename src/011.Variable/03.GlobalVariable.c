//전역변수
#include<stdio.h>
int global = 0; //전역변수
int function(){
	global++;
	return 0;
}

int main(){
	global = 10; //현재 프로그램 어느곳에서든 접근가능. 
	function();
	printf("%d \n", global);
	return 0;
}
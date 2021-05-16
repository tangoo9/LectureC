//변수의 영역/생명주기 - 함수호출 횟수
#include<stdio.h>
int how_many_called = 0;
int function(){
	how_many_called++;
	printf("called : %d \n", how_many_called );
	return 0;
}
	int main(){
	function();	
	function();	
	function();	
	function();	
	
	
		
return 0;
	}
#include<stdio.h>
int* function(){
	int a = 2;
	return &a;
}

int main(){
	int *pa = function();
	printf("%d \n", *pa);
	
}

//warning: function returns address of local variable [-Wreturn-local-addr] 
//4 |  return &a;
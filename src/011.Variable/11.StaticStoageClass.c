#include<stdio.h>
static int count = 5;
int main(){
	while(count--){
		func();
	}
	return 0;
}
void func(void){
	static int i =5;
	printf("i : %d, count : %d \n", i, count);
}
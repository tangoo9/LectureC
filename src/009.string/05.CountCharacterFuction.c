#include<stdio.h>
int str_length(char *str){
	int i = 0;
	while (str[i]){
		i++;
	}
	return i;
}
// while (str[i]) : null(\0)문자를 만날떄까지 반복


int main(){
	char str[] = {"가나다라마바사"};
	
	printf("%s \n", str);
	printf("위 문자열의 길이 : %d\n", str_length(str));
	
	return 0;
}
#include <stdio.h>
int main(){
	char str1[256], str2[256];
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", str1);
	printf("입력한 문자열 : %s \n", str1);
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", str2);
	printf("입력한 문자열 : %s \n", str2);
	
	return 0;
}
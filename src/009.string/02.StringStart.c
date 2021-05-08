#include<stdio.h>
int main(){
	char sentence_1[6] = {'k', 'o', 'r', 'e', 'a', '\0'};
	char sentence_2[6] = {'k', 'o', 'r', 'e', 'a', 0};
	char sentence_3[6] = {"Korea"};
	
	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	
	return 0;
}

//문자를 표시할떄는 '쓰지만 문자열을 표시할떄는 ""을 쓴다.
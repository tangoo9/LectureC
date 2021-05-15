#include<stdio.h>

int main(){
	char temp1[1] = {'a'};
	char temp2[1] = {'a'};
	//아래와 같이 넣어봐도 문자가 다르게 나온다는걸 확인해보기 위한 코드
	if(temp1[1] == temp2[1]){
		printf("두 문자열이 같읍니다.\n");
	}
	else{
		printf("두 문자열이 다릅니다.\n");
	}
	// printf("문자열 연결 %c \n", temp1[1] + temp2[1]);
	
	
	return 0;
}
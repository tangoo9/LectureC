#include<stdio.h>
int main(){
	char words[30];
	
	printf("30자 이내의 문자열을 입력하세요! :");
	scanf("%s", words);
	
	printf("문자열 : %s\n", words);//배열 이름자체가 배열을 가리키는 포인터므로 &가 없음
	
	
	return 0;
}
// 문자열의 입력은 %s 형식지정자 사용
// 배열이름 자체가 배열을 카리키고 있는 포인터이기 떄문에 words의 값을 전달하여 배열의 (시작)주소값을 전달
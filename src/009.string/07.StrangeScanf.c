#include<stdio.h>
int main(){
	int num;
	char c;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	return 0;
}

// buffer : 처리속도의 차이를 보상하여 효율적으로 결합할 목적으로 사용하는 영역
// 예를들어 설명하면 , 약수터에서 물을뜨는데 손바닥에서 담는거보다 병채로 채우는게 낫다


// stdin(입력스트림): 키보드의 입력처리.임시로저장되었다가 입력이 종료되면 한번에 처리
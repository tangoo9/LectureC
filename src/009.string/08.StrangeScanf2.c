#include <stdio.h>
int main(){
	char str[30];
	int i;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &i);
	printf("문자를 입력하세요 : ");
	scanf("%s", str);
	
	printf("숫자 : %d \n",i);
	printf("문자 : %s \n", str);
	
	return 0;
}

// %s : %d처럼 실질적인 데이터(공백문자가아닌)가 나오기 전까지 버퍼에 남아있던 공백문자 무시, 그 다음부터 나오게 되는 공백문자에서 종료
// %c 형식지정자를 사용할 때는 버퍼에 무엇이 남아있는지 잘 고려
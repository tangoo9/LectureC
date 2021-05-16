#include<stdio.h>
int main(){
	char str[] = "hello";
	char *pstr = "goodbye";
	
	str[1] = 'a'; //starck에 정의
	// pstr[1] = 'a'; //오류발생(해당라인 주석처리 : 오류 미발생), 리터럴 영역의 데이터는 상수와 같이 변경불가
	
	printf("%s \n", str);
	printf("%s \n", pstr);
	
	return 0;
}
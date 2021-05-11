/*이름은 문자열이므로 char* name 
char* name 오류난다면 앞에, 
const char* 형식으로

(강의내용 visual studio)
한 프로젝트에서는 main함수가 하나만 있어야한다.
기존의 printtask.c파일은 소스파일 -> printtask.c 속성에서 빌드에서 제외

ㅡㅡㅡㅡ형변환 관련강의 ㅡㅡㅡㅡㅡㅡ
1.자동형변환
2.강제형변환
*/
#include<stdio.h>
int main(){
	// int data 3.8;
	// double data2 5;
	
	printf("%.1lf\n",(double)3/2);
	printf("%.2lf\n",(int)8.43 + 2.59);
	printf("%d\n",(int)(8.43 + 2.59)); //<3번째 문장>항상 괄호안에있는게 먼저 
	//컴파일러는 우선순위가 있지만 괄호를 만나면 괄호를 먼저처리하기때문에<3번째 문장에서> 8.43+2.59먼저 계산하고 (int)를 받게됨.
	
	
	return 0;
}
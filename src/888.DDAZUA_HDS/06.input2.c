#include<stdio.h>
int main(){
int data1 = 0;
int data2;
int value;
int theRest;
double result;
	
printf("1정수를 입력하세요 : ");
scanf("%d",&data1);
printf("2정수를 입력하세요 : ");
scanf("%d",&data2);	

	value = data1/data2;
	theRest = data1%data2;
	result = (double)data1/data2;
printf("몫 : %d\n나머지 : %d\n결과값 : %.2lf\n",value,theRest,result);
	
	
return 0;	   
}



/*--------------
scanf_s("입력받을 값의 서식문자", &변수명);
int data = 0;
scanf(%d,&data);
printf(%d\n",data);
visual studio 2015버전부터 scanf말고 scanf_s 사용중임



ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
scanf, scanf_s 차이 
_s는 size의 줄임말

a,b,c 문자를 입력한다고 가정할때,
scanf  : ab넣고 c넣을때 어디선가 오류가 나고 오류 알려줌
scanf_s ab넣고 c넣을때 사이즈를 지정해줌으로써 abc의 공간을 만들어서 처리해버리고 오류나는걸 완화해주는 역할
(제대로 정리가 안됨 여튼 그런맥락)

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/


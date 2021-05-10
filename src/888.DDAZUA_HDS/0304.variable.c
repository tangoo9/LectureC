/*
C 한동석 강의 메모 
03.변수와 자료형 

수학시간에서
x    =   0 
변수     값
미지수  상수

C언어에서는 
x   =    0 
x = 저장공간의 이름
0 = 값(상수)

RAM에 X라는 이름으로 저장공간이 만들어지고 10이라는 초기값을 넣어준다. 
이러한 문법을 초기화라고 한다.
변수 선언은 선언부(중괄호 영역 맨 위) 에서 해준다.

(1)
int x;
x = 10

(2)
int x= 10;


변수명 선언시 주의사항 : 
같은 이름의 변수로 선언할 수 없다.
초기화를 해준다.
선언부에 한꺼번에 선언해야한다(맨위)

변수명 : 숫자는 맨앞에 쓸 수 없다.
특수문자(_제외)를 쓸 수 없다.
공백을 사용할 수 없다.
ex) good_boy 와 같이 언더바로 입력 또는 goodBoy 와 같이 대문자로 구분
되도록 소문자만 사용한다.
뜻이 있는 단어를 선택한다.
ex)		 	a,b (x)
 number, data등 (o)

서식문자(format)
%d %f %lf %c %s
%f float 4 
%lf long float 8 
%c char
%s string(문자열)
%p pointer

값 입력 정석(매우중요)
int data1 = 10;
float data2 = 10.45f;
double data3 = 100.99;
char data4 = 'a';
*float과 double은 둘다 실수이다. 둘다 실수인데 컴퓨터가 무슨수로 구분하나? 
따라서, double이 항상 기본값이고 d가 굳이 들어가지 않고 생략되는 반면,
(매우중요)float의 경우 float값임을 나타낼수 있도록 f를 반드시 붙여야한다!

*/

#include<stdio.h>
int main(){
	float b = 1.455f;
	printf("%.1f \n",b);

	return 0;
}

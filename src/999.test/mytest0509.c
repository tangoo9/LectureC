#include<stdio.h>
#include<string.h>
int main(){
 	char words[256];//사용자가 입력하는 문자열 저장할 정보(배열)
	char alpabet[50];//사용자가 입력한 문자열과 비교할 기준정보(배열)
	int count = 0;//카운팅 역할 정보(정수형)
	int counter[30] = {0,}; //카운팅의 결과 저장할 정보(배열)
	
	
	printf("간판을 입력하세요 : ");
	scanf("%s", words);
	
	printf("간판 : %s \n", words);
	
	for(int i=0; i <= 50; i++){
	alpabet[i] = i + 97;//아스키코드 97
	}
	
	//사용자가 입력한 정보와 기준정보 비교
	for(int i = 0; i <= 50; i++){
		for(int j = 0; j <strlen(words); j++){ //strlen = string length,함수임, 이 함수를 사용하기 위해 <string.h>필요
			if(words[j] == alpabet[i]){ //비교
				counter[i] = ++count; //counter 배열에 저장 
			}
		}	
		count = 0;
	}
	
	//그 결과 출력
	for(int i = 0; i <=25; i++){
		if(counter[i]>0){
		printf("%c : %d \n ", alpabet[i],counter[i]);
		
		}
		
	}
	
	return 0;
}


//문제 : 간판가게 사장이다. 영문 간판의 문자를 만들 때, 각 문자의 필요 개수를 알고 싶다.

// #공백문자는 없다.
// #영문 간판용 문자
// 1.사용자의 문자열을 입력(배열:word)
// 2.영문을 저장할 배열(alpabet)
// 3.비교결과를 저장할 배열(counter)
// 4.반복 word배열과 alpabet 배열과 원소를 비교(반복 for/while)
//  4.1 같으면 counter배열 의 인덱스 개수저장(if)
//  4.2 다르아무 처리없음
// 5.counter 배열의 크기만큼 반복해서 결과를 출력


// 풀이 : 
// 사용자가 입력하는 문자열 저장할 정보(배열)
// 사용자가 입력한 문자열과 비교할 기준정보(배열)
// 카운팅역할 정보(정수형)
// 카운팅의 결과 저장할 정보(배열)
#include<stdio.h>


int main(void)
{

	/*
	
	!미해결 : 덧셈 결과값 표현할려면 어떻게 하지?
	

	double input;
	double a (input + input);
	printf("값을 입력하세요 : ");
	scanf("%lf", &input);
	printf("결과값 : %lf \n", a);
	*/
	
	
	//scanf에 문자열 입력받을떄 %s임, char같은경우 256이상의 값을입력받으면 오류생기므로 sizeof로 범위 지정한다함.
	/* 
	!미해결 : 아래 코드를 VS2019에서 실행시키면 정살 실행되는데 구름에서는 안된다. 이유가 뭘까? 리눅스랑 윈도우 차이?
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/
	
	/*과제사항:
	경찰관이 범죄자의 정보를 입수(조서작성)
	이름 나이 몸무게 키 범죄명
	*/
		printf("신원 조사를 시작합니다. 정보를 입력하세요\n");
		char name[256];
		printf("이름 : ");
		scanf_s("%s",name, sizeof(name));
		int age;
		printf("나이 : ");
		scanf_s("%d",&age);
		float weight;
		printf("몸무게 :");
		scanf_s("%f", &weight);
		double height;
		printf("키 :");
		scanf_s("%lf", &height);
		char what[256];
		printf("범죄명 :");
		scanf_s("%s", what, sizeof(what));
		//조서내용출력
		printf("\n\n-- 범죄자 정보 --\n\n");
		printf("이름		:%s\n", name);
		printf("나이		:%d세\n", age);
		printf("몸무게		:%.2fkg\n", weight);
		printf("키		:%.2lfcm\n", height);
		printf("범죄명		:%s건\n", what);
	return 0;
	
}
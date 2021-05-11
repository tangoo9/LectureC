#include<stdio.h>
//아스키 코드로 할 수 있는 암호화
int main(){
	char pw[7] = "a1b2c3";
	char en_pw[7] = "";
	
	for(int i =0; i<7; i++){
		en_pw[i] = (char)(pw[i] -4); //정수를 문자로 강제형변환해서 키값을 통해 암호화하는 방법임.
	}
	printf("기존 pw : %s\n", pw);
	printf("암호화된 pw : %s\n", en_pw);
	printf("\n");
	return 0;
}

/*----------------------------------------------------
int에 문자열 넣고 확인해보면,
ascii값 코드에 의해 a는 97, c는 99등으로 나오는걸 확인할수 있음

#include<stdio.h>
int main(){
	int data = 'c';
	printf("%d", data);
	
	return 0;
}
*/
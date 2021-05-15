#include<stdio.h>
int change_val(int i){
	i = 3;
	
	return 0;
}

int main(){
	int i = 0;
	
	printf("현재 주인 재산(함수호출) : $%d \n", i);
	change_val(i);
	printf("현재 주인 재산(my_money) : $%d \n", change_val(i));
		
	return 0;
}

///음.....모르겠다 
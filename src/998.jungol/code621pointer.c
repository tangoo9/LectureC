#include<stdio.h>
// int main(){
// 	int *a; 
// 	int *b;
	
	
		
// 	printf("첫번째 수 입력 : ");
// 	scanf("%d", &a);
// 	printf("두번째 수 입력 : ");
// 	scanf("%d", &b);
		
// 	printf("덧셈 : %d+%d \n", %a + %b);
// 	return 0;
// }

int main(){
	int a, b;
	int *pa, *pb;
	
		
	printf("첫번째 수 입력 : ");
	scanf("%d", &a);
	printf("두번째 수 입력 : ");
	scanf("%d", &b);
		
	pa = &a;
	pb = &b;
	
	printf("%d+%d = %d\n", *pa, *pb, *pa+*pb);
	
	return 0;
}
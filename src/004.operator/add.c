#include <stdio.h>
int main()
{
	int a =3,b=4,c=5,d=6;

	
	/*++a:1을 더한후 결과를 반환
	a++ : 결과를 반환한 후 1을 더함
	 
	 */
	
	a=a+1;
	printf("a:%d \n", a);
	
	b*=2;
	printf("b:%d \n", b);
	
	--c;
	printf("c:%d \n", c);
	
	d--;
	printf("d:%d \n", d);
	
	return 0;
	
}
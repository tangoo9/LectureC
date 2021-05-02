#include <stdio.h>
int main() 
{
    int input , end;

    printf("마이펫 업그레이드\n");
    printf("1. 밥주기 \n");
    printf("2. 씻기기 \n");
    printf("3. 재우기 \n");
    printf("무엇을 할 것인지 입력하세요 : ");

    scanf("%d", &input);

    switch (input) 
    {
        case 1:
            printf("아이 맛있어 \n");
            break;

        case 2:
            printf("아이 시원해 \n");
            break;

        case 3:
            printf("zzz \n");
            break;

        default:
            printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
            break;
    }
	{
	printf("프로그램을 종료하시겠습니까? Y / N")
	scanf("%d",end);
	if 'y' 
		printf("프로그램을 종료합니다.")
	else if 'n'
		printf("프로그램을 종료하지않습니다.")
	}
    return 0;
}
#include <stdio.h>
int swap(int *a, int *b);  //함수의 원형
//11.prototype 예제에서는 묵시적으로 써버려서 오류메세지가 뜨는데 ,,,여기서는 메인 함수 시행전에 앞으로 위와 같은 스왑을 쓸거라고 미리 (주의?선언?) 해주는거임 그래서 오류 메세지가 안남 
int main() {
    int i = 3;
    int j = 5;
    
    printf("SWAP 이전 : i : %d, j : %d \n", i, j);
    swap(&i, &j);
    printf("SWAP 이후 : i : %d, j : %d \n", i, j);

    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}
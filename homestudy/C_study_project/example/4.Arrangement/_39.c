//예제 4-39 : 리스트 a 요소 리스트 b에 거꾸로 저장하기
#include<stdio.h>
#define SIZE 10

int main(void)
{
    int lst_a[SIZE] = {0};
    int lst_b[SIZE] = {0};
    int i;

    for(i=0; i<10; i++)
        lst_a[i] = i + 1;
    for(i=0; i<10; i++)
        lst_b[i] = lst_a[9-i];

    for(i=0; i<10; i++)
        printf("%d ",lst_b[i]);
    
    printf("\n");

    return 0;
}

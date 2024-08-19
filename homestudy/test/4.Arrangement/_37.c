//과제 4-37 배열에 저장하고 거꾸로 출력하기
#include<stdio.h>
#define SIZE 5

int main(void)
{
    int lst_a[SIZE] = {60, 70, 80, 90, 100};
    int temp[SIZE] = {0};
    int i;

    for (i = 0; i < 5; i++)
    {
        temp[i] = lst_a[4-i];
        printf("%d ",temp[i]);
    } 
    printf("\n");

    return 0;
}
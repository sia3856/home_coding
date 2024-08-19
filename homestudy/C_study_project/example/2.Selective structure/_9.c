#include<stdio.h>

int num;

int main(void)
{
    printf("숫자를 입력하시오.\n");
    scanf("%d", &num);
    printf("정수 : %d \n",num);

    if(num < 0 )
        printf("음수다.\n");
    else if(num > 0)
        printf("양수다.\n");
    else
        printf("0이다.\n");
    
    return 0;
}
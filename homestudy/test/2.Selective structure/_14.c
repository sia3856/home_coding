#include<stdio.h>

int num;

int main(void)
{
    printf("정수를 입력하시오.\n");
    scanf("%d", &num);

    if((num % 5 == 0) && (num % 7 == 0))
    {
        printf("%d는 5와 7의 배수입니다.\n", num);
    }
    else if(num % 5 == 0)
    {
        printf("%d는 5의 배수입니다.\n", num);
    }
    else if(num % 7 == 0)
    {
        printf("%d는 7의 배수입니다.\n", num);
    }
    else
    {
        printf("%d는 5와 7의 배수가 아닙니다.\n", num);
    }
    return 0;
}
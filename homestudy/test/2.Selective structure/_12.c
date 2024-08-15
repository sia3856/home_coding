#include<stdio.h>

int num;

int main(void)
{
    printf("정수를 입력하시오 : \n");
    scanf("%d", &num);
    
    if(num % 3 != 0)
    {
        printf("%d는 3의 배수가 아닙니다.\n", num);
    }
    else
    {
        printf("%d는 3의 배수 입니다.\n", num);
    }






    return 0;
}
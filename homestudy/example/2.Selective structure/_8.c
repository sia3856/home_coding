#include<stdio.h>

int a, b;

int main(void)
{
    printf("a의 값을 입력하시오.\n");
    scanf("%d", &a);
    printf("b의 값을 입력하시오.\n");
    scanf("%d", &b);

    if(a < b)
        printf("큰수 : %d\n" , b);
    else
        printf("큰수 : %d\n" , a);

    return 0;

}
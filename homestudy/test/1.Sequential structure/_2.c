#include<stdio.h>

int a, b;

int main(void)
{
    printf("a의 값을 입력하시오.\n");
    scanf("%d", &a);
    printf("b의 값을 입력하시오.\n");
    scanf("%d", &b);
    printf("뺄셈 : %d\n", a - b);

    return 0;
}
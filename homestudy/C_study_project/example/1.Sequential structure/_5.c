#include<stdio.h>

int a, b, c;

int main(void)
{
    printf("a의 값을 입력하시오.\n");
    scanf("%d", &a);
    printf("b의 값을 입력하시오.\n");
    scanf("%d", &b);
    printf("c의 값을 입력하시오.\n");
    scanf("%d", &c);
    printf("정수(3개) : %d %d %d\n", a, b, c);
    printf("총점 : %d\n", a + b + c);
    printf("평균 : %d\n", (a + b + c) / 3);

    return 0;
}
#include<stdio.h>

int a, b;

int main(void)
{
    printf("밑변의 값을 입력하시오.\n");
    scanf("%d", &a);
    printf("높이의 값을 입력하시오.\n");
    scanf("%d", &b);
    printf("밑변 : %d\n높이 : %d\n", a, b);
    printf("삼각형의 넓이 : %d\n", (a * b) / 2);

    return 0;
}
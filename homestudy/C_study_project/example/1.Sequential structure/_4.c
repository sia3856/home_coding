#include<stdio.h>

int a, b;

int main(void)
{
    printf("가로의 값을 입력하시오.\n");
    scanf("%d", &a);
    printf("세로의 값을 입력하시오.\n");
    scanf("%d", &b);
    printf("가로 : %d\n세로 : %d\n", a, b);
    printf("사각형의 넓이 : %d\n", a * b);

    return 0;
}
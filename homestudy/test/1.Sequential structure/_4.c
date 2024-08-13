#include<stdio.h>

int length;

int main(void)
{
    printf("길이를 입력하시오.(m단위)\n");
    scanf("%d", &length);
    printf("m : %d\n", length);
    printf("%dkm %dm\n", length/1000, length%1000);

    return 0;
}
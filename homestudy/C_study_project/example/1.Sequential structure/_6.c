#include<stdio.h>

int length;

int main(void)
{
    printf("길이를 입력하시오.(cm단위)\n");
    scanf("%d", &length);
    printf("cm : %d\n", length);
    printf("%dm %dcm\n", length/100, length%100);

    return 0;
}
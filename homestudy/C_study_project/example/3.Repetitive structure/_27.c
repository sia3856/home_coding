//예제 3-27 : 공약수 구하기
#include<stdio.h>

int main(void)
{
    int num1, num2, i;
    printf("공약수를 구할 수를 입력하세요\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    for ( i = 1 ; i < num1 + 1 ; i++)
        if ( num1 % i == 0 && num2 % i == 0)
            printf("%d\n", i);

    return 0;
}
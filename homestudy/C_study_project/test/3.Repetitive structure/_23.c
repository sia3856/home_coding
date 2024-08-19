//과제 23 - 1~100 중 3의 배수의 합
#include<stdio.h>

int main(void)
{
    int i;
    int n = 0;
    for( i=3; i < 101; i+=3)
        n += i;

    printf("%d\n", n);

    return 0;
}
#include<stdio.h>
int sum(int);

int main(void)
{
    int num;
    printf("1부터 합을 구할 수를 입력하세요: ");
    scanf("%d",&num);

    printf("%d\n",sum(num));
}

int sum(int n)
{
    if( n == 1 )
        return 1;
    if( n > 1)
        return n + sum(n - 1);
}
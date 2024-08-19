//과제 3-21 : 1부터 입력받은 수 까지의 합
#include<stdio.h>

int main(void)
{
    int n = 0;
    int num, i;
    printf("1부터 합을 구할 수를 입력하세요: ");
    scanf("%d",&num);

    for (i = 1; i < num + 1; i++)
        n += i;
    
    printf("%d\n", n);

    return 0;
}
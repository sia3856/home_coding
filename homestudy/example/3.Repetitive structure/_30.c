//예제 3-30 : 최댓값 구하기
#include<stdio.h>

int main(void)
{
    int a, i;
    int max = 0;

    for( i = 0; i < 5; i++)
    {
        printf("정수를 입력해주세요.");
        scanf("%d",&a);
        if (a > max)
            max = a;
    }
    printf("최댓값 %d", max);

    return 0;
}
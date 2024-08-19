//예제 31 : 직각 삼각형 모양으로 수 출력하기

#include<stdio.h>

int main(void)
{
    int i, j;

    for(i = 1; i < 6; i++)
    {
        for(j = 1; j < i+1 ; j++)
        printf("%-2d", j);

    printf("\n");
    }
    return 0 ;
}
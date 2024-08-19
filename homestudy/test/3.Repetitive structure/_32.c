//과제 3-32 최솟값을 구하는 프로그램
#include<stdio.h>

int main(void)
{
    int num, i ;
    int min = num;
    printf("최솟값을 알려드립니다. 정지는 0을 입력하세요. : ");
    scanf("%d",&num);
    
    for(i = 0 ; ; i++)
    {
        if(num < min)
            min = num;
        printf("최솟값을 알려드립니다. 정지는 0을 입력하세요. : ");
        scanf("%d",&num);
        if(num == 0)
            break;
    }
    printf("최솟값 : %d\n", min);
    
    return 0;
}
//예제21
//숫자 1부터 100까지의 합 구하세요.
//0으로 초기화되어 있는 변수 sum에 숫자 1부터 100까지 1씩 증가하는 i 값을 계속 더해 1부터 100까 지의 합을 구합니다.
#include <stdio.h>
int main(void)
{
    int i,sum;
    i=1;
    sum=0;

    while(i<=100)
    {       
        sum = sum+i;      
        i=i+1;
    }

    printf("1부터 100까지의 합은 %d이다.", sum);

    return 0;

}
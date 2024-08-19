//과제 3-25 while 사용 1,-2,3,-4,...99,-100 합 구하기
#include<stdio.h>
int main(void)
{
    int n = 0;
    int count = 0;
    while(++count < 101)
    {
        if( count % 2 == 0 )
            n += -count;
        else n += count;
    }
    printf("%d\n",n);

    return 0;
}
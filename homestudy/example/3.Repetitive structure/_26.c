//예제 3-26 : 약수구하기
#include<stdio.h>

int main (void)
{
    int i;
    
    for ( i = 1 ; i < 11 ; i++)
        if (10 % i == 0)
            printf("%d\n", i);

    return 0;
}
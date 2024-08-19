//예제 35
//구구단
#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=2;j <= 9; j++)
            printf(" %d*%d = %d",i,j,i*j);
        printf("\n");
    }
return 0;
}
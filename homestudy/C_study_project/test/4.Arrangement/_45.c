//과제 45
//5행 5열 배열에 다음과 같이 저장한 후 출력하는 순서도와 C 프로그램 을 작성하여라.
#include <stdio.h>

int main(void)
{
    int i, j, k=0, l=4;
    int a[5][5]={0};

    for(i=0;i<5;i++)
    {
            for(j=4-i;j<5;j++)
            {    k=k+1;
                a[i][j]=k;
            }
    
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");

    }    
    return 0;
}
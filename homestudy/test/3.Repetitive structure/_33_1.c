//과제33
//다음과 같이 출력하는 순서도와 C 프로그램을 각각 작성하여라.
#include <stdio.h>

int main()
{
    int i,j;
    for(i=5; i>=0;i--)
    {
        for(j=1; j<i+1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
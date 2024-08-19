//과제33
//다음과 같이 과제 출력하는 순서도와 C 프로그램을 각각 작성하여라.

#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=5; i>0;i--)
        {
            for(j=0; j<i; j++)
                printf("%d",i-j);
        printf("\n");

        }
    return 0;
}


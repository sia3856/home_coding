//과제20
//while형 반복 구조를 이용해서 1부터 100까지의 합을 구해 출력하는 순서도와 C 프로그램을 작성하여라.
#include<stdio.h>

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

    printf("1부터 100까지의 합은 %d이다.\n", sum);

    return 0;

}
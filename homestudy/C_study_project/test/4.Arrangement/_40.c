//과제 40
//입력 받은 10진수를 8진수로 변환하여 출력하는 순서도와 C 프로그램 을 작성하여라

#include<stdio.h>

int main(void)
{
    int n=0, i,count, b=0;
    int a[100]={0};
    printf("10진수 : ");
    scanf("%d",&n);
    count=0;
    for(i=0;i<n;i++)
    {
        b=n%8;
        n=n/8;
        a[i]=b;
        count=count+1;
    }

    printf("%d",n);
    for(i=1;i<=count;i++)
        printf("%d",a[count-i]);

    return 0;
}
//간단한 프로그램 함수로 구현하기 4
//세 수를 입력받아, 가장 큰 숫자와 가장 작은 숫자 사이의 수의 합을 계산되도록 구현하라.
//모든 방법은 개발자가 선택하세요.
//참고)  예제18, 예제19, 예제20, 예제21, 예제22, 예제23, 예제24
#include<stdio.h>

int main(void)
{
    int a,b,c,max,min,i,sum;
    printf("세 정수를 입력하세요. 최대값과 최솟값을 구해드립니다.");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a<c)
        max=c;
        else
        max=a;
    }
    if(a<b)
    {
        if(b>c)
        max=b;
        else
        max=c;
    }
    printf("최대값 : %d\n",max);

    if(a<b)
    {
        if(a>c)
        min=c;
        else
        min=a;
    }
    if(a>b)
    {
        if(b<c)
        min=b;
        else
        min=c;
    }
    printf("최소값 : %d\n",min);

sum=0;
for(i=min+1;i<max;i++)
{

    sum=sum+i;
}
    printf("최소값과 최대값 사이의 합은%d입니다.\n",sum);
}
 
//과제28
//약수와 약수의 개수를 출력하는 순서도와 C 프로그램을 작성하여라.
#include<stdio.h>

int main(void)
{
    int i,num,sum;
    sum=0;
    printf("정수를 입력하시오.");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        {
            if(num%i ==0)
            {   
            printf("%d\n",i);
            sum=sum+1;
            }   
        }   
    printf("약수의 개수는 %d개임.\n",sum);
}
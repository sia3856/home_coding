//예제 5-57 : 재귀함수 이용해서 피보나치 수열 구하기
#include<stdio.h>
int fibo(int);

int main(void)
{
    int number;
    printf("궁금한 피보나치 수열 입력");
    scanf("%d",&number);

    printf("%d\n",fibo(number));

    return 0;
}

int fibo(int num)
{
    if(num <= 2)
        return 1;
    
    return fibo(num-1) + fibo(num-2); 
}
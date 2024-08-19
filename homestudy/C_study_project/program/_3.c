//간단한 프로그램 함수로 구현하기 3
//사용자가 숫자를 원하는 개수만큼 입력한다.
//출력 결과는, 가장 큰 수와 가장 작은수, 홀수와 짝수인지, 양수, 0, 음수의 판결 결과를 출력하는 프로그램을 구현하라
//사용자가 입력하는 숫자와 숫자 사이를 구분하는 방법은 개발자가 선택하세요.

//참고)  예제09, 예제10, 예제11, 예제12, 예제13

#include<stdio.h>

int main(void)
{
    int i, num;
    int a[2]={0};
    int kwak;
    printf("다음 정수를 입력하시오.");
    scanf("%d",&num);
    a[0]=num;
    a[1]=num;
    while(scanf("%d",&num))
    {
        printf("다음 정수를 입력하시오(끝내려면 q)\n");
        if(a[1]<=num)
        {
        a[1]=num;
//        printf("최댓값 : %d\n",a[1]);
        }
        else if (a[0]>=num)
        {
        a[0]=num;
//        printf("최솟값 : %d\n",a[0]);
        }
    printf("최댓값 : %d\n최솟값 : %d\n",a[1],a[0]);
    }
    if(a[1]%2 ==0)
    printf("%d는 짝수이다.\n",a[1]);
    else
    printf("%d는 홀수이다.\n",a[1]);
    if(a[0]%2 ==0)
    printf("%d는 짝수이다.\n",a[0]);
    else
    printf("%d는 홀수이다.\n",a[0]);
    
    if(a[1]>0)
    printf("%d는 양수이다.\n",a[1]);
    else if(a[1]==0)
    printf("%d는 0이다.\n",a[1]);
    else
    printf("%d는 음수이다.\n",a[1]);

     if(a[0]>0)
    printf("%d는 양수이다.\n",a[1]);
    else if(a[0]==0)
    printf("%d는 0이다.\n",a[0]);
    else
    printf("%d는 음수이다.\n",a[0]);

    return 0;
}
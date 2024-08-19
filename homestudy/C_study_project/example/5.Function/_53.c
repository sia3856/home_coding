//예제 53
//함수 이용해서 두 수 중 큰 수 찾기
//두 수를 입력받고, 그 중 큰 수를 찾아 반환한다.
//반환하는 로직은 func 함수를 정희하고 사용해서 두 수 중 큰 수를 찾는다.
#include <stdio.h>
int max(int, int);
int main(void)
{
    int a,b;
    printf("입력한 두 수 중에 큰 수는?");
    scanf("%d%d",&a,&b);
    printf("%d,%d에서 큰 것은 %d이다.\n",a,b,max(a,b));
    

    return 0;
}

int max(int a,int b)
{
    
   int max;
   if(a<b)
   max=b;
   else
   max=a;

    return max;
}

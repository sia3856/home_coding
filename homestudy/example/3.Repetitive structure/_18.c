//예제18 
//while 반복문을 사용해서 숫자 1부터 10까지 출력하세요(1)
//1부터 시작되는 변수 i 를, 10보다 작거나 같을때까지 반복하며 i 값을 출력합니다.
//출력할때마다 변수 i 값을 1씩 증가되도록 합니다.

#include <stdio.h>

int main(void)
{
    int i =1;

    while(i<=10)
    {
    printf("%d\n",i);
    i=i+1;
    }
    return 0;
}
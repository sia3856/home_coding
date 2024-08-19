#include<stdio.h>

int time, day, hour, min;

int main(void)
{
    printf("시간을 입력하시오.(분단위)\n");
    scanf("%d", &time);
    printf("분 : %d \n", time);
    day = time / 1440;
    hour = (time % 1440) / 60;
    min = (time % 1440) % 60;
    printf("%d일 %d시간 %d분 \n", day, hour, min);

    return 0;
}
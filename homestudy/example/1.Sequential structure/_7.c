#include<stdio.h>

int time, hour, min, sec;

int main(void)
{
    printf("시간을 입력하시오.(초단위)\n");
    scanf("%d", &time);
    printf("초 : %d \n", time);
    hour = time / 3600;
    min = (time % 3600) / 60;
    sec = time % 60;





    printf("%d시간 %d분 %d초 \n", hour, min, sec);

    return 0;
}
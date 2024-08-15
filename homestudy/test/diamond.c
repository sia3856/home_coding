#include<stdio.h>

int height, cnt;

int main(void)
{
    scanf("%d", &height);

    printf("%d", height / 2);
    for(cnt = 1; cnt <= height/2; cnt++)
    {
        printf("X");
    }





    return 0;
}
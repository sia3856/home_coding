#include<stdio.h>

int length;
int price = 1000;

int main(void)
{
    printf("거리를 입력하시오.\n");
    scanf("%d", &length);

    if(length < 5)
    {
        printf("요금은 %d입니다.\n", price);
    }
    else if((5 <= length) && (length < 10))
    {
        printf("요금은 %d입니다.\n", price * 2);
    }
    else
    {
        printf("요금은 %d입니다.\n", price * 3);
    }
    return 0;
}
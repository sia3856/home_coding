#include<stdio.h>

int max, num1, num2;

int main(void)
{
    printf("첫번째 값을 입력하시오.\n");
    scanf("%d", &max);
    printf("두번째 값을 입력하시오.\n");
    scanf("%d", &num1);
    printf("세번째 값을 입력하시오.\n");
    scanf("%d", &num2);

    if(max > num1)
        if(max > num2)
            printf("가장 큰수는 %d 이다.", max);
        else
            printf("가장 큰수는 %d 이다.", num2);

    else if(max < num1)
    {
        max = num1;
        if(max > num2)
            printf("가장 큰수는 %d 이다.", max);
        else
            printf("가장 큰수는 %d 이다.", num2);
    }

    return 0;   
}

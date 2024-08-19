#include<stdio.h>

int a[6] = {20, 50, 30, 10, 60, 40};
int temp, cnt, cnt1, min;

int main(void)
{
    printf("초기 : ");
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(cnt = 0; cnt <5; cnt++)
    {
        min = cnt;
        for(cnt1 = cnt +1; cnt1 <6; cnt1++)
        {
            if(a[cnt1] < a[min])
            {
                min = cnt1;                
            }
        }
        temp = a[cnt];
        a[cnt] = a[min];
        a[min] =temp;
    }
    printf("정렬 후 : ");
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
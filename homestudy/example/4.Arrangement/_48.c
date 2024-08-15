#include<stdio.h>

int a[6] = {20, 50, 30, 10, 60, 40};
int cnt = 0;
int cnt1 = 0;
int temp;

int main(void)
{
    printf("초기 : ");
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for(cnt = 0; cnt<=4; cnt++)
    {
        for(cnt1=0; cnt1<=4; cnt1++)
        {
            if(a[cnt1] > a[cnt1+1])
            {
                temp = a[cnt1];
                a[cnt1] = a[cnt1+1];
                a[cnt1+1] = temp;
            }
            
        }

    }
    printf("정렬후 : ");
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
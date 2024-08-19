//예제 4-41 : 리스트 요소 중 최댓값 구하기
#include<stdio.h>
#define SIZE 10

int main(void)
{
    int lst_a[SIZE] = {10, 70, 100, 30, 50, 20, 60, 80, 90, 40};
    int max = lst_a[0];
    int i;
    for(i=0; i<10 ;i++)
        printf("%d ",lst_a[i]);

    for(i=0; i<10 ;i++)
        if(lst_a[i] > max)
            max = lst_a[i];
    
    printf("\n");
    printf("최댓값은 %d 입니다.\n",max);
    return 0;
}
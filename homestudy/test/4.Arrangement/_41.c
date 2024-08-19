//과제 4-41 : 8진수를 10진수로 바꾸기
#include<stdio.h>
#define SIZE 5

int main(void)
{
    int lst_a[SIZE] = {5, 6, 7, 4, 3};
    int ten = 0;
    int i, j, eight;

    for(i = 0; i <= 4; i++){
        eight = 1;
        for(j = 1; j <= 4-i; j++)
            eight = eight*8;
        ten += lst_a[i]*eight;
    }
    printf("%d\n",ten);

    return 0;
}
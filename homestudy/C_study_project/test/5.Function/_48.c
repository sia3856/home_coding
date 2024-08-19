//과제 5-48 : 소수 판별하는 함수를 이용 2부터 10까지 수의 소수판별
#include<stdio.h>
int sosu(int);
int main(void)
{
    int i;
    for (i=2; i < 11; i++)
        sosu(i);

    return 0;
}

int sosu(int num)
{
    int i;
    for(i = 2; i < num ; i++){
        if( num % i == 0){
            printf("%d 소수가 아닙니다.\n", num);
            return 0;
            }
        }
        printf("%d 소수입니다 \n", num);

}
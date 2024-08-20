#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int epoch = 100000;    // 반복횟수
int num = 0;
int zero, one, two, three, four, five, six, seven, eight, nine; 
int main(void)
{
    srand(time(NULL));
    int n = 3;
    int m = 6; 
    for(int i = 0; i<=epoch;i++)
    {
        //num = rand() % n ;
        num = rand() % (n) + 4 ;
        //num = rand() % m + n;
        //num = rand() % m - n + 1 ;
        //num = rand() % (m -n + 1)+ n ;
    
        switch(num)
        {
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
        }
    }
    printf("총 횟수 : %d\n",epoch);
    printf("0: %d 1: %d 2: %d 3: %d 4: %d 5: %d 6: %d 7: %d 8: %d 9: %d \n",zero, one, two, three, four, five, six, seven, eight, nine);
    return 0;
}
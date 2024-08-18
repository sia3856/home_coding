#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int q[3], ans[3];
int i, j, num, num1, num2, num3, strike, ball, out;
int stage = 1;

int set(void);
int input(void);
int cal(void);
void all(void);

int main(void)
{
    srand(time(NULL));
    
    set();

    printf("=======================================\n");
    printf("               숫자 야구                \n");
    for(stage = 1; stage <= 9; stage++)
    {  
        all();
        if(strike == 3)
        {
            printf(" 축하합니다!. %d회에 정답을 맞추셨습니다.\n", stage);
            printf("=======================================\n");
            break;          
        }
        else if(stage == 9)
        {
            printf("  실패했습니다. 정답은 %d %d %d 입니다.\n\n", q[0], q[1], q[2]);
            printf("=======================================\n");
        }
        

    }
    
    return 0;

}
int set(void)
{
    for (i = 0; i < 3; i++) 
    {
        num = (rand() % 9) + 1;
        j = 0;
        
        while (j < i) {
            if (q[j] == num) {
                num = (rand() % 9) + 1;
                j = 0; 
            } else {
                j++;
            }
        }

        q[i] = num;
    }
}


int input(void)
{
    for (i = 0; i < 3; i++) {
        printf(" %d번째 숫자를 입력하시오. (1 ~ 9) : ", i + 1);
        scanf("%d", &ans[i]);
        
        while (ans[i] < 1 || ans[i] > 9) {
            printf("10보다 적은수를 입력하시오. :");
            scanf("%d", &ans[i]);
        }
        
        for (j = 0; j < i; j++) {
            while (ans[i] == ans[j]) {
                printf("중복됩니다. 다른숫자를 입력하시오. : ");
                scanf("%d", &ans[i]);

                while (ans[i] < 1 || ans[i] > 9) {
                    printf("10보다 적은수를 입력하시오. :");
                    scanf("%d", &ans[i]);
                }
            }
        }
    }
}

int cal(void)
{
    strike = 0;
    ball = 0;
    out = 0;

    for (i = 0; i < 3; i++) {
        if (q[i] == ans[i]) {
            strike++;
        } else if (q[0] == ans[i] || q[1] == ans[i] || q[2] == ans[i]) {
            ball++;
        } else {
            out++;
        }
    }
}


void all(void)
{
    printf("                [ %d 회 ]       \n", stage);

    input();

    cal();

    printf("        [strike:%d ball:%d out:%d]\n\n", strike, ball, out);

}
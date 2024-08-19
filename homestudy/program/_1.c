//프로그램1 : 2개의 수 입력 후 사칙연산 기호 입력하면 계산해드려요.
#include<stdio.h>
int f_add(int,int);
int f_sub(int,int);
int f_mul(int,int);
double f_div(double,double);
int f_rmn(int,int);
int f_quo(int,int);

int main(void)
{
    int i, ans1, ans2, ans3, num1, num2, num3;              //ans는 수를 제대로 입력했는지 확인하는 리턴값.

    for(i=0; ;i++){

        printf("첫 번째 수를 입력하세요. : ");
        ans1 = scanf("%d",&num1);
        
        while (getchar() != '\n');
            if (ans1 == 1)		
                break; 
    }

    for(i=0; ;i++){

        printf("두 번째 수를 입력하세요. : ");
        ans2 = scanf("%d",&num2);
        while (getchar() != '\n');
            if (ans2 == 1)		
                break; 
    }

    for(i=0; ;i++){

        printf("어떤 계산을 할까요? \" + = 1, - = 2, * = 3, / = 4, %% = 5, // = 6 \" 를 입력하세요. : ");
        scanf("%d",&num3);
        if (1 > num3 || num3 > 6){
            printf("1 ~ 6 사이의 수를 입력해주세요.\n");
            while (getchar() != '\n');
            continue;
        }
        
        else break;
        }


    if(num3 == 1)
        f_add(num1,num2);
    if(num3 == 2)
        f_sub(num1,num2);
    if(num3 == 3)
        f_mul(num1,num2);
    if(num3 == 4)
        f_div(num1,num2);
    if(num3 == 5)
        f_rmn(num1,num2);
    if(num3 == 6)
        f_quo(num1,num2);
}

int f_add(int n1, int n2)
{
    int add = n1 + n2;
    printf("더한 숫자는 * %d * 입니다. \n", add);
}

int f_sub(int n1, int n2)
{
    int sub = n1 - n2;
    printf("뺀 숫자는 * %d * 입니다. \n", sub);
}

int f_mul(int n1, int n2)
{
    int mul = n1 * n2;
    printf("곱한 숫자는 * %d * 입니다. \n", mul);
}

double f_div(double n1, double n2)
{
    double div = n1 / n2;
    printf("나눈 숫자 소수점 두번째 자리까지 * %0.2f * 입니다. \n", div);
}

int f_rmn(int n1, int n2)
{
    int rmn = n1 % n2;
    printf("나머지를 구한 숫자는* %d * 입니다. \n", rmn);
}

int f_quo(int n1, int n2)
{
    int quo = n1 / n2;
    printf("몫을 구한 숫자는* %d * 입니다. \n", quo);
}
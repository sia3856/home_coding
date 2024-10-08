#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int userInput(int*); // 함수1. 사용자 입력 
int computer(int, int*);  // 함수2. 컴퓨터 랜덤
int compare(int, int);    // 함수3. 결과 판정
void result(int*); // 함수4. 결과 출력

int main() {
    srand(time(NULL));
    int ch;
    int cptr, user, resultIdx;
    int cnt[3]={0};

    while(1)
    {
        printf("========================");
        user = userInput(&user);
        if (user == 0)
        {
            result(cnt);
            printf("\n계속하려면 아무 키나 누르세요.");
            while(getchar()=='\n');
            while(getchar()!='\n');
            cnt[0]=0;
            cnt[1]=0;
            cnt[2]=0;
            printf("\n");
            continue;
        }
        else
        {
            cptr = computer(user, &cptr);
            resultIdx = compare(user, cptr);
            cnt[resultIdx] = cnt[resultIdx]+1;

            continue;
        }

    }
    return 0;
}

int userInput(int* usr)
{
    while(1)
    {
        printf("\n[ 가위(1) 바위(2) 보(3) ]\n>>> 입력 : ");
        scanf("%d", usr);
        if(1<=(*usr) && (*usr)<=3)
        {
            while (getchar()!='\n');
            return (*usr);
        }else if(0==(*usr)){
            return 0;
        }
        else{
            printf("\n다시 입력하세요.");
            continue;
        }
    }
}

int computer(int usr, int *cptr)
{
    char* rsp[] = {"가위", "바위", "보"};
    *cptr = rand()%3;
    printf("\n사용자는 %s를 냈습니다.",rsp[usr-1]);
    printf("\n컴퓨터는 %s를 냈습니다.",rsp[*cptr]);
    return *cptr;
}

int compare(int user, int computer)
{
    if(user==1)
    {
        switch(computer)
        {
            case 0:
                printf("\n\n무승부입니다.\n");
                return 2;
            case 1:
                printf("\n\n졌습니다. 분발하세요.\n");
                return 1;
            case 2:
                printf("\n\n승리하셨습니다.\n");
                return 0;
        }
    }
    else if(user==2)
    {
        switch(computer)
        {
            case 0:
                printf("\n\n승리하셨습니다.\n");
                return 0;
            case 1:
                printf("\n\n무승부입니다.\n");
                return 2;
            case 2:
                printf("\n\n졌습니다. 분발하세요.\n");
                return 1;
        }
    }
    else if(user==3)
    {
        switch(computer)
        {
            case 0:
                printf("\n\n졌습니다. 분발하세요.\n");
                return 1;
            case 1:
                printf("\n\n승리하셨습니다.\n");
                return 0;
            case 2:
                printf("\n\n무승부입니다.\n");
                return 2;
        }
    }
}

void result(int* arr)
{
    printf("\n[종합결과]\n> 승 : %d\n> 패 : %d\n> 무 : %d",arr[0], arr[1], arr[2]);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>

int num = 0;    
int slot(int *mon,int *p1, int *p2, int *p3, int *p4, int *p5, int *p6, int *s_play);
int slot_intro();
int num_dot(int num);
void enter(int num);
int main(void)                                                   
{
    srand(time(NULL));
    int money = 10000;
    int slot_play = 0;
    int prize1 = 0, prize2 = 0, prize3 = 0, prize4 = 0, prize5 = 0, prize6 = 0;
    enter(15);
    slot_intro();
    slot(&money,&prize1, &prize2, &prize3, &prize4, &prize5, &prize6, &slot_play);

    printf("최종 결과 - 잔액: %d원\n", money);
    printf("1등: %d번, 2등: %d번, 3등: %d번, 4등: %d번, 5등: %d번, 6등: %d번\n", prize1, prize2, prize3, prize4, prize5, prize6);
    printf("총 도박 횟수: %d \n", slot_play);
    return 0;
}

int slot(int *mon, int *p1, int *p2, int *p3, int *p4, int *p5, int *p6, int *s_play)
{
    int in_money = 0;
    int prize[5] = {10, 5, 3, 2, 1}; 
    int num2;

    while(1) {
        printf("현재 잔액: %d원\n", *mon);
        if (*mon <= 0) {
            printf("돈이 모두 소진되었습니다. 게임을 종료합니다.\n");
            break;
        }

        printf("배팅할 금액을 입력하세요 (0을 입력하면 종료): ");
        scanf("%d", &in_money);

        if (in_money == 0) {
            printf("게임을 종료합니다.\n");
            break;
        }

        if (in_money > *mon) {
            printf("잔액이 부족합니다. 다시 입력하세요.\n");
            continue;
        }

        *mon -= in_money;
        num = (rand() % 100) + 1;
        for(int cnt = 0; cnt<10; cnt++)
        {
            system("clear");
            num2 = rand()%6 +1;
            enter(15);
            num_dot(num2);
            usleep(300000);
            
        }
        system("clear");

        if (num <= 3) {
            (*p1)++;
            (*s_play)++;
            *mon += in_money * prize[0];
            enter(15);
            num_dot(1);
            printf("1등 당첨! 상금: %d원\n", in_money * prize[0]);
        }
        else if (num <= 9) {
            (*p2)++;
            (*s_play)++;
            *mon += in_money * prize[1];
            enter(15);
            num_dot(num);
            printf("2등 당첨! 상금: %d원\n", in_money * prize[1]);
        }
        else if (num <= 18) {
            (*p3)++;
            (*s_play)++;
            *mon += in_money * prize[2];
            enter(15);
            num_dot(3);
            printf("3등 당첨! 상금: %d원\n", in_money * prize[2]);
        }
        else if (num <= 32) {
            (*p4)++;
            (*s_play)++;
            *mon += in_money * prize[3];
            enter(15);
            num_dot(4);
            printf("4등 당첨! 상금: %d원\n", in_money * prize[3]);
        }
        else if (num <= 60) {
            (*p5)++;
            (*s_play)++;
            *mon += in_money * prize[4];
            enter(15);
            num_dot(5);
            printf("5등 당첨! 상금: %d원\n", in_money * prize[4]);
        }
        else {
            (*p6)++;
            (*s_play)++;
            enter(15);
            num_dot(6);
            printf("꽝! 상금을 받지 못했습니다.\n");
        }

        printf("현재 잔액: %d원\n", *mon);
    }
}

int slot_intro()
{
    printf("   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
    printf("   ⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️   ⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️   ⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️ \n");
    printf("   ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️   ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️   ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ \n");
    printf("   ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️   ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️   ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ \n");
    printf("   ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ \n");
    printf("   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
    printf("   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
    printf("   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
    printf("   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️   ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
    usleep(1500000);
    system("clear");
}
int num_dot(int num)
{   
    switch(num){
        case 1:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 2:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 3:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 4:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 5:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 6:
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ ⬛️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("          ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 7:
            printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️ \n");
            printf("⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ \n");
            printf("⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;
        case 8:
            printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬛️ ⬜️ ⬛️ ⬜️ ⬛️ ⬜️ \n");
            printf("⬜️ ⬛️ ⬜️ ⬛️ ⬜️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬜️ ⬛️ ⬜️ ⬛️ ⬜️ \n");
            printf("⬜️ ⬛️ ⬜️ ⬛️ ⬜️ ⬛️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬛️ ⬛️ ⬛️ ⬜️ ⬜️ \n");
            printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            break;


    }
}
void enter(int num)
{
    for(int i = 0; i < num; i++)
        printf("\n");
}
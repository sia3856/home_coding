#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>

#define bag_x 6
#define bag_y 4
#define bag_z 11
// sleep 함수를 사용하기 위해 필요
int getch();
int p_bag(int bag[bag_z][bag_y][bag_x]);
int p_bag_print(int bag[bag_z][bag_y][bag_x],int *x, int *y);
void enter(int num);
void potion();  // 포션 
void tel_scl(); // 순간이동 주문서

int main()
{
    int bag[bag_z][bag_y][bag_x] = {1, 1, 1, 1, 1};
    char select = 0;

    // printf("          0 : 무기\t\t  3 : 장갑  \n\n");
    // printf("          1 : 갑옷\t\t  4 : 망토  \n\n");
    // printf("          2 : 신발\t\t  5 : 장갑  \n\n");

    p_bag(bag);

    printf("가방을 열려면 I를 누르세요");
    while (1)
    {
        select = getch();
        if (select == 73 || select == 105)
            p_bag_print(bag,&loc_x, &loc_y);
    }
    return 0;
}

int p_bag(int bag[bag_z][bag_y][bag_x])
{
    srand(time(NULL));
    for (int i = 0; i <= 100000; i++)
    {
        int eqp = rand() % 6;
        int tier = rand() % 4;
        int star = rand() % 11;

        bag[star][tier][eqp] += 1;
    }
}

int p_bag_print(int bag[bag_z][bag_y][bag_x],int *x, int *y)
{
    char select = 0;
    while (1)
    {
        enter(10);
        printf("          1 : 장비\n\n");
        printf("          2 : 소비\n\n");
        select = getch();
        if (select == 49)
        {
            system("clear");
            enter(10);
            printf("          0 : 무기\t\t  3 : 장갑  \n\n");
            printf("          1 : 갑옷\t\t  4 : 망토  \n\n");
            printf("          2 : 신발\t\t  5 : 장갑  \n\n");
            select = getch();

            if (select == 48)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본검 \n\n");
                printf("          2 : 장검 \n\n");
                printf("          3 : 일본도 \n\n");
                printf("          4 : 싸울아비장검 \n\n");
                select = getch();

                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본검 +%d강 %d개\n\n", i, i, bag[i][0][0]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 장검 +%d강 %d개\n\n", i, i, bag[i][1][0]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 일본도 +%d강 %d개\n\n", i, i, bag[i][2][0]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 싸울아비장검 +%d강 %d개\n\n", i, i, bag[i][3][0]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
            else if (select == 49)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본갑빠 \n\n");
                printf("          2 : 반팔갑빠 \n\n");
                printf("          3 : 후드갑빠 \n\n");
                printf("          4 : 용갑빠 \n\n");
                select = getch();
                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본갑빠 +%d강 %d개\n\n", i, i, bag[i][0][1]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 반팔갑빠 +%d강 %d개\n\n", i, i, bag[i][1][1]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 후드갑빠 +%d강 %d개\n\n", i, i, bag[i][2][1]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 용갑빠 +%d강 %d개\n\n", i, i, bag[i][3][1]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
            else if (select == 50)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본장화 \n\n");
                printf("          2 : 슬리퍼 \n\n");
                printf("          3 : 운동화 \n\n");
                printf("          4 : 에어조단 \n\n");
                select = getch();
                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본장화 +%d강 %d개\n\n", i, i, bag[i][0][2]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 슬리퍼 +%d강 %d개\n\n", i, i, bag[i][1][2]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 운동화 +%d강 %d개\n\n", i, i, bag[i][2][2]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 에어조단 +%d강 %d개\n\n", i, i, bag[i][3][2]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
            else if (select == 51)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본장갑 \n\n");
                printf("          2 : 고무장갑 \n\n");
                printf("          3 : 면장갑 \n\n");
                printf("          4 : 가죽장갑 \n\n");
                select = getch();
                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본장갑 +%d강 %d개\n\n", i, i, bag[i][0][3]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 고무장갑 +%d강 %d개\n\n", i, i, bag[i][1][3]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 면장갑 +%d강 %d개\n\n", i, i, bag[i][2][3]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 가죽장갑 +%d강 %d개\n\n", i, i, bag[i][3][3]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
            else if (select == 52)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본망토 \n\n");
                printf("          2 : 면망토 \n\n");
                printf("          3 : 비단망토\n\n");
                printf("          4 : 방탄망토 \n\n");
                select = getch();
                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본망토 +%d강 %d개\n\n", i, i, bag[i][0][4]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 면망토 +%d강 %d개\n\n", i, i, bag[i][1][4]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 비단망토 +%d강 %d개\n\n", i, i, bag[i][2][4]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 방탄망토 +%d강 %d개\n\n", i, i, bag[i][3][4]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
            else if (select == 53)
            {
                system("clear");
                enter(10);
                printf("          1 : 기본마스크 \n\n");
                printf("          2 : K80마스크 \n\n");
                printf("          3 : K94마스크\n\n");
                printf("          4 : 타이거마스크 \n\n");
                select = getch();
                if (select == 49)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 기본마스크 +%d강 %d개\n\n", i, i, bag[i][0][5]);
                    printf("          10번은 ~를 입력하시오.");
                }
                else if (select == 50)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : K80마스크 +%d강 %d개\n\n", i, i, bag[i][1][5]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 51)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : K90마스크 +%d강 %d개\n\n", i, i, bag[i][2][5]);
                    printf("          10 번은 ~를 입력하시오.");
                }
                else if (select == 52)
                {
                    system("clear");
                    enter(3);
                    for (int i = 0; i <= 10; i++)
                        printf("          %d : 타이거마스크 +%d강 %d개\n\n", i, i, bag[i][3][5]);
                    printf("          10 번은 ~를 입력하시오.");
                }
            }
        }

        else if (select == 50)
        {
            system("clear");
            enter(10);
            printf("          1 : 물약\n\n");
            printf("          2 : 순간이동 주문서\n\n");
            printf("          3 : 마을이동 주문서\n\n");
            select = getch();

            if (select == 49)
            {
                potion(x, y);
            }
            else if(select == 50)
            {
                tel_scl(x, y);
            }
            else if(select == 51)
            {
                printf("마을로 이동하빈다");
            }
        }
        else
            {
            *x = *x;
            *y = *y;
            }
    }
}
void tel_scl()
{
    char select;
    system("clear");
    enter(10);
    printf("          1 : 순간이동 주문서(저장)\n\n");
    printf("          2 : 순간이동 주문서(이동)\n\n");
    select = getch();
    if (select == 49)
    {
        system("clear");
        enter(10);
        printf("          현재 좌표를 저장합니다.\n");

    }
    else if(select == 50)
    {
        system("clear");
        enter(10);
        printf("          저장된 좌표를 이동합니다.\n");
    }
}

void potion()
{
    char select;
    system("clear");
    enter(10);
    printf("          1 : 물약\n");
    printf("          2 : 순간이동 주문서\n");
    printf("          3 : 마을이동 주문서\n");
    select = getch();

    if (select == 49)
    {
        system("clear");
        enter(10);
        printf("          1 : 빨간 물약\n");
        printf("          2 : 주황 물약\n");
        printf("          3 : 맑은 물약\n");
        printf("          4 : 고농도 물약\n");
        select = getch();

        if (select == 49)
        {
            printf("체력 + 30\n");
        }
        else if (select == 50)
        {
            printf("체력 + 50\n");
        }
        else if (select == 51)
        {
            printf("체력 + 70\n");
        }
        else if (select == 52)
        {
            printf("체력 + 150\n");
        }
        sleep(1);
    }
}

int getch()
{
    int c;
    struct termios oldattr, newattr;

    tcgetattr(STDIN_FILENO, &oldattr); // 현재 터미널 설정 읽음
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);        // CANONICAL과 ECHO 끔
    newattr.c_cc[VMIN] = 1;                     // 최소 입력 문자 수를 1로 설정
    newattr.c_cc[VTIME] = 0;                    // 최소 읽기 대기 시간을 0으로 설정
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr); // 터미널에 설정 입력
    c = getchar();                              // 키보드 입력 읽음
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); // 원래의 설정으로 복구
    return c;
}

void enter(int num)
{
    for (int i = 0; i < num; i++)
        printf("\n");
}
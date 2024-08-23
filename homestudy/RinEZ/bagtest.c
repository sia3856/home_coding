#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>

#define BAG_X 6
#define BAG_Y 4
#define BAG_Z 11

// 키 입력을 위한 함수 선언
int getch();
// 가방을 출력하는 함수
int p_bag(int bag[BAG_Z][BAG_Y][BAG_X]);
// 가방 내용물을 출력하는 함수
int p_bag_print(int bag[BAG_Z][BAG_Y][BAG_X]);
// 여러 줄의 개행을 위한 함수
void enter(int num);

void display_equipment(int bag[BAG_Z][BAG_Y][BAG_X], int type, const char* names[]);
void display_potion();

int main()
{
    int bag[BAG_Z][BAG_Y][BAG_X] = {1};
    char select = 0;

    p_bag(bag);

    printf("가방을 열려면 I를 누르세요\n");
    while (1)
    {
        select = getch();
        if (select == 'I' || select == 'i')
            p_bag_print(bag);
    }
    return 0;
}

int p_bag(int bag[BAG_Z][BAG_Y][BAG_X])
{
    srand(time(NULL));
    for (int i = 0; i < 100000; i++)
    {
        int eqp = rand() % BAG_X;
        int tier = rand() % BAG_Y;
        int star = rand() % BAG_Z;

        bag[star][tier][eqp] += 1;
    }
    return 0;
}

int p_bag_print(int bag[BAG_Z][BAG_Y][BAG_X])
{
    char select = 0;
    while (1)
    {
        enter(10);
        printf("          1 : 장비\n");
        printf("          2 : 소비\n");
        select = getch();

        if (select == '1')
        {
            const char* equipment_names[BAG_X] = {
                "무기", "갑옷", "신발", "장갑", "망토", "마스크"
            };
            enter(10);
            for (int i = 0; i < BAG_X; i++)
                printf("          %d : %s\n", i, equipment_names[i]);
            select = getch();

            if (select >= '0' && select <= '5')
            {
                int equipment_type = select - '0';
                display_equipment(bag, equipment_type, equipment_names);
            }
        }
        else if (select == '2')
        {
            display_potion();
        }
    }
    return 0;
}

void display_equipment(int bag[BAG_Z][BAG_Y][BAG_X], int type, const char* names[])
{
    const char* tier_names[BAG_Y] = {
        "기본", "반팔", "후드", "용"
    };

    system("clear");
    enter(3);

    for (int i = 0; i < BAG_Z; i++)
        printf("          %d : %s%s +%d강 %d개\n\n", i, tier_names[i % BAG_Y], names[type], i, bag[i][i % BAG_Y][type]);

    printf("          10번은 ~를 입력하시오.\n");
}

void display_potion()
{
    char select;
    system("clear");
    enter(10);
    printf("          1 : 물약\n");
    printf("          2 : 순간이동 주문서\n");
    printf("          3 : 마을이동 주문서\n");
    select = getch();

    if (select == '1')
    {
        system("clear");
        enter(10);
        printf("          1 : 빨간 물약\n");
        printf("          2 : 주황 물약\n");
        printf("          3 : 맑은 물약\n");
        printf("          4 : 고농도 물약\n");
        select = getch();

        if (select == '1')
        {
            printf("체력 + 30\n");
        }
        else if (select == '2')
        {
            printf("체력 + 50\n");
        }
        else if (select == '3')
        {
            printf("체력 + 70\n");
        }
        else if (select == '4')
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

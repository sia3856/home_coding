#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>
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

int main(void)
{
    int bag[5][5][5] = {};
    printf("ddddd\n");
    printf("1을입력해\n");
    char select = getch();
    int num1, num2, num3;
    num1 = select - '0';
    num2 = select - '0';
    num3 = select - '0';
    bag[0][0][0] += 1;

    // ASCII 값을 배열 인덱스로 변환
    int input = select - '0'; // '1'을 입력하면 input는 1이 됩니다.

    if (input >= 0 && input < 5) {
        bag[0][0][input] += 1;
    } else {
        printf("잘못된 입력입니다.\n");
    }

    printf("%d개 \n", bag[0][0][0]);
    printf("ASCII 값: %d\n", select);
    printf("%d개 \n", bag[0][0][1]);
    printf("%d개 \n", bag[0][0][input]);
    if(num1 ==1)
    {
        printf("2를입력해\n");
        select = getch();
        num2 = select - '0';
        if(num2 == 2)
        {
            printf("3를입력해\n");
            select = getch();
            num3 = select - '0';
        }

    }
    printf(" %d %d %d ",num1,num2,num3);

    return 0;
}
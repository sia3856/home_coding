#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>
 // sleep 함수를 사용하기 위해 필요
int ui(int num);
int ui1(int num);
int num_dot(int num);
void enter(int num);


int main() {
    srand(time(NULL));
    int num1 ;
    int i;
    
    for (i = 0; i < 20; i++) {
        num1 = rand()%6 +1;
        ui(num1);
        printf("두구두구두구: %d등 \n", num1);
        ui1(num1);
        sleep(1); 
        system("clear"); // 1초 동안 대기
    }
    
    return 0;
}





int ui(int num)
{
    num_dot(num);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

int ui1(int num)
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    num_dot(num);
}

void enter(int num)
{
    for(int i = 0; i < num; i++)
        printf("\n");
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


         
            //printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ \n");
            //printf("⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️ ⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️ ⬜️ 🟥 🟥 🟥 🟥 🟥 ⬜️ \n");
            //printf("⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ \n");
            //printf("⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ 🟥 ⬜️ ⬜️ \n");
            //printf("⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ \n");
            //printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
            //printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ \n");
            //printf("⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ 🟥 ⬜️ ⬜️ ⬜️ ⬜️\n");
            //printf("⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️ ⬜️\n")
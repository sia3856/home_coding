#include <stdio.h>
#include <unistd.h>  // usleep 함수를 사용하기 위해 필요

void intro(const char *text);

int main() {
    const char *text = "\t전설의 용사 복이는 바포메트를 처지해 달라는 의뢰를 받고 말하는섬에 도착한다.\n\t말하는섬에는 마을이 있었다.\n\t말하는섬 마을에는 \"바포메트\"가 있다는 말하는섬던젼 입구가 있다";
    intro(text);
    return 1;
}

void intro(const char *text) {
    printf("═════════════════════════════════════════════════════════════════════════════════════════\n");
    while (*text) {        
        putchar(*text++);
        fflush(stdout);  
        usleep(30000);   
    }
    printf("\n");
}
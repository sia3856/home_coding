#include <stdio.h>
#include <unistd.h>  // POSIX 운영 체제에서 sleep 함수를 사용하기 위해 필요
#include <string.h>  // 문자열 길이를 계산하기 위해 필요

#define SCREEN_HEIGHT 20  // 화면의 높이를 정의
#define SLEEP_DURATION 200000  // 0.2초 동안 잠자기

void clear_screen() {
    printf("\033[H\033[J");  // ANSI escape code를 사용하여 화면을 지웁니다
}

int main() {
    // 출력할 텍스트
    char *credits[] = {
        "Presented by:",
        "",
        "  ChatGPT",
        "  OpenAI",
        "",
        "Special Thanks to:",
        "",
        "  All Users",
        "",
        "안녕하세요",
        NULL // 배열의 끝을 표시하기 위해 NULL 사용
    };

    int total_lines = 0;
    while (credits[total_lines] != NULL) {
        total_lines++;
    }

    for (int i = 0; i < total_lines + SCREEN_HEIGHT; i++) {
        clear_screen();
        
        for (int j = 0; j < SCREEN_HEIGHT; j++) {
            int line = i + j - SCREEN_HEIGHT;
            if (line >= 0 && line < total_lines) {
                printf("%s\n", credits[line]);
            } else {
                printf("\n");
            }
        }

        usleep(SLEEP_DURATION);
    }

    return 0;
}

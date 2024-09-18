#include <stdio.h>
#include <string.h>

int main() {
    char input[100];          // 입력 받을 문자열
    char *nickname;           // 닉네임을 저장할 변수
    char *message;            // 메시지를 저장할 변수

    // 문자열 입력 받기
    printf("입력 (형식: 닉네임 보낼메시지): ");
    fgets(input, sizeof(input), stdin);  // 입력 받기

    // 문자열에서 개행 문자 제거
    //input[strcspn(input, "\n")] = 0;

    // 첫 번째 토큰: 닉네임
    nickname = strtok(input, " ");
    
    // 두 번째 토큰부터는 보낼 메시지로 저장 (공백도 포함해서 처리)
    message = strtok(NULL, "");  // NULL로 호출하면 나머지 전체 문자열을 반환

    // 결과 출력
    printf("닉네임: %s\n", nickname);
    printf("메시지: %s\n", message);

    return 0;
}
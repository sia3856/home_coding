#include <stdio.h>
int i, j;
int size;

void Diamond(int size); 

int main() 
{
    printf("숫자를 입력하세요: ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        size -= 1;
    }
    Diamond(size);

    return 0;
}

void Diamond(int size) {
    int n = size / 2;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if ((i + j >= n && i + j <= 3 * n) && (i - j <= n && j - i <= n)) {
                printf(" ");
            } else {
                printf("X");
            }
        }
        printf("\n");
    }
}
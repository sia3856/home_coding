//예제 44
//배열에 저장된 2진수를 10진수로 변환하기
#include <stdio.h>
int main()

{
    int n = 0, b[5] = {1, 1, 0, 0, 1}, i, j, temp;
    for (i = 0; i < 5; i++)
    {
        temp = 1;
        for (j = 1; j <= 4 - i; j++)
            temp = temp * 2;
        n = n + b[i] * temp;
    }
    printf("%d\n", n);
    return 0;
}
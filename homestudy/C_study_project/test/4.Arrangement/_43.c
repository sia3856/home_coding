#include <stdio.h>
int main()
{
    int a[6] = {20, 50, 30, 10, 60, 40};
    int i, j, max, temp;
    for (i=0; i<5 ; i++) {
        max = i;
        for (j=i+1; j<6; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }
        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
    for (i=0; i<6; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
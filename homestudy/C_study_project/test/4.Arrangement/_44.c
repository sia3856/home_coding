#include <stdio.h>
int main()
{
    int a[10] = {3, 7, 2, 8, 5, 1, 10, 9, 4, 6};
    int i, j, key;
    for (i=1; i<10; i++) {
        key = a[i];
        j = i-1;
        while (j>=0) {
            if (key < a[j]) {
                a[j+1] = a[j];
                j = j-1;
            }
            else
                break;
        }
        a[j+1] = key;
    }
    for (i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
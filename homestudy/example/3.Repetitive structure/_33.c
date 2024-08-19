#include<stdio.h>

int main(void)
{
    for (int i = 2; i < 101; i++)
    {
        for(int j = 2 ; j < i - 1; j++){
            if (i % j == 0)
                break;
        }
        printf("%d ", i);        
    }
}
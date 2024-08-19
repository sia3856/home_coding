#include<stdio.h>
int main(void)
{
    int num, num1, num2, i, j, k, l  ;    
    int num3 = num;

    for(i=0; ;i++){
        printf("5 이상의 수를 입력하세요: ");
        scanf("%d", &num);
        if (5 > num ){
                printf("5 이상의 수만 입력해주세요.\n");
                while (getchar() != '\n');
                continue;
        }
            else break;
    }

    if(num % 2 == 0){
        num1 = num / 2;
        num2 = num / 2;
        num3 = num - 1;
    }

    if(num % 2 != 0){
        num1 = (num / 2) + 1;
        num2 = (num / 2);
        num3 = num;
    }

    for(i = 1; i < num1 + 1 ; i++){
        printf("\n");
        for(j = 0; j < num1 - i ; j++)
            printf("   ");
        for(k = 0; k < i ; k++)
            printf(" * ");
        for(l = 1; l < i ; l++)
            printf(" * ");
    }
    printf("\n");

    for(i = 0 ; i < num2  ; i++){
        for(j = num3-2; j < num3 ; j++){
            ;
            printf("   ");
        }
        for(l = 0; l < num3-4 ; l++){
            ;
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
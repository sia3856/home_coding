#include<stdio.h>
int main(void)
{
    int num, i, j, k, l, x, y ;    

    for(i=0; ;i++){
        printf("2 이상의 수를 입력하세요: ");
        scanf("%d", &num);
        if (2 > num ){
                printf("2 이상의 수만 입력해주세요.\n");
                while (getchar() != '\n');
                continue;
        }
            else break;
    }

    for(i = 0 ; i< num; i++){
        for(j = 0; j < i + 1 ; j++)
            printf(" * ");
        for(k = 0; k < num - i - 1 ; k++)
            printf("   ");
        for(l = num; l > 0 ; l--){                 //한번 써보고 싶었음.
            if(l < num-i+1){
            printf(" * ");
            }
        } \
    printf("\n");    
    }

    for(i = 0 ; i< num; i++){
        for(j = 0; j < num - i - 1 ; j++)
            printf("   ");
        for(k = 0; k < i + 1 ; k++)
            printf(" * ");
        for(x = 0; x < i  ; x++)
            printf("   ");
        for(y = 0; y < num - i ; y++)
            printf(" * ");
    printf("\n");
    } 


    return 0;
}
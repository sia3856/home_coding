#include <stdio.h>

int main()
{
    int start = 0;
    int cnt, end, tempS, tempE, last;
    int len = 25;

    char flower[len+5][len];
    
    /* 초기화 */
    for(int i=0; i<len+5; i++){
        for(int j=0; j<len; j++){
            flower[i][j] = ' ';
        }
    }
    
    /* 꽃 피우기 */
    tempS=tempE=start=end = (len/6);
    
    while(1)
    {
        for(int i=0; i<4; i++)
            {
                for(int j=start; j<=end; j++)
                {
                    flower[i][j] = '*';
                }
                start = start-1;
                end = end+1;   
            } 
        if(tempS+11<len)
        {
            start=end=tempS=tempS+8;
            continue;
        }else{
            break;
        }
    }
    
    for (int i=4; i<16; i++)
    {
        
        for(int j=i-4; j<len-i+4; j++)
        {
            flower[i][j] = '*';
        }
    }

    for(int i=16; i<len+5; i++)
    {
        int j = len/2;
        flower[i][j] = '*';
    }

    /* 출력 */
    printf("\n");

    for(int i=0; i<len+5; i++){
        for(int j=0; j<len; j++){
            printf(" %c",flower[i][j]);
        }
        printf("\n");
    }


    return 0;
}
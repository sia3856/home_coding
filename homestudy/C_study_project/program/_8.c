#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int len;
    
    printf("정수 입력 : ");
    scanf("%d", &len);
    
    int l = (len*2)-1;
    int ll = (int)(l/2)/2;
    int offset = (len%2==0);
    int start, end, cnt;
    char arr[len][l];
    
    /* 초기화 */
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<l; j++)
        {
            arr[i][j] = ' ';
        }
    }
    
    /* 별찍기 */
    for(int i=0; i<len; i++)
    {
        if(i<(len/2)-offset)
        {
            start = ll-i;
            end = ll+i;
        }else if(i>(len/2)){
            start = start+1;
            end = end-1;
        }else{
            start = ll-((len/2)-offset);
            end = ll+((len/2)-offset);
        }
        cnt = start;
        while(cnt<=end)
        {
            arr[i][cnt] = '*';
            cnt++;
        }
    }
    
    /* 출력 */
    printf("\n");
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<l; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
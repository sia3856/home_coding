//트리만들기
#include<stdio.h>

int main(void)
{
    int start, end, center;
    int len ;
    int cnt =0;
    char star ='*';
    
    printf("정수를 입력하세요: ");
    scanf("%d",&len);
    char tree[len][len*len];
    char arr[len*len][len*len];
    center = (int)(len*len) /2;
    printf("%d", start);
    
    /* 초기화 */
    for(int i=0; i<len*len; i++)
    {
        for(int j=0; j<len*len; j++)
        {
            arr[i][j] = ' ';
        }
    }
    /* 초기화 */
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len*len; j++)
        {
            tree[i][j] = ' ';
        }
    }
    for(int i=0;i<len;i++)

    {
        
        for(int k=0; k<len; k++)
        {
            // if (k==0)
            // {
                start = center-i-k;
                end = center+i+k;
                
                
                printf("\n%d@ start: %d, end: %d", k, start,end);
            // }
            // else
            // {
            //     start = start-1;
            //     end = end +1;
            //     printf("\n1 start: %d, end: %d", start,end);
            // }    
            
            for(int j=start; j<=end; j++)
            {
                arr[cnt][j] = '*';
                printf("arr[%d][%d]",cnt,j);
            }
            cnt++;
        }
        start = start+2;
        end = end-2;
        
    }

    
    /* 출력 */
    printf("\n");
    
    for(int i=0; i<len*len; i++)
    {
        for(int j=0; j<len*len; j++)
        {   printf(" ");
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<len;i++)
        {
            for(int j=start;j<=end;j++)
            {
                tree[i][j]='*';
//               printf("\ni %d j %d",i,j);
            }
        }

    for(int i=0;i<len;i++)
    {
        for(int j=0; j<len*len; j++)
        {   printf(" ");
            printf("%c",tree[i][j]);
        }
        printf("\n");
    }
        
}
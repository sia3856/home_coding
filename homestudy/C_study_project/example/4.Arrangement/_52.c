//예제 52
//‘ㄹ’자로 채우기
 
//5행 5열 배열에 위와 같이 ‘ㄹ’자 모양으로 값을 저장하는 방법은 다음과 같다.
//우선, 배열의 값 입력 방향은 열 방향이고 5열까지 채운 후
//다음 행으로 넘어갈 때 마지막 열 번호가 다음 행 시작 열 번호가 된다.
//첫 번째 행에서는 열 번호가 1씩 증가하고 주 번 째 행에서는 열 열호가 1씩 감소하고,
//다시 세 번째 행에서는 열 번호가 1씩 증가함을 반복 한다

#include <stdio.h>

int main()
{
    int a[5][5];
    int i,j,k=0;

    for(i=0;i<5;i++)
    {
            if(i%2 == 0)
            {
                for(j=0;j<5;j++)
                {
                    k=k+1;
                    a[i][j]=k;
                }
            }    
            else
            {
                for(j=4;j>=0;j--)
                {
                    k=k+1;
                    a[i][j]=k;
                }
            }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");

    }    
    return 0;
}
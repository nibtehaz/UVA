/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005



int main()
{
	int N,min,sum,gaps,i,j;
    char inp[1000][50];

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;

        sum=0;
        min=MAX;
        gets(inp[0]);

        for(i=0;i<N;i++)
            gets(inp[i]);

        for(i=0;i<N;i++)
        {
            gaps=0;
            for(j=0;j<25;j++)
            {
                if(inp[i][j]==' ')
                    gaps++;
            }
            if(gaps<min)
                min=gaps;
            sum+=gaps;
        }
        sum-=N*min;

        printf("%d\n",sum);
    }

    return 0;


}

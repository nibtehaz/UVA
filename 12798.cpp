/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005



int main()
{
    int N,M,cnt,i,j,goal,test;

    while(scanf("%d%d",&N,&M)!=EOF)
    {
        cnt=0;

        for(i=0;i<N;i++)
        {
            test=1;
            for(j=0;j<M;j++)
            {
                scanf("%d",&goal);
                if(goal==0)
                    test=0;
            }

            if(test==1)
                cnt++;

        }
        printf("%d\n",cnt);
    }

    return 0;
}



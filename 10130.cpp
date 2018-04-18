/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
    int T,N,M,P[1005],W[1005],G,MW[200],i,j;
    int dp[1005][36];
    long long int loot;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d%d",&P[i],&W[i]);
        }

        scanf("%d",&G);
        for(i=0;i<G;i++)
        {
            scanf("%d",&MW[i]);
        }

        for(i=0;i<=N;i++)
        {
            dp[i][0]=0;
        }

        for(j=0;j<=35;j++)
        {
            dp[0][j]=0;
        }

        for(i=1;i<=N;i++)
        {
            for(j=1;j<=35;j++)
            {
                if(j>=W[i-1])
                {
                    dp[i][j]= ( P[i-1] + dp[i-1][j- W[i-1]]  > dp[i-1][j]  )  ?  P[i-1] + dp[i-1][j- W[i-1] ] :  dp[i-1][j] ;
                }
                else
                    dp[i][j] =dp[i-1][j];
            }
        }

        loot=0;

        for(i=0;i<G;i++)
        loot+=dp[N][MW[i]];

        printf("%lld\n",loot);


    }

    return 0;
}

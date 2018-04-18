/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int n,k,coef[10005],i,j;

    while(1)
    {
        scanf("%lld%lld",&n,&k);

        if(n==-1&&k==-1)
            break;

        for(i=0;i<=n;i++)
            scanf("%lld",&coef[n-i]);

        for(i=0;(i+k)<=n;i++)
        {
            coef[i+k]-=coef[i];
            coef[i]=0;


        }

        for(i=0;i<=n;i++)
        {
            if(coef[i]!=0)
                break;
        }

            printf("%lld",coef[n]);

            for(j=n-1;j>=i;j--)
                printf(" %lld",coef[j]);

            printf("\n");
    }

    return 0;
}


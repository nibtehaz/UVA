/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int npr (int n , int p);

int main()
{
    int T,L,min,max,i,tp=1;
    long long int sum,P;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&L,&min,&max);

        L*=L;
        sum=0;

        P=npr(L,min);
        sum=P;

        for(i=min+1;i<=max;i++)
        {
            P*=(L-i+1);

            if(P>10000000000007 )
                P%=10000000000007 ;

            sum+=P;

            if(sum>10000000000007)
                sum-=10000000000007;
        }

        printf("Case %d: %lld\n",tp++,sum);
    }


}


long long int npr (int n , int p)
{

    int i;
    long long int P=1;

    for(i=0;i<p;i++)
    {
        P*=(n-i);

        if(P>10000000000007 )
            P%=10000000000007 ;
    }

    return P;

}

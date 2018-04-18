/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define SAFE 10000000000000

int main()
{
    long long int T,F,B,K,data;
    long long int temp,ans;

    scanf("%lld",&T);
    while(T--)
    {
        ans=0;

        scanf("%lld%lld",&F,&B);
        while(B--)
        {
            temp=1;
            scanf("%lld",&K);
            while(K--)
            {
                scanf("%lld",&data);
                temp*=data;

                if(temp>=SAFE)
                    temp%=F;
            }

            ans+=temp;
            if(ans>=SAFE)
                ans%=F;
        }
        ans%=F;
        printf("%lld\n",ans);
    }


    return 0;
}


/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int T;
    long long int n,m,ans;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%lld%lld",&n,&m);
        ans=0;

        ans=(((n-1)*(n))/2);

        if(m>n)
            ans+=(m-n)*n;

        if(ans==0)
            ans=1;

        printf("%lld\n",ans);
    }

    return 0;

}

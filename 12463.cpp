/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    long long int ans;

    while(1)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

        if(a==0&&b==0&&c==0&&d==0&&e==0)
            break;

        ans=a*b*c*d*d*e*e;

        printf("%lld\n",ans);
    }


    return 0;

}



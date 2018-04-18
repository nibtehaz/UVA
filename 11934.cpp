#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    long long int a,b,c,d,L,cnt,i;

    while(1)
    {
        scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&L);

        if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(L==0)) break;

        cnt=0;
        for(i=0;i<=L;i++)
        {
            if((a*i*i+b*i+c)%d==0) cnt++;
        }

        printf("%lld\n",cnt);
    }


    return 0;
}

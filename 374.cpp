#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int big_mod(long long int b, long long int p, long long int m);

int main()
{
    long long int b,p,m;

    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF)
    {
        printf("%d\n",big_mod(b,p,m));
    }

  return 0;
}


int big_mod(long long int b, long long int p, long long int m)
{
    if(p==0)
        return 1;

    else if(p%2==0)
    {
        int ret = big_mod(b,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return( (b%m)*(big_mod(b,p-1,m)%m))%m;
}

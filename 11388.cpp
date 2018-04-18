#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int gcd,lcm,i,j,t;
    unsigned long long int n,m;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&gcd,&lcm);

        if(lcm%gcd!=0)
            printf("%d\n",-1);
        else
            printf("%lld %lld\n",gcd,lcm);

    }



    return 0;
}
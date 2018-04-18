#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    unsigned long long int n,sum,D,tru;
    long long int miss;
    while(1)
    {
        scanf("%llu",&sum);

        if(sum==0) break;

        D=sqrt(1+8*sum);

        n=(-1+D)/2;

        abar:
        tru=(n*(n+1))/2;
        miss=tru-sum;
        if(miss<=0) {n++; goto abar; }
        printf("%lld %llu\n",miss,n);

            }


    return 0;
}

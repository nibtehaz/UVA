#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int sieve[625007];
long long int twin[305555];

int main()
{
    long long int num,digi,dig[20],i,j,k=0;

    sieve[0]=3;

    for(i=2;i<=4477;i++)
    {
        if((sieve[i/32]&(1<<(i&31)))==0)
        {
            for(j=i*i;j<=20000005;j+=i)
            {
                sieve[j/32]=sieve[j/32]|(1<<(j&31));
            }
        }
    }

    for(i=0;i<625005;i++)
    {
        for(j=0;j<30;j++)
            if(((sieve[i]&(1<<(j&31)))==0)&&((sieve[i]&(1<<((j+2)&31)))==0))
            {
                twin[k]=(i*32)+j;
                k++;
            }

            if(((sieve[i]&(1<<(30&31)))==0)&&((sieve[i+1]&(1))==0))
            {
                twin[k]=(i*32)+30;
                k++;
            }
            if(((sieve[i]&(1<<(31&31)))==0)&&((sieve[i+1]&(2))==0))
            {
                twin[k]=(i*32)+31;
                k++;
            }


    }





    while(scanf("%lld",&num)!=EOF)
    {
       printf("(%lld, %lld)\n",twin[num-1],twin[num-1]+2);

    }
    return 0;
}


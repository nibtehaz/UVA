#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sieve[100005];

int main()
{
    int num,digi,dig[20],i,j;

    sieve[0]=3;

    for(i=2;i<=1100;i++)
    {
        if((sieve[i/32]&(1<<(i&31)))==0)
        {
            for(j=i*i;j<=1000005;j+=i)
            {
                sieve[j/32]=sieve[j/32]|(1<<(j&31));
            }
        }
    }

    while(scanf("%d",&num)!=EOF)
    {
        digi=0;
        i=num;
        for(;;)
        {
            dig[digi]=i%10;
            digi++;
            i/=10;
            if(i==0)
                break;
        }

        j=0;
        for(i=0;i<digi;i++)
        {
            j*=10;
            j+=dig[i];
        }

        if((sieve[num/32]&(1<<(num&31)))==0)
            i=1;
        else
            i=0;

        if(j==num)
            j=0;
        else
        {
            if((sieve[j/32]&(1<<(j&31)))==0)
                j=1;
            else
                j=0;

        }


        if(i==0)
            printf("%d is not prime.\n",num);
        else if(i==1&&j==0)
            printf("%d is prime.\n",num);
        else if(i==1&&j==1)
            printf("%d is emirp.\n",num);

    }





    return 0;
}


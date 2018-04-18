#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime_checker(long long int num);
unsigned long long int enperfect(long long int num);

int sieve[35],prime[35];
unsigned long long int perfect[35];

int main()
{
    int i,j;
    sieve[0]=1;
    sieve[1]=1;

    /*sieve*/

    for(i=2;i<7;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<35;j+=i)
                sieve[j]=1;
        }
    }

    /*new prime*/
    for(i=0;i<35;i++)
    {
        if(sieve[i]==0)
        {
            prime[i]=prime_checker(pow(2,i)-1);
            if(prime[i]==1)
                perfect[i]=enperfect(i);
        }
    }

    while(scanf("%d",&i)!=EOF)
    {
        if(i==0)
            break;

        if(sieve[i]==1)
            printf("Given number is NOT prime! NO perfect number is available.\n");
        else if(sieve[i]==0&&prime[i]==0)
            printf("Given number is prime. But, NO perfect number is available.\n");
        else if(sieve[i]==0&&prime[i]==1)
            printf("Perfect: %llu!\n",perfect[i]);
    }

    return 0;
}


int prime_checker(long long int num)
{
    long long int pum=sqrt(num);
    int i;

    if(pum*pum==num)
        return 0;

    if(num%2==0)
        return 0;

    for(i=3;i<pum;i+=2)
    {
        if(num%i==0)
            return 0;
    }

    return 1;

}

unsigned long long int enperfect(long long int num)
{
    return (pow(2,num-1)*(pow(2,num)-1));
}

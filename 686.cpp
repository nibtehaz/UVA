#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int sieve[65536]={0,};
int prime[65536]={0,};


int main()
{
    int N,C,i,j,cnt,prim=0,M;

    sieve[0]=1;
    sieve[1]=1;
    for(i=2;i<65536;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i+i;j<65536;j+=i)
                sieve[j]=1;
        }
    }


    for(i=2;i<65536;i++)
    {
        if(sieve[i]==0)
        {
            prime[prim]=i;
            prim++;
        }
    }



    while(1)
    {
        scanf("%d",&N);
        if(N==0) break;
        cnt=0;

        M=N/2;

        for(i=0;;i++)
        {
            if(prime[i]>M) break;

            if(sieve[N-prime[i]]==0) cnt++;

        }
        printf("%d\n",cnt);



    }


    return 0;
}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int sieve[2005];

int main()
{
    int freq[150],i,j,n,t,tp=1,test;
    char inp[10000];

    sieve[0]=sieve[1]=1;

    for(i=2;i<46;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<2005;j+=i)
                sieve[j]=1;
        }
    }

    scanf("%d",&t);
    gets(inp);

    for(;tp<=t;tp++)
    {
        gets(inp);
        n=strlen(inp);

        for(i=0;i<150;i++)
            freq[i]=0;

        for(i=0;i<n;i++)
        {
            freq[(int)inp[i]]++;
        }

        test=0;
        printf("Case %d: ",tp);
          for(i=0;i<150;i++)
            {
                if(sieve[freq[i]]==0)
                    {
                        printf("%c",i);
                        test=1;
                    }
            }
            if(test==0)
                printf("empty\n");
            else
                printf("\n");


    }
    return 0;

}

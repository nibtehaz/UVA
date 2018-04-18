#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sieve[34000],prime[32000],set[170][6];

int main()
{
    int i,j,primo=0,a,b,len,test,sp=0;

    sieve[0]=1;
    sieve[1]=1;

    for(i=0;i<32077;i++)
    {
        if(sieve[i]==0)
        {
            prime[primo]=i;
            primo++;
            for(j=i*i;j<32077;j+=i)
                sieve[j]=1;
        }
    }


        len=prime[1]-prime[0];
        test=0;


        for(i=1;i<primo-1;i++)
        {

            if(len==prime[i+1]-prime[i])
            {
               if(test==0)
               {
                   set[sp][0]=3;
                   set[sp][1]=prime[i-1];
                   set[sp][2]=prime[i];
                   set[sp][3]=prime[i+1];

                   test=1;
               }
               else
                {
                    set[sp][0]++;
                    set[sp][set[sp][0]]=prime[i+1];
                }
            }
            else
            {
                len=prime[i+1]-prime[i];

                if(test==1)
                    {
                        sp++;
                        test=0;

                    }
            }
        }

         if(test==1)
                    {
                        sp++;
                    }




while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
            break;
        if(a>b)
        {
            b=a^b;
            a=a^b;
            b=a^b;
        }

        for(i=0;i<sp;i++)
        {
            if(b<set[i][1])
                break;
            if(set[i][1]>=a&&b>=set[i][set[i][0]])
            {
                printf("%d",set[i][1]);
                for(j=2;j<=set[i][0];j++)
                    printf(" %d",set[i][j]);
                printf("\n");
            }

        }



    }



    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int S,t,n,num[20],i,j;
    unsigned long long int sum,mul,temp,a,b;

    scanf("%d",&S);

    for(t=1;t<=S;t++)
    {
        scanf("%d",&n);

        mul=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            mul*=num[i];
        }

        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=(mul/num[i]);
        }

        mul*=n;
        a=mul;
        b=sum;


        if(sum>mul)
        {
            temp=sum;
            sum=mul;
            mul=temp;
        }


        while(1)
        {
            temp=mul%sum;
            mul=sum;
            sum=temp;

            if(sum==0)
                break;
        }

        a/=mul;
        b/=mul;

        printf("Case %d: %llu/%llu\n",t,a,b);

    }

    return 0;
}



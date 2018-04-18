#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    long long int N,sum,temp;
    int t,tp=1,test;
    int dig[20];

    scanf("%d",&t);

    for(;tp<=t;tp++)
    {
        test=0;
        scanf("%lld",&N);

        sum=0;
        temp=N;
        for(;;)
        {
            sum+=(temp%10)*(temp%10);
            temp=temp/10;
            if(temp==0) break;
        }


        for(;;)
        {
            temp=sum;
            sum=0;

            for(;;)
            {
            sum+=(temp%10)*(temp%10);
            temp=temp/10;
            if(temp==0) break;
            }

            if(sum<10)
            {
                if(sum==1) test=1;
                else test=0;

                break;
            }

        }

        if(test==1) printf("Case #%d: %lld is a Happy number.\n",tp,N);
        else printf("Case #%d: %lld is an Unhappy number.\n",tp,N);

    }


    return 0;
}


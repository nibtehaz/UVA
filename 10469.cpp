#include<stdio.h>
#include<math.h>
int main()
{
    long long int A[32],B[32],SUM[32],a,b,sum,i;

    while((scanf("%lld %lld",&a,&b))!=EOF)
    {
        for(i=0;i<32;i++)
        {
            A[i]=a%2;
            a/=2;
        }
        for(i=0;i<32;i++)
        {
            B[i]=b%2;
            b/=2;
        }

        for(i=0;i<32;i++)
        {
            SUM[i]=A[i]+B[i];
            if(SUM[i]==2) SUM[i]=0;
        }
    sum=0;
    for(i=0;i<32;i++)
    {
        sum+=SUM[i]*pow(2,i);
    }
        printf("%lld\n",sum);
    }


    return 0;
}


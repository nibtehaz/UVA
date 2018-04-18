#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long int power (long long int n , int m);


int main()
{

    int t;
    long long int price[400],cost;
    int i,key,j,cnt;

    scanf("%d",&t);

    while(t--)
    {
        for(i=0;;i++)
        {
            scanf("%lld",&price[i]);
            if(price[i]==0)  {  cnt=i;   break; }

            key=price[i];
            for(j=i-1;j>=0;j--)
            {
                if(price[j]>=key) break;

                else price[j+1]=price[j];
            }

            price[j+1]=key;
        }

        cost=0;


        for(i=0;i<cnt&&cost<=2500000;i++)
        {
            cost+=power(price[i],i+1);
        }
        cost*=2;

        if(cost<=5000000)    printf("%lld\n",cost);

        else printf("Too expensive\n");
    }

    return 0;
}

long long int power (long long int n , int m)
{
    long long int prod=n;
    int i;
    for(i=1;i<m;i++)        prod*=n;

    return prod;
}

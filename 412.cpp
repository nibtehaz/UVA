#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int gcd (int a ,int b);

int main()
{

    int n,arr[500],i,j,D,N;

    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        D=0;
        N=0;

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                N++;

                if(gcd(arr[i],arr[j])==1) D++;
            }
        }

        if(D==0)
            printf("No estimate for this data set.\n");

        else
            printf("%.6lf\n",sqrt((6.0*N)/D));


    }




    return 0;
}


int gcd (int a ,int b)
{
    int temp;

    if(b>a)
    {
        temp=b;
        b=a;
        a=temp;
    }

    while(1)
    {
        temp=b;
        b=a%b;
        a=temp;

        if(b==0) break;


    }

    return a;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int GCD(int a,int b);

int main()
{
    int N,i,j;
    unsigned long long int G;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;
        G=0;

        for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
                G+=GCD(i,j);

        printf("%llu\n",G);
    }

    return 0;
}

int GCD(int a,int b)
{
    int temp;

    while(1)
    {
        temp=b;
        b=a%b;
        a=temp;

        if(b==0) break;
    }

    return a;
}

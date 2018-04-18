#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    long long int pos,n,x,D,N;


    while(scanf("%lld",&pos)!=EOF)
    {
        pos--;

        n=(-1+sqrt(1+8*pos))/2;
        n++;
        x=pos-(n*(n-1)/2);

        if(n%2==0)
        {
            D=1+x;
            N=n-x;
        }

        else
        {
            D=n-x;
            N=1+x;
        }

        printf("TERM %lld IS %lld/%lld\n",pos+1,D,N);


    }


    return 0;
}


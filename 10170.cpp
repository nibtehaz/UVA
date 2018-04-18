#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int s;
    unsigned long long int d;
    long long int n;
    double D;

    while(scanf("%d%llu",&s,&d)!=EOF)
    {

        D=sqrt( (2*s-1)*(2*s-1)+8*d );
        n=(1-2*s+D)/2;

        if(d>((n)*(2*s+n-1))/2) n++;
         if(n<=0) n=1;
        printf("%llu\n",s+(n-1));

    }



    return 0;
}

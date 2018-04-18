#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    unsigned long long int n,sum;

    while(scanf("%llu",&n)!=EOF)
    {
        n=n/2;
        n=(n+1)*(n+1);
        sum=6*n-9;
        printf("%llu\n",sum);
    }


    return 0;
}

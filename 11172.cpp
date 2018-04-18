#include<stdio.h>

int main ()
{

    long long int a,b;
    int t;

    scanf("%d",&t);
    for(;t;t--)
    {
        scanf("%lld %lld",&a,&b);

        if(a<b) { printf("<\n"); continue; }
        else if(a>b) {printf(">\n"); continue; }
        else printf("=\n");
    }

    return 0;
 }



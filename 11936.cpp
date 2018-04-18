#include<stdio.h>

int main()
{
    int n;
    long long int a,b,c;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a>=(b+c)) printf("Wrong!!\n");
        else if(c>=(b+a)) printf("Wrong!!\n");
        else if(b>=(c+a)) printf("Wrong!!\n");
        else if(a&&b&&c) printf("OK\n");
    }

    return 0;
}
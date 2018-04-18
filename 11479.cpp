#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c;
    int t,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if((a<=0)||(b<=0)||(c<=0)) printf("Case %d: Invalid\n",i);
        else if((a>=b+c)||(c>=b+a)||(b>=a+c)) printf("Case %d: Invalid\n",i);
        else if(a==b&&b==c) printf("Case %d: Equilateral\n",i);
        else if((a==b&&b!=c)||(c==b&&b!=a)||(a==c&&b!=c)) printf("Case %d: Isosceles\n",i);
        else if(a!=b&&b!=c&&c!=a) printf("Case %d: Scalene\n",i);

    }


    return 0;
}

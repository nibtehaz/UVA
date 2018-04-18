#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,s,r;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        if(s==0) r=0;
        else r=sqrt(s*(s-a)*(s-b)*(s-c))/s;

        printf("The radius of the round table is: %.3lf\n",r);
    }

    return 0;
}

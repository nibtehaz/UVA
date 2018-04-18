#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double ans,d,v,u;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);

        if((v>=u)||(v<=0)||(u<=0)||(d<=0)) printf("Case %d: can't determine\n",i);

        else
            {
                ans=d*((1.0/sqrt(u*u-v*v))-(1.0/u));
                printf("Case %d: %.3lf\n",i,ans);
            }



    }


    return 0;
}


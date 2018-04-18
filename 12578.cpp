#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;
    double L,pi=acos(-1),a,b;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf",&L);

        b=pi*(L*2.0/10.0)*(L*2.0/10.0);
        a=(L*(L*6.0/10.0))-b;

        printf("%.2lf %.2lf\n",b,a);

    }



    return 0;
}

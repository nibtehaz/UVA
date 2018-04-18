#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int C,F,t,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&C,&F);

        printf("Case %d: %.2lf\n",i,C+((F*5.0)/9.0));
    }

    return 0;
}




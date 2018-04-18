#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int x,y,r,t;
    double dist;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d",&x,&y,&r);
        dist=sqrt(x*x*1.0+y*y*1.0);
        printf("%.02lf %.02lf\n",r*1.0-dist,r*1.0+dist);
    }

    return 0;

}


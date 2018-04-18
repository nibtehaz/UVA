#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,i,x;
    double a0,a1,a2,move;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        move=0.0;
        a0=360.0/m;
        a1=a0;
        a2=360.0/(m+n);

        for(i=1;i<m;i++)
        {
            x=(a1/a2);
            if(a1-x*a2<a2*(x+1)-a1) { move+=a1-x*a2; }
            else move+=a2*(x+1)-a1;
            a1+=a0;

        }
        move*=10000.0/360.0;

        printf("%.4lf\n",move);
    }





    return 0;
}

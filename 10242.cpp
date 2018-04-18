#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int i,a,b,c;
    double x[4],y[4],xo,yo;

    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])!=EOF)
    {

        if ((abs(x[0]-x[2])<=1e-11)&&(abs(y[0]-y[2])<=1e-11))
        {
            xo=x[1]+x[3]-x[0];
            yo=y[1]+y[3]-y[0];
        }
        else if ((abs(x[1]-x[2])<=1e-11)&&(abs(y[1]-y[2])<=1e-11))
        {
            xo=x[0]+x[3]-x[1];
            yo=y[0]+y[3]-y[1];
        }
        else if ((abs(x[1]-x[3])<=1e-11)&&(abs(y[1]-y[3])<=1e-11))
        {
            xo=x[0]+x[2]-x[1];
            yo=y[0]+y[2]-y[1];
        }
        else if ((abs(x[0]-x[3])<=1e-11)&&(abs(y[0]-y[3])<=1e-11))
        {
            xo=x[1]+x[2]-x[3];
            yo=y[1]+y[2]-y[3];
        }
        printf("%.3lf %.3lf\n",xo,yo);

    }

    return 0;

}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

double pi;
int main()
{
    double n,r;
    double ang;
    pi=acos(-1);

    while(scanf("%lf%lf",&r,&n)!=EOF)
    {
        ang=2.0*pi/n;
        printf("%.3lf\n",n*0.5*r*r*sin(ang));
    }

    return 0;

}
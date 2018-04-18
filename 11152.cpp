#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    double A,S,r,R,pi=acos(-1);

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        S=((a+b+c)*1.0)/2.0;
        A=sqrt(S*(S-a)*(S-b)*(S-c));
        r=A/S;
        R= (a/2.0)/(sin(acos((b*b*1.0+c*c*1.0-a*a*1.0)/(2*b*c*1.0))));


        r=pi*r*r;
        R=pi*R*R;
        R=R-A;
        A=A-r;

        printf("%.4lf %.4lf %.4lf\n",R,A,r);

    }

    return 0;
}

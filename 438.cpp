#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,d,e,f,p,q,r,ans;

    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        a=2*(x1-x2);
        b=2*(y1-y2);
        c=(x2*x2+y2*y2)-(x1*x1+y1*y1);
        d=2*(x2-x3);
        e=2*(y2-y3);
        f=(x3*x3+y3*y3)-(x2*x2+y2*y2);

        p=(c*e-f*b)/(e*a-b*d);

        if(b) q=(c-a*p)/b;
        else q=(f-d*p)/e;
        r=-(x1*x1+y1*y1+2*x1*p+2*y1*q);

        ans=2*3.141592653589793*sqrt(p*p+q*q-r);

        printf("%.2lf\n",ans);

    }


    return 0;
}

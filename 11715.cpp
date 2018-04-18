#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int test,i=1;
    double u,v,a,t,s;

    for(;;)
    {
        scanf("%d",&test);
        if(test==0) break;

        else if(test==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            printf("Case %d: %.3lf %.3lf\n",i,(u+v)*t/2.0,(-u+v)/t);
        }

        else if(test==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            printf("Case %d: %.3lf %.3lf\n",i,(-u*u+v*v)/(2*a),(-u+v)/a);
        }

        else if(test==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            printf("Case %d: %.3lf %.3lf\n",i,v,(-u+v)/a);
        }

          else if(test==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            printf("Case %d: %.3lf %.3lf\n",i,u,(-u+v)/a);
        }


        i++;
    }

    return 0;
}




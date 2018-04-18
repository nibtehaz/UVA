#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int a1,b1,c1,a2,b2,c2,D;
    double x,y;

    for(;;)
    {
        scanf("%d%d%d",&a1,&b1,&c1);
        scanf("%d%d%d",&a2,&b2,&c2);
        if((a1==0)&&(b1==0)&&(c1==0)&&(a2==0)&&(b2==0)&&(c2==0)) break;

        D=a1*b2-a2*b1;
        if(D==0) printf("No fixed point exists.\n");

        else
        {
            if((-b1*c2+b2*c1)==0) x=0.0;
            else x=((-b1*c2+b2*c1)*1.0)/(D*1.0);
             
            if((a1*c2-a2*c1)==0) y=0.0;
            else y=((a1*c2-a2*c1)*1.0)/(D*1.0);

            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }

    }

    return 0;

}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


double ang_conv(double ang);

int main()
{

      int t;
   int h1,m1,h2,m2;
   double ha1,ma1,ha2,ma2;

   scanf("%d",&t);

   while(t--)
   {
       scanf("%d:%d",&h1,&m1);

       ma1=m1*360.0/60.0;
       ha1=(h1*360.0/12.0)+(m1*30.0/60.0);
       if((ma1-360.0)>=1e-11) ma1-=360.0;
       if((ha1-360.0)>=1e-11) ha1-=360.0;

       ha2=ang_conv(ha1);
       ma2=ang_conv(ma1);

       h2=(int)(ha2/30.0);
       if(h2==0) h2=12;
       m2=(int)(ma2/6.0);
       if(m2==60) m2=00;

       printf("%.2d:%.2d\n",h2,m2);

   }


    return 0;
}


double ang_conv(double ang)
{
    return (360.0-ang);
}


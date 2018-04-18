#include<stdio.h>
#include<math.h>

int main()
{
    double L,H,r3=sqrt(3.0);
    int grid,skew,temp,skew2;

    while(scanf("%lf %lf",&H,&L)!=EOF)
    {

        grid=(int)L*(int)H;

        temp=(int)(((2.0*H-2.0)/r3)+1.0);

        if((L>=(((int)L)*1.0+0.5+1e-12))||(L>=(((int)L)*1.0+0.5-1e-12)))
           {
             skew=temp*(int)L;
           }
           else
        {
        if(temp%2==0) skew=(temp/2)*(int)L+(temp/2)*(int)(L-1);
        else skew=(temp/2)*(int)L+(temp/2)*(int)(L-1)+(int)L;
        }


        temp=(int)(((2.0*L-2.0)/r3)+1.0);
        if((H>=(((int)H)*1.0+0.5+1e-12))||(H>=(((int)H)*1.0+0.5-1e-12)))
           {
            skew2=temp*(int)H;
           }

           else
        {
        if(temp%2==0) skew2=(temp/2)*(int)H+(temp/2)*(int)(H-1);
        else skew2=(temp/2)*(int)H+(temp/2)*(int)(H-1)+(int)H;
}

        if(skew2>skew) skew=skew2;


        if(grid>=skew) printf("%d grid\n",grid);
        else printf("%d skew\n",skew);
    }


    return 0;
}

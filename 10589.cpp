#include<stdio.h>
#include<math.h>

int main()
{
    int N,m,i;
    double x,a,y,area;

    for(;;)
    {
        scanf("%d %lf",&N,&a);

        if(N==0) break;

        else
        {
            m =0;

            for(i=0;i<N;i++)
            {
                scanf("%lf %lf",&x,&y);


            if((sqrt((x)*(x)+(y)*(y))<=a)&&(sqrt((x-a)*(x-a)+(y)*(y))<=a)&&(sqrt((x)*(x)+(y-a)*(y-a))<=a)&&(sqrt((x-a)*(x-a)+(y-a)*(y-a))<=a)) m++;

            }


            area=m*(a*a/N);

            printf("%.5lf\n",area);


        }
    }

    return 0;
}

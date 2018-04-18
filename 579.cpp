#include<stdio.h>
int main()
{
    int h,m;
    double angle,angh,angm;

    for(;;)
    {
        scanf("%d:%d",&h,&m);
        if((h==0)&&(m==0)) break ;
        else
            {
                angm = (m/60.0) *360.0;
                angh=h*30.0+((m/60.0) *30.0);
                angle=angh-angm;
                if(angle<0) angle=-angle;
                if (angle>180.00) angle=360.0-angle;

                printf("%.3lf\n",angle);




            }


    }

    return 0;
}


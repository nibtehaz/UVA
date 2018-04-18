#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int r,ang;
    char pang[4];
    double arc,chord,pi=acos(-1);

    while(scanf("%d %d %s",&r,&ang,pang)!=EOF)
    {
        r+=6440;
        if(!strcmp(pang,"min"))
        {
            if(ang>180) ang=360-ang;
            arc=2*pi*r*ang/21600.0;
            chord=sqrt(2*r*r*(1-cos(ang*pi/(180.0*60.0))));
        }

        else
        {
            if(ang>180) ang=360-ang;
            arc=2*pi*r*ang/360.0;
            chord=sqrt(2*r*r*(1-cos(ang*pi/180)));
        }

        printf("%.6lf %.6lf\n",arc,chord);

    }


    return 0;
}

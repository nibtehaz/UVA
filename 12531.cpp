#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int angle[181]={0,};
    int inp,ang,i,j,k,h,m;

    for(h=0;h<12;h++)
    {
        i=h*30;
        for(m=0;m<60;m++)
        {
            j=m*6;
            k=i+(m/12)*6;

            ang=abs(j-k);
            if(ang>180)
                ang-=180;

            angle[ang]++;
        }
    }

    while(scanf("%d",&inp)!=EOF)
    {
        if(angle[inp]==0)
            printf("N\n");

        else
            printf("Y\n");
    }



    return 0;
}

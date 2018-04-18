
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    double v,v0,len,max;
    int i,lim,test,ans;

    for(;;)
    {
        scanf("%lf %lf",&v,&v0);
        if((v<=1e-12)&&(v0<=1e-12)) break;

        else
        {
            if(v0>=v) {printf("%d\n",0);continue; }
            test=1;
            max=0.0;
            lim=v/v0;
            len=0.3*sqrt(v-v0);
            max=len;
            ans=1;

            for(i=2;i<=lim;i++)
            {
                len=0.3*i*sqrt((v/i)-v0);
                if(fabs(len-max)<=1e-12) test=0;
                if(len>max) {max=len; ans=i;}

            }

            if(test) printf("%d\n",ans);
            else printf("%d\n",0);


        }

    }
    return 0;

}

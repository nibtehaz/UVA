/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int t,n,x[1000],y[1000],maxy,i,j,key[2];
    double len,slope;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d%d",&key[0],&key[1]);

            for(j=i-1;j>=0;j--)
            {
                if(key[0]>x[j])
                    break;
                else
                {
                    x[j+1]=x[j];
                    y[j+1]=y[j];
                }
            }
            x[j+1]=key[0];
            y[j+1]=key[1];

        }

        len=y[n-2]/((double)sin(atan2(y[n-2]-y[n-1],(double)x[n-2]-x[n-1])));
        maxy=y[n-2];

        for(i=n-2;i>0;i--)
        {
            if(y[i-1]>maxy)
            {
                slope=(sin(atan2((double)y[i-1]-y[i],(double)x[i-1]-x[i])));

                len+=((y[i-1]-maxy)*1.0)/slope;
                maxy=y[i-1];

            }
        }

        printf("%.2lf\n",len);
    }

    return 0;
}

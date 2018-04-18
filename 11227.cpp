#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,n,a,b,x[200],y[200],key[2],point,test,i,j,k,max,p,tp=1;

    scanf("%d",&t);
    while(t--)
    {
        point=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d.%d",&a,&b);
            key[0]=a*100+b;
            scanf("%d.%d",&a,&b);
            key[1]=a*100+b;

            test=1;
            for(i=0;i<point;i++)
            {
                if(x[i]==key[0]&&y[i]==key[1])
                {
                    test=0;
                    break;
                }
            }
            if(test==1)
            {
                x[point]=key[0];
                y[point]=key[1];
                point++;
            }
        }

        if(point==1)
            printf("Data set #%d contains a single gnu.\n",tp);
        else
        {
            max=0;

            for(i=0;i<point;i++)
            {
                for(j=i+1;j<point;j++)
                {
                    p=2;

                    for(k=j+1;k<point;k++)
                    {
                        if((y[k]-y[i])*(x[i]-x[j])== (x[k]-x[i])*(y[i]-y[j]))
                                p++;

                    }
                    if(p>max)
                        max=p;
                }
            }


        printf("Data set #%d contains %d gnus, out of which a maximum of %d are aligned.\n",tp,point,max);

        }


     tp++;
    }




  return 0;
}


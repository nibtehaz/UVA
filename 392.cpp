/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int a[10],i,cnt;
//INPUT OUTPUT
    while(scanf("%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])==9)
    {
        for(i=0;i<8;i++)
        {
            if(a[i]!=0)
                break;
        }

        if(i==8)
        {
            printf("%d\n",a[8]);
            continue;
        }

        else
        {
            if(i<7)
            {if(a[i]==1)
                printf("x^%d",8-i);
            else if(a[i]==-1)
                printf("-x^%d",8-i);
            else if(a[i]>1)
                printf("%dx^%d",a[i],8-i);
            else if(a[i]<-1)
                printf("-%dx^%d",-a[i],8-i);
            }

            else
            {if(a[i]==1)
                printf("x");
            else if(a[i]==-1)
                printf("-x");
            else if(a[i]>1)
                printf("%dx",a[i]);
            else if(a[i]<-1)
                printf("-%dx",-a[i]);
            }



            i++;

            for(;i<7;i++)
            {
                if(a[i]==0)
                    continue;
                else
                {
                    if(a[i]==1)
                        printf(" + x^%d",8-i);
                    else if(a[i]==-1)
                        printf(" - x^%d",8-i);
                    else if(a[i]>1)
                        printf(" + %dx^%d",a[i],8-i);
                    else if(a[i]<-1)
                        printf(" - %dx^%d",-a[i],8-i);
                }
            }

            if(i==7){       if(a[i]==1)
                        printf(" + x");
                    else if(a[i]==-1)
                        printf(" - x");
                    else if(a[i]>1)
                        printf(" + %dx",a[i]);
                    else if(a[i]<-1)
                        printf(" - %dx",-a[i]);

                    i++;
            }


                if(i==8)
                {
                    if(a[i]>0)
                        printf(" + %d",a[i]);
                    else if(a[i]<0)
                        printf(" - %d",-a[i]);
                }
                printf("\n");

        }


    }


    return 0;

}




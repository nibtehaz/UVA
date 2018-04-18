#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int r,b=1,begin,end,len,i,s,fun[100005],now,temp,maxb,maxe;
    long long int max;
    scanf("%d",&r);

    for(;b<=r;b++)
    {
        max=-1;
        scanf("%d",&s);
        for(i=1;i<s;i++)
            {
                scanf("%d",&fun[i]);
                if(fun[i]>=0)
                    max=0;
            }
        if(max<0)
        {
            printf("Route %d has no nice parts\n",b);
        }

        else
        {
            begin=1;
            now=0;
            len=0;

            for(i=1;i<s;i++)
            {
                temp=now+fun[i];

                if(temp<0)
                {
                    now=0;
                    begin=i+1;

                }
                else
                {
                    now=temp;
                    if(now>max)
                    {
                        max=now;
                        end=i+1;
                        len=end-begin;
                        maxb=begin;
                        maxe=end;
                    }
                    if(now==max)
                    {
                        end=i+1;
                        if(end-begin>len)
                        {
                            maxb=begin;
                            maxe=end;
                            len=end-begin;
                        }
                    }
                }
            }

            printf("The nicest part of route %d is between stops %d and %d\n",b,maxb,maxe);
        }


    }

    return 0;

}

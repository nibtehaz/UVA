
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int r, road[505],sum,i,t,home,key,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&r);

        for(i=0;i<r;i++)
        {
            scanf("%d",&road[i]);
        }

        /* insertion sort*/

        for(i=0;i<r;i++)
        {
            key=road[i];

            for(j=i-1;j>=0;j--)
            {
                if(key>road[j]) break;
                else road[j+1]=road[j];
            }
            road[j+1]=key;
        }
        if(r%2) home=road[r/2];
        else home=(road[r/2]+road[(r/2)-1])/2;

        sum=0;
            for(i=0;i<r;i++)
            {
                sum+=abs(home-road[i]);
            }

        printf("%d\n",sum);
    }

    return 0;

}

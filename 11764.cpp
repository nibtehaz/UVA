#include<stdio.h>
#include<string.h>

int main()
{
    int t , n, height[100] , high,low,i,j;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        high=0;
        low=0;
        scanf("%d",&n);

        scanf("%d",&height[0]);

        for(j=1;j<n;j++)
        {
            scanf("%d",&height[j]);

            if(height[j]>height[j-1]) high++;
            else if(height[j]<height[j-1]) low++;

        }

        printf("Case %d: %d %d\n",i,high,low);



    }


    return 0;
}


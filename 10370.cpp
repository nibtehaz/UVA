#include<stdio.h>
#include<string.h>
int main()
{
    int N,t,i,marks[1005],yes;
    double avg,ans;

    scanf("%d",&t);
    for(;t;t--)
    {
        scanf("%d",&N);

        yes=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&marks[i]);
            yes+=marks[i];
        }
        avg=(yes*1.0)/N;
        yes=0;

        for(i=0;i<N;i++)
            if(marks[i]>avg) yes++;
        ans=(yes*100.0)/N;
        printf("%.3lf%%\n",ans);
        }



    return 0;
}



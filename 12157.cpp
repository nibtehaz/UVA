#include<stdio.h>

int main()
{
    int time,costm,costj,t,n,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        costm=0;
        costj=0;
        scanf("%d",&n);

        for(;n;n--)
        {
            scanf("%d",&time);

            costm+=((time/30)+1)*10;
            costj+=((time/60)+1)*15;

        }

        if(costm<costj) printf("Case %d: Mile %d\n",i,costm);
        else if(costm>costj) printf("Case %d: Juice %d\n",i,costj);
        else printf("Case %d: Mile Juice %d\n",i,costm);
    }


    return 0;
}


#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t,lo[10005],hi[10005],cnt,d,q,p,i,j,ans;
    char maker[10005][25];

    scanf("%d",&t);

    for(j=0;j<t;j++)
    {
        if(j>0) printf("\n");

        scanf("%d",&d);

        for(i=0;i<d;i++)
        {
            scanf("%s%d%d",maker[i],&lo[i],&hi[i]);
        }

        scanf("%d",&q);

        while(q--)
        {
            cnt=0;
            scanf("%d",&p);

            for(i=0;i<d;i++)
            {
                if((p>=lo[i])&&(hi[i]>=p)) { cnt++; ans=i;}
            }

            if(cnt==1) printf("%s\n",maker[ans]);
            else printf("UNDETERMINED\n");

        }

    }

    return 0;

}

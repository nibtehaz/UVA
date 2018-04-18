#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int bin1 (int n);

int main()
{
    int n,q,i,j,key,marbel[100005],qi,tp=1;

    while(1)
    {
        scanf("%d%d",&n,&q);
        if((n==0)&&(q==0)) break;

        for(i=0;i<n;i++)
        {
            scanf("%d",&marbel[i]);

            key=marbel[i];
            for(j=i-1;j>=0;j--)
            {
                if(marbel[j]<=key) break;
                else marbel[j+1]=marbel[j];
            }
            marbel[j+1]=key;
        }
        printf("CASE# %d:\n",tp);

        for(i=0;i<q;i++)
        {
            scanf("%d",&qi);

            for(j=0;j<n;j++)
            {
                if(marbel[j]==qi) { printf("%d found at %d\n",qi,j+1); break;}
            }
            if(j==n) printf("%d not found\n",qi);
        }
        tp++;
    }


    return 0;

}



/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int R,C,M,N,T,tp=1,i,j,max,ans;
    char grid;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d%d",&R,&C,&M,&N);
        getchar();

        int alpha[26]={0,};
        max=0;

        for(i=0;i<R;i++)
        {
            while(1)
            {
                grid=getchar();

                if(grid=='\n')
                    break;

                ans=grid-'A';
                alpha[ans]++;

                if(alpha[ans]>max)
                    max=alpha[ans];


            }
        }

        ans=0;

        for(i=0;i<26;i++)
        {
            if(alpha[i]==max)
                ans+=alpha[i]*M;
            else
                ans+=alpha[i]*N;
        }

        printf("Case %d: %d\n",tp,ans);
        tp++;

    }

    return 0;
}

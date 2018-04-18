#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int head[30000],sold[30000],n,m,i,j,key,katsi,cost;

    while(1)
    {
        scanf("%d%d",&m,&n);

        if(n==0&&m==0)
            break;

        for(i=0;i<m;i++)
        {
            scanf("%d",&key);

            for(j=i-1;j>=0;j--)
            {
                if(key>=head[j])
                    break;
                else
                    head[j+1]=head[j];
            }

            head[j+1]=key;
        }


        for(i=0;i<n;i++)
        {
            scanf("%d",&key);

            for(j=i-1;j>=0;j--)
            {
                if(key>=sold[j])
                    break;
                else
                    sold[j+1]=sold[j];
            }

            sold[j+1]=key;
        }



        katsi=0;
        cost=0;
        j=0;

        for(i=0;i<m;i++)
        {
            if(j==n||katsi==m) break;

            if(head[i]>sold[j])
            {
                j++;
                i--;
                continue;
            }
            else
            {
                katsi++;
                cost+=sold[j];
                j++;
            }
        }

        if(katsi==m)
            printf("%d\n",cost);

        else printf("Loowater is doomed!\n");

    }

    return 0;
}


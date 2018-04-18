#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int mat[200][200],n,i,j,x,y,test,sum;

    while(1)
    {
        iter:
        scanf("%d",&n);
        if(n==0) break;

        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            scanf("%d",&mat[i][j]);

        /*row sum*/
        x=0;
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
                sum+=mat[i][j];

            if(sum%2!=0&&x!=0)
            {
                printf("Corrupt\n");
                goto iter;
            }
            else if(sum%2!=0)
                x=i;
        }

        /*col sum*/
        y=0;
        for(j=1;j<=n;j++)
        {
            sum=0;
            for(i=1;i<=n;i++)
                sum+=mat[i][j];

            if(sum%2!=0&&y!=0)
            {
                printf("Corrupt\n");
                goto iter;
            }
            else if(sum%2!=0)
                y=j;
        }

        if(x==0&&y==0) printf("OK\n");
        else if(x!=0&&y!=0) printf("Change bit (%d,%d)\n",x,y);
        else printf("Corrupt\n");
    }



    return 0;
}


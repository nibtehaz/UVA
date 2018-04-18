#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int M,N,i,j,mat[200][200],left,right,zero_test,wide,up,len,down;
    long long int sum,max,row[200];

    while(1)
    {
        scanf("%d%d",&M,&N);
        if(M==0&&N==0) break;
        zero_test=0;
        for(i=0;i<M;i++)
            for(j=0;j<N;j++)
            {
                scanf("%d",&mat[i][j]);
                if(mat[i][j]==0) zero_test=1;

            }

        max=zero_test;
        if(zero_test==0) goto endd;

        for(left=0;left<N;left++)
        {

            for(i=0;i<M;i++)
                row[i]=0;

            for(right=left;right<N;right++)
            {
                for(j=0;j<M;j++)
                {
                        row[j]+=mat[j][right];
                }

                wide=right-left+1;


                len=0;
                for(j=0;j<M;j++)
                {
                    if(row[j]==0) len++;
                    else len=0;
                    if(len*wide>max) max=len*wide;
                }






            }
        }

        endd:
            if(zero_test==0)
                printf("0\n");


            else
                printf("%lld\n",max);
    }

    return 0;
}


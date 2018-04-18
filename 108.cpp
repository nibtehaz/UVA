#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int N,i,j,mat[200][200],left,right,nega_test;
    long long int sum,max,row[200];

    while(scanf("%d",&N)!=EOF)
    {
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                scanf("%d",&mat[i][j]);

        max=mat[0][0];
        for(left=0;left<N;left++)
        {
            for(i=0;i<N;i++)
                row[i]=0;

            for(right=left;right<N;right++)
            {
                for(j=0;j<N;j++)
                {
                        row[j]+=mat[j][right];
                }

                nega_test=1;

                for(j=0;j<N;j++)
                {
                    if(row[j]>=0)
                    {
                        nega_test=0;
                        break;
                    }
                }

                if(nega_test==1)
                {
                    for(j=0;j<N;j++)
                    {
                        if(row[j]>max)
                            max=row[j];
                    }


                }

                else
                {
                    sum=row[0];
                    if(sum<0) sum=0;
                    if(max<sum) max=sum;

                    for(j=1;j<N;j++)
                    {
                        sum+=row[j];
                        if(sum<0) sum=0;
                        if(max<sum) max=sum;


                    }
                }



            }
        }

        printf("%lld\n",max);
    }

    return 0;
}


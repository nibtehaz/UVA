/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int N,i,j,tp,left,right,nega_test,t,mat[200][200],wide,len;
    long long int sum,max,row[200];
    char cmat[200][205];

    scanf("%d",&t);
    gets(cmat[0]);
    for(tp=0;tp<t;tp++)
    {
        if(tp>0) printf("\n");
        gets(cmat[0]);

        gets(cmat[0]);
        N=strlen(cmat[0]);
        for(i=1;i<N;i++)
            gets(cmat[i]);

        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
        {
            if(cmat[i][j]=='0')
                mat[i][j]=1;
            else
                mat[i][j]=0;
        }

    max=0;

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

                wide=right-left+1;


                len=0;
                for(j=0;j<N;j++)
                {
                    if(row[j]==0) len++;
                    else len=0;
                    if(len*wide>max) max=len*wide;
                }


            }
        }


        printf("%lld\n",max);
    }

    return 0;
}


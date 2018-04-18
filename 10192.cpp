/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a , int b);


int main()
{
    int tp=1,n,m,i,j;
    char str1[200],str2[200];

    while(1)
    {
        gets(str1);
        if(str1[0]=='#')
            break;

        gets(str2);

        n=strlen(str1);
        m=strlen(str2);

        int dp[200][200]={0,};


        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        printf("Case #%d: you can visit at most %d cities.\n",tp,dp[n][m]);
        
        tp++;

    }


    return 0;
}


int max(int a , int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

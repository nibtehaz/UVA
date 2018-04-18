/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int dp[2][1005],i,j,n1,n2,ans;
    char s1[1005],s2[10005];

    while(gets(s1))
    {
        ans=0;
        n1=strlen(s1);
        gets(s2);
        n2=strlen(s2);

        for(i=0;i<=n1;i++)
        {
            dp[0][i]=0;
            dp[1][i]=0;
        }

        for(j=1;j<=n2;j++)
        {
            if(j%2==0)
            {
                for(i=1;i<=n1;i++)
                {
                    if(s1[i-1]==s2[j-1])
                    {
                        dp[0][i]=1+dp[1][i-1];
                    }
                    else
                    {
                        dp[0][i]= ( dp[1][i]  >=   dp[0][i-1]  ) ?  dp[1][i]   :   dp[0][i-1]  ;
                    }

                }

            }

            else
            {
                for(i=1;i<=n1;i++)
                {
                    if(s1[i-1]==s2[j-1])
                    {
                        dp[1][i]=1+dp[0][i-1];
                    }
                    else
                    {
                        dp[1][i]= ( dp[0][i]  >=   dp[1][i-1]  ) ?  dp[0][i]   :   dp[1][i-1]  ;
                    }


                }
            }

            if(j==n2)
                ans=dp[j%2][n1];
        }

        printf("%d\n",ans);

    }


    return 0;
}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long int mat[200][200];
    int n,t,tp,i,j,test,m;
    char _[4],__[4];
    scanf("%d",&t);

    for(tp=1;tp<=t;tp++)
    {
        test=1;
        scanf("%s%s",_,__);
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%lld",&mat[i][j]);
                if(mat[i][j]<0) test=0;
            }
        }


        if(test==1)
        {
            m=n/2;

            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(mat[i][j]!=mat[n-i-1][n-j-1]) { test=0; break; }
                }
            }


            if((n%2==1)&&test==1)
            {
                i=m;
                for(j=0;j<m;j++)
                {
                    if(mat[i][j]!=mat[i][n-j-1]) { test=0; break; }
                }
            }

        }


       if(test==1) printf("Test #%d: Symmetric.\n",tp);
       else printf("Test #%d: Non-symmetric.\n",tp);

    }


    return 0;

}


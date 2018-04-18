/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int pascal[60][60]={0,};
    int T,tp=1,a,b,i,j,n;
    char x[1005],y[1005],inp[2010];


    pascal[0][0]=1;

    for(i=1;i<52;i++)
    {
        pascal[i][0]=1;
        pascal[i][i]=1;

        for(j=1;j<i;j++)
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
    }

    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",inp);

        j=0;
        for(i=1;inp[i];i++)
        {
            if(inp[i]=='+')
                break;
            x[j++]=inp[i];
        }
        x[j]='\0';
        i++;
        j=0;

        for(;inp[i];i++)
        {
            if(inp[i]==')')
                break;
            y[j++]=inp[i];
        }

        y[j]='\0';
        i+=2;
        n=0;

        for(;inp[i];i++)
        {
            n=n*10+(inp[i]-48);
        }

        printf("Case %d: ",tp);

        for(i=0;i<=n;i++)
        {
            if(pascal[n][i]!=1)
                printf("%lld*",pascal[n][i]);

            a=n-i;
            if(a>0)
                printf("%s",x);
            if(a>1)
                printf("^%d",a);

            if(a>0&&i>0)
                printf("*");

            b=i;
            if(b>0)
                printf("%s",y);
            if(b>1)
                printf("^%d",b);

            if(i<n)
                printf("+");

        }
        printf("\n");

        tp++;
    }




    return 0;
}

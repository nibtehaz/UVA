/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int coef[100],root[100];
    int n,i,j;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&root[i]);
            root[i]=-root[i];
            coef[i]=0;
        }

        coef[n]=root[0];
        coef[n-1]=1;


        for(i=1;i<n;i++)
        {
            coef[n-1-i]=1;
            for(j=i-1;j>=0;j--)
            {
                coef[n-1-j]=coef[n-1-j]*root[i]+coef[n-j];
            }
            coef[n]*=root[i];



        }




        if(n!=1)
        printf("x^%d",n);
        if(n==1)
        printf("x");

        for(i=1;i<n-1;i++)
        {
            if(coef[i]==0)
                continue;
            else if(coef[i]==1)
                printf(" + x^%d",n-i);
            else if(coef[i]==-1)
                printf(" - x^%d",n-i);
            else if(coef[i]>0)
                printf(" + %lldx^%d",coef[i],n-i);
            else if(coef[i]<0)
                printf(" - %lldx^%d",-coef[i],n-i);

        }
        if(n>1)
            {
                if(coef[n-1]==1)
                    printf(" + x");
                else if(coef[n-1]==-1)
                    printf(" - x");
                else if(coef[n-1]>0)
                    printf(" + %lldx",coef[n-1]);
                else if(coef[n-1]<0)
                    printf(" - %lldx",-coef[n-1]);

            }
            if(coef[n]>=0)
                printf(" + %lld",coef[n]);
            else if(coef[n]<0)
                printf(" - %lld",-coef[n]);

            printf(" = 0\n");





    }



    return 0;
}


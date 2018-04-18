/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    long long int coef[100000],x[100000],y;
    int state,n,m,i,j,len,nega;;
    char inp[100005];
    while(gets(inp))
    {
        len=strlen(inp);
        n=0;
        state=0;
        nega=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]<=57&&inp[i]>=48)
            {
                if(state==0)
                {
                    coef[n]=(inp[i]-48);
                    state=1;
                }
                else
                {
                    coef[n]=coef[n]*10+(inp[i]-48);
                }
            }

            else if(inp[i]=='-')
            {
                nega=1;
            }

            else
            {
                if(state==1)
                {
                    if(nega==1)
                        coef[n]=-coef[n];

                    n++;
                    nega=0;
                    state=0;
                }
            }
        }

        if(state==1)
                {

                    if(nega==1)
                        coef[n]=-coef[n];
                    n++;
                    nega=0;
                    state=0;
                }

        gets(inp);

        len=strlen(inp);
        m=0;
        state=0;
        nega=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]<=57&&inp[i]>=48)
            {
                if(state==0)
                {
                    x[m]=(inp[i]-48);
                    state=1;
                }
                else
                {
                    x[m]=x[m]*10+(inp[i]-48);
                }
            }

            else if(inp[i]=='-')
            {
                nega=1;
            }

            else
            {
                if(state==1)
                {
                    if(nega==1)
                        x[m]=-x[m];
                    m++;
                    nega=0;
                    state=0;
                }
            }
        }

        if(state==1)
                {
                    if(nega==1)
                        x[m]=-x[m];
                    m++;
                    nega=0;
                    state=0;
                }


       //output

       state=0;

       for(i=0;i<m;i++)
       {
           len=x[i];
           y=coef[n-1];

           for(j=n-2;j>=0;j--)
           {
               y+=coef[j]*len;
               len*=x[i];
           }

           if(state==0)
           {
               printf("%lld",y);
               state=1;
           }
           else
           {
               printf(" %lld",y);
           }
       }
       printf("\n");


    }


    return 0;

}




/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    int n,p,max,i,tp=1,pom;
    double min,price;
    char demands[1200][200],name[200],inp[200],temp[200];

    while(scanf("%d%d",&n,&p)!=EOF)
    {
        if(n==0&&p==0)
             break;

        if(tp>1)
            printf("\n");

        max=-1;
        gets(inp);
        for(i=0;i<n;i++)
            gets(inp);

        for(i=0;i<p;i++)
        {
            gets(temp);
            scanf("%lf%d",&price,&pom);
            gets(inp);
            if(pom>max)
            {
                strcpy(name,temp);
                min=price;
                max=pom;
            }
            else if(pom==max)
            {
                if(min>price)
                {
                    strcpy(name,temp);
                    min=price;
                }
            }
            while(pom--)
                gets(inp);
        }

        printf("RFP #%d\n",tp);
        printf("%s\n",name);
        tp++;
    }

    return 0;
}


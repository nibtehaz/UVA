/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005




int main()
{
    long long int fibo[205]={0,},i,j,array[205];
    int n,len,T;
    char inp[205],op[205],format[205];

    fibo[1]=1;
    fibo[2]=2;

    for(i=3;i<50;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&array[i]);
        }
        gets(inp);
        gets(inp);
        len=strlen(inp);

        j=0;
        for(i=0;i<len;i++)
        {
            if(inp[i]<='Z'&&inp[i]>='A')
                format[j++]=inp[i];

        }
        len=j;

        for(i=0;i<60;i++)
            op[i]=' ';

        for(i=0;i<n&&i<len;i++)
        {
            for(j=1;j<50;j++)
            {
                if(array[i]==fibo[j])
                {
                    op[j]=format[i];
                }
            }
        }

        for(j=59;j>=0;j--)
        {
            if(op[j]!=' ')
            {
                len=j;
                break;
            }

        }

        for(i=1;i<=len;i++)
            printf("%c",op[i]);
        printf("\n");
    }

    return 0;
}


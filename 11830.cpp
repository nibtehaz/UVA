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
    int N,digit,i,j,len;
    char inp[10005],op[10005];

    while(1)
    {
        scanf("%d%s",&N,inp);

        if((N==0)&&(strcmp(inp,"0")==0))
            break;

        len=strlen(inp);
        digit=0;
        j=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]-48!=N)
            {
                if(inp[i]-48!=0)
                    digit=1;
                if(digit==1)
                    op[j++]=inp[i];
            }
        }
        op[j++]='\0';

        if (digit==0)
            printf("%d\n",0);
        else
            printf("%s\n",op);

    }




    return 0;
}


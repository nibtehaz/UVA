/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char inp[100005],ch;
    int i,n,test;

    while(gets(inp))
    {
        if(!strcmp(inp,"*"))
            break;

        n=strlen(inp);
        test=1;

        for(i=0;i<n;i++)
        {
            if(inp[i]!=' ')
            {
                if(inp[i]<='Z')
                ch=inp[i];
                else
                ch=inp[i]-32;
                break;
            }
        }

        for(;i<n;i++)
        {
            if(inp[i]==' '&&i<(n-1))
            {
                if(inp[i+1]>'Z')
                    inp[i+1]-=32;

                if(inp[i+1]!=ch)
                {
                    test=0;
                    break;
                }
            }
        }

        if(test==0)
            printf("N\n");
        else
            printf("Y\n");


    }

    return 0;

}



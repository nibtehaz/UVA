#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int bank[2000][26]={0,},data=0,i,j,n,cnt,alpha[26],test;
    char inp[2000];

    /* input*/
    while(1)
    {
        gets(inp);

        if(!strcmp(inp,"#"))
            break;

        n=strlen(inp);
        for(i=0;i<n;i++)
        {
            bank[data][inp[i]-97]++;
        }
        data++;
    }

    /*output*/

    while(1)
    {
        gets(inp);

        if(!strcmp(inp,"#"))
            break;

        n=strlen(inp);

        for(i=0;i<26;i++)
            alpha[i]=0;

        for(i=0;i<n;i++)
            {
                if((inp[i<=122])&&(inp[i]>=97))
                {
                    alpha[inp[i]-97]++;
                }

            }
        cnt=0;

        for(i=0;i<data;i++)
        {
            test=1;

            for(j=0;j<26;j++)
            {
                if(bank[i][j]>alpha[j])
                {
                    test=0;
                    break;
                }
            }
            if(test==1)
                cnt++;

        }

        printf("%d\n",cnt);

    }

    return 0;

}

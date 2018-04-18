#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char inp[100000],word[100000];
    int i,j,n,m;

    while(gets(inp))
    {
        n=strlen(inp);

        i=0;

        LOOP:

        for(j=0;i<n;i++,j++)
        {
            if(inp[i]!=' ') word[j]=inp[i];
            else break;
        }

        while(j--)
            printf("%c",word[j]);

        if(i<n&&(inp[i]=' ')) printf(" ");
        i++;
        if(i<n) goto LOOP;
        printf("\n");


    }


    return 0;
}
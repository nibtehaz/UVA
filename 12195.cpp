#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int beat,i,n,cnt;
    char inp[20000];

    while(1)
    {
        gets(inp);

        if(!strcmp(inp,"*"))
            break;

        n=strlen(inp);
        beat=0;
        cnt=0;

        for(i=1;i<n;i++)
        {
            if(inp[i]=='W')
                beat+=64;
            else if(inp[i]=='H')
                beat+=32;
            else if(inp[i]=='Q')
                beat+=16;
            else if(inp[i]=='E')
                beat+=8;
            else if(inp[i]=='S')
                beat+=4;
            else if(inp[i]=='T')
                beat+=2;
            else if(inp[i]=='X')
                beat+=1;
            else if(inp[i]=='/')
            {
                if(beat==64)
                    cnt++;

                beat=0;
            }
       }
       printf("%d\n",cnt);
    }

    return 0;

}

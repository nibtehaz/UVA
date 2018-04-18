#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,freq,i,j,n,tp=1;
    char inp[2000];

    scanf("%d",&t);
    getchar();
    for(;tp<=t;tp++)
    {
        gets(inp);
        n=strlen(inp);
        printf("Case %d: ",tp);

        for(i=0;i<n;)
        {
            if((inp[i+1]<=57)&&(inp[i+1]>=48))
            {
                freq=inp[i+1]-48;

                for(j=2;j+i<n;j++)
                {
                    if((inp[i+j]<=57)&&(inp[i+j]>=48))
                        freq=(inp[i+j]-48)+freq*10;
                    else
                        break;
                }
                while(freq--)
                    printf("%c",inp[i]);

                i+=j;
            }

        }
        printf("\n");

    }

    return 0;
}

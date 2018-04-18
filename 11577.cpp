#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int alpha[26],t,i,max,n,temp;
    char inp[10000];

    scanf("%d",&t);
    gets(inp);


    while(t--)
    {
        gets(inp);
        max=0;

        n=strlen(inp);

        for(i=0;i<26;i++)
            {
                alpha[i]=0;
            }

        for(i=0;i<n;i++)
        {
            if((inp[i]<=122)&&(inp[i]>=97))
            {
                temp=inp[i]-97;
                alpha[temp]++;

                if(alpha[temp]>max)
                    max=alpha[temp];
            }

            else if((inp[i]<=90)&&(inp[i]>=65))
            {
                temp=inp[i]-65;
                alpha[temp]++;

                if(alpha[temp]>max)
                    max=alpha[temp];
            }
        }

        for(i=0;i<26;i++)
        {
            if(alpha[i]==max)
                printf("%c",i+97);
        }
        printf("\n");




    }
    return 0;

}

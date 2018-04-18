#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char inp[10000],word[10000];
    int notun,i,j,k,n,t,tp=1,flag;

    scanf("%d",&t);
    gets(inp);
    gets(inp);
    for(;tp<=t;)
    {
        if(tp>1)
            printf("\n");

        printf("Case #%d:\n",tp);

        while(gets(inp)){

        n=strlen(inp);
        k=0;
        j=0;
        if(n==0)
            {
                break;
            }
            
        flag=1;



        for(i=0;i<n;i++)
        {
            if(((inp[i]<='z')&&(inp[i]>='a'))||((inp[i]<='Z')&&(inp[i]>='A')))
            {
                word[j]=inp[i];
                j++;
            }
            else
            {
                if(k<j)
                    {
                        printf("%c",word[k]);
                        k++;
                    }
                j=0;

            }

        }
        if(k<j)
                    {
                        printf("%c",word[k]);

                    }
                j=0;

        printf("\n");
        flag=0;
        }
        if(flag==0) tp++;
    }


    return 0;
}

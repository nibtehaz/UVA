#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int i,j,n,t,tp=1;
    char judge[1000],ouput[1000],space[1000];

    scanf("%d",&t);
    gets(ouput);

    for(;tp<=t;tp++)
    {
        gets(ouput);
        gets(judge);

        if(!strcmp(ouput,judge))
            printf("Case %d: Yes\n",tp);

        else
        {
            n=strlen(ouput);

            for(i=0,j=0;i<n;i++)
            {
                if(ouput[i]!=' ')
                    space[j++]=ouput[i];

            }
            space[j]='\0';

            if(!strcmp(space,judge))
                printf("Case %d: Output Format Error\n",tp);
            else
                printf("Case %d: Wrong Answer\n",tp);

        }

    }

    return 0;

}


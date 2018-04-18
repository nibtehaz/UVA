#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int t,tp=1,i,win,max,tie,n,m,vote[30];
    char name[30][180],team[30][180],inp1[200];

    scanf("%d",&t);

    for(;tp<=t;)
    {
        scanf("%d",&n);
        gets(inp1);

        if(tp>1)
            printf("\n");

        for(i=0;i<n;i++)
        {
            gets(name[i]);

            gets(team[i]);

            vote[i]=0;
        }

        max=0;
        tie=1;

        scanf("%d",&m);
        gets(inp1);

        while(m--)
        {
            gets(inp1);

            for(i=0;i<n;i++)
            {
                if(!strcmp(inp1,name[i]))
                {
                    vote[i]++;
                if(vote[i]>max)
                {
                    max=vote[i];
                    tie=0;
                    win=i;
                }
                else if(vote[i]==max)
                {
                    tie=1;
                }
                break;
                }
            }
        }

        if(tie==1)
            printf("tie\n");
        else
            printf("%s\n",team[win]);
        tp++;
    }


    return 0;

}

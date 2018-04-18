#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int ques[12],test[12],result[12];
    int pres,i,t=1;

    while(1)
    {
        scanf("%d",&pres);
        if(pres<0) break;

        for(i=0;i<12;i++)
            scanf("%d",&ques[i]);

        for(i=0;i<12;i++)
            scanf("%d",&test[i]);

        for(i=0;i<12;i++)
        {
            if(pres>=test[i])  { result[i]=1; pres-=test[i];}
            else result[i]=0;

            pres+=ques[i];

        }

        printf("Case %d:\n",t);

        for(i=0;i<12;i++)
        {
            if(result[i]==1) printf("No problem! :D\n");
            else printf("No problem. :(\n");
        }
        t++;



    }

    return 0;
}



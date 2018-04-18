#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int card,i,j,n;
    char deck[55][20];
    char value[20],name[20];

    while(1)
    {
        scanf("%d",&card);

        if(card==0) break;

        for(i=0;i<card;i++)
            strcpy(deck[i],"khali");

        j=0;
        for(i=0;i<card;i++)
        {
            scanf("%s",value);

            scanf("%s",name);

            n=strlen(name);


            for(;;)
            {
                if(n==0) break;
                if(j==card) j=0;

                if(!strcmp(deck[j],"khali")) { if(n==1)strcpy(deck[j],value);         n--; j++;  continue;}
                else {  j++; continue;   }

            }
        }

        printf("%s",deck[0]);
        for(i=1;i<card;i++) printf(" %s",deck[i]);
        printf("\n");
    }


    return 0;

}


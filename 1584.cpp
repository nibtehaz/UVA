#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char temp[100005],min[100005];

int main()
{
    int t,i,j,n;
    char inp[100005];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",inp);

        n=strlen(inp);

        strcpy(min,inp);


        for(j=1;j<n;j++)
        {
            strcpy(temp,"");

            for(i=0;i<n;i++)
            {
                {
                    temp[i]=inp[(i+j)%n];
                }

            }
            if(strcmp(temp,min)<0) strcpy(min,temp);
         }
for(i=0;i<n;i++)
        printf("%c",min[i]);
printf("\n");

    }

    return 0;
}



#include<stdio.h>

int main()
{
    char url[10][110];
    int rel[10],max,t,i,j;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        max=0;

        for(j=0;j<10;j++)
        {
            scanf("%s %d",url[j],&rel[j]);
            if(rel[j]>max)  max=rel[j];
        }

        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
        {
            if(rel[j]==max) printf("%s\n",url[j]);
        }

    }

    return 0;
}

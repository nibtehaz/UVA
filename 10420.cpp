#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,test,key,i,j,cnt;
    char data[100],name[200],country[2100][100];

    while(scanf("%d",&n)!=EOF)
    {

        int lo[2100]={0,};

        scanf("%s",country[0]);
        scanf ("%[^\n]%*c", name);
        cnt=1;
        lo[0]=1;
        for(i=1;i<n;i++)
        {
            test=0;
            scanf("%s",data);
        scanf ("%[^\n]%*c", name);

        for(j=0;lo[j]!=0;j++)
        {
            if(!strcmp(data,country[j])) {lo[j]++; test=1; break;}

        }

        if(test==0) {strcpy(country[cnt],data); lo[cnt]++; cnt++;}


        }


        for(i=0;i<cnt;i++)
        {
            key=lo[i];
            strcpy(data,country[i]);

            for(j=i-1;j>=0;j--)
            {
                if(strcmp(country[j],data)<0) break;
                else {strcpy(country[j+1],country[j]); lo[j+1]=lo[j];}
            }
            strcpy(country[j+1],data);
            lo[j+1]=key;

        }



        for(i=0;lo[i]!=0;i++)
            printf("%s %d\n",country[i],lo[i]);
    }


    return 0;
}

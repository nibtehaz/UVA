#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char inp[50000];
    int i,n,data[7];
    int t;

    scanf("%d",&t);
    gets(inp);

    while(t--)
    {
        gets(inp);
        n=strlen(inp);
        int j;

        for(j=0;j<7;j++)
            data[j]=0;

        for(i=0;i<n;i++)
        {
            if(inp[i]=='B')
                {data[0]++; inp[i]='0';}
            else if(inp[i]=='U')
                {data[1]++; inp[i]='1';}
            else if(inp[i]=='S')
                {data[2]++; inp[i]='2';}
            else if(inp[i]=='P')
                {data[3]++; inp[i]='3';}
            else if(inp[i]=='F')
                {data[4]++; inp[i]='4';}
            else if(inp[i]=='T')
                {data[5]++; inp[i]='5';}
            else if(inp[i]=='M')
                {data[6]++; inp[i]='6';}


        }

        for(i=0;i<(n-1);i++)
        {
            if(inp[i]!=inp[i+1])
                break;
        }

        j=1;

        if(inp[i]>inp[i+1])
            for(;i<(n-1);i++)
            {
                if(inp[i]<inp[i+1])
                {
                    j=0;
                    break;
                }
            }

        else
        {
            for(;i<(n-1);i++)
            {
                if(inp[i]>inp[i+1])
                {
                    j=0;
                    break;
                }
            }
        }

        for(i=0;i<7;i++)
            if(data[i]>9)
            {
                j=0;
                break;
            }

        if(j==0)
            printf("error\n");

        else
        {
            unsigned long long int ans=0;

            ans=data[0]+data[1]*10+data[2]*100+data[3]*1000+data[4]*10000+data[5]*100000+data[6]*1000000;
            printf("%llu\n",ans);
        }

    }


    return 0;
}

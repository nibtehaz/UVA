#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char grid[100][100];
char inp[100];
int n,m;


int check(int x,int y,int len);

int main()
{
    int t,tp=1,k,i,j,test,x,y,L;

    scanf("%d",&t);

    for(;tp<=t;tp++)
    {
        if(tp>1) printf("\n");

        scanf("%d%d",&n,&m);

        for(i=0;i<n;i++)
           {
            scanf ("%s",grid[i]);
           }

        scanf("%d",&k);

        while(k--)
        {
            scanf("%s",inp);
            test=0;
            L=strlen(inp);
            for(i=0;i<L;i++)
            {
                if((97<=inp[i])&&(inp[i]<=122)) inp[i]=inp[i]-32;
            }


            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((grid[i][j]==inp[0])||(grid[i][j]==(inp[0]+32)))
                    {
                        if(check(i,j,L)==1) { printf("%d %d\n",i+1,j+1); goto ennd;  }
                    }
                }
            }
            ennd: continue;

        }
    }


    return 0;
}


int check(int x,int y,int len)
{
    int i,cnt;

    cnt=1;
    for(i=1;((i+x)<n);i++)
    {
        if((grid[i+x][y]==inp[i])||(grid[i+x][y]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;((x-i)>=0);i++)
    {
        if((grid[x-i][y]==inp[i])||(grid[x-i][y]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;(((y-i)>=0));i++)
    {
        if((grid[x][y-i]==inp[i])||(grid[x][y-i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;((y+i)<m);i++)
    {
        if((grid[x][y+i]==inp[i])||(grid[x][y+i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;(((x+i)<n)&&((y+i)<m));i++)
    {
        if((grid[x+i][y+i]==inp[i])||(grid[x+i][y+i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;(((x-i)>=0)&&((y+i)<m));i++)
    {
        if((grid[x-i][y+i]==inp[i])||(grid[x-i][y+i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;(((x-i)>=0)&&((y-i)>=0));i++)
    {
        if((grid[x-i][y-i]==inp[i])||(grid[x-i][y-i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    cnt=1;
    for(i=1;(((x+i)<n)&&((y-i)>=0));i++)
    {
        if((grid[x+i][y-i]==inp[i])||(grid[x+i][y-i]==(inp[i]+32)))
        {
            cnt++;
            if(cnt==len) return 1;
        }

        else break;

    }

    return 0;

}

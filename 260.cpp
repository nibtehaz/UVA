 /* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <stack>
#include <set>
#include <deque>

using namespace std;

#define PI acos(-1.0)
#define MAX 1000015
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

int dr[10]={-1,-1,0,0,1,1};
int dc[10]={-1,0,-1,1,0,1};

bool color[400][400];
int grid[400][400];

int firstRow;
int lastRow;
int firstCol;
int lastCol;

int N;

void dfs(int node , int team);
bool inside (int r , int c);

bool inside (int r , int c)
{
    return ( 1<=r && r<=N && 1<=c && c<=N );
}

void dfs(int r , int c , int team)
{
    int i;

    color[r][c]=1;

    if(team==0)  //white
    {
        if(c==1)
            firstCol=1;
        if(c==N)
            lastCol=1;
    }

    else
    {
        if(r==1)
            firstRow=1;
        if(r==N)
            lastRow=1;
    }

    for(i=0;i<6;i++)
    {
        if(inside(r+dr[i],c+dc[i]) && color[r+dr[i]][c+dc[i]]==0 && grid[r+dr[i]][c+dc[i]]==team)
        {
            dfs(r+dr[i],c+dc[i],team);
        }
    }


}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int tp=1;
    int i,j;
    char inp[400][400];
    int winner;

    //INPUT
    //OUTPUT

    while(1)
    {
        getInt(N)

        if(N==0)
            break;

        for(i=0;i<N;i++)
        {
            scanf("%s",inp[i]);
        }

        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(inp[i][j]=='w')
                {
                    grid[i+1][j+1]=0;
                }

                else
                {
                    grid[i+1][j+1]=1;
                }

                color[i+1][j+1]=0;
            }
        }

        winner=-1;

        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                if(color[i][j]==0)
                {
                    firstRow=-1;
                    firstCol=-1;
                    lastRow=-1;
                    lastCol=-1;

                    dfs(i,j,grid[i][j]);

                    if(grid[i][j]==0)
                    {
                        if(firstCol==1 && lastCol==1)
                        {
                            winner=0;
                        }
                    }

                    else
                    {
                        if(firstRow==1 && lastRow==1)
                        {
                            winner=1;
                        }
                    }
                }

                if(winner!=-1)
                    break;
            }
        }

        if(winner==0)
        {
            printf("%d W\n",tp);
        }

        else
        {
            printf("%d B\n",tp);
        }

        tp++;

    }

    return 0;
}


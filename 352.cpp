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

int dr[20]={-1,-1,-1,0,0,1,1,1};
int dc[20]={-1,0,1,-1,1,-1,0,1};

bool color[100][100];
char grid[100][100];

int N;

void dfs(int r , int c);
bool inside (int r , int c);

bool inside (int r , int c)
{
    return ( 0<=r && r<N && 0<=c && c<N );
}

void dfs(int r , int c)
{
    int i;

    color[r][c]=1;

    for(i=0;i<8;i++)
    {
        if(inside(r+dr[i],c+dc[i]) && color[r+dr[i]][c+dc[i]]==0 && grid[r+dr[i]][c+dc[i]]=='1')
        {
            dfs(r+dr[i],c+dc[i]);
        }
    }

}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int tp=1;
    int i,j;
    int cnt;

    //INPUT
    //OUTPUT

    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
            break;

        for(i=0;i<N;i++)
        {
            scanf("%s",grid[i]);
        }

        //DEBUG("Done")

        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                color[i][j]=0;
            }
        }

        cnt=0;



        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(color[i][j]==0 && grid[i][j]=='1')
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n",tp,cnt);

        tp++;

    }

    return 0;
}


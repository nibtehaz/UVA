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
#define MAX 100015
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

int R,C;

int dr[10]={1,-1,0,0};
int dc[10]={0,0,1,-1};

char grid[500][500];

bool color[500][500];

int current;


bool inside(int r,int c);
void dfs(int r  , int c);

bool inside(int r,int c)
{
    return (0<=r && r<R && 0<=c && c<C);
}


void dfs(int r  , int c)
{
    int i;
    color[r][c] = 1;

    if(grid[r][c]=='0')
        current++;

    for(i=0;i<4;i++)
    {
        if(inside(r+dr[i],c+dc[i]) &&  grid[r+dr[i]][c+dc[i]]=='0' && color[r+dr[i]][c+dc[i]]==0 )
        {
            dfs(r+dr[i],c+dc[i]);
        }
    }

}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int i,j,r,c;
    char inp[1000];

    //INPUT
    //OUTPUT

    getInt(T)

    while(T--)
    {
        if(tp>1)
            printf("\n");

        getInt(r)
        getInt(c)

        gets(grid[0]);

        r--;
        c--;

        R=0;

        while(gets(grid[R]))
        {
            if(strlen(grid[R])==0)
                break;

            else
                R++;
        }

        C=strlen(grid[0]);


        for(i=0;i<R;i++)
            for(j=0;j<C;j++)
                color[i][j]=0;


        current=0;
        dfs(r,c);

        printf("%d\n",current);

        tp++;


    }

    return 0;
}


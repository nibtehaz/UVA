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

bool color[200][200];
char grid[200][200];
int ponds[200][200];
int pr[200][200];
int pc[200][200];


int N,M;

int current;
int allR,allC;

void dfs(int r , int c);
bool inside (int r , int c);

bool inside (int r , int c)
{
    return ( 0<=r && r<N && 0<=c && c<M );
}

void dfs(int r , int c)
{
    int i;

    color[r][c]=1;
    pr[r][c]=allR;
    pc[r][c]=allC;

    current++;

    for(i=0;i<8;i++)
    {
        if(inside(r+dr[i],c+dc[i]) && color[r+dr[i]][c+dc[i]]==0 && grid[r+dr[i]][c+dc[i]]=='W')
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
    int i,j,k,a,b,done;
    int cnt;
    char inp[2000];

    //INPUT
    //OUTPUT

    getInt(T);

    gets(inp);

    while(gets(inp))
    {
        if(strlen(inp)==0)
        {
            if(tp>1)
                printf("\n");
            tp++;

            N=0;
            M=0;
            done=0;
        }

        else
        {
            strcpy(grid[N],inp);

            if(grid[N][0]!='L' && grid[N][0]!='W')
            {
                a=0;

                for(j=0;grid[N][j]!=' ';j++)
                {
                    a=a*10+(grid[N][j]-'0');
                }

                b=0;

                j++;

                for(;grid[N][j];j++)
                {
                    b=b*10+(grid[N][j]-'0');
                }

                if(done==0)
                {
                    M=strlen(grid[0]);

                    for(i=0;i<N;i++)
                    {
                        for(j=0;j<M;j++)
                        {
                            color[i][j]=0;
                        }
                    }

                    for(i=0;i<N;i++)
                    {
                        for(j=0;j<M;j++)
                        {
                            if(color[i][j]==0 && grid[i][j]=='W')
                            {
                                current=0;
                                allR=i;
                                allC=j;

                                dfs(i,j);

                                ponds[i][j]=current;
                            }
                        }
                    }

                    done=1;
                }

                a--;
                b--;

                if(grid[a][b]=='L')
                    printf("0\n");
                else
                    printf("%d\n",ponds[pr[a][b]][pc[a][b]]);

            }

            else
            {
                N++;
            }

        }
    }

    return 0;
}



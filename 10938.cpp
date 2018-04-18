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
#define MAX 100005
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

int parent[7000];
bool color[7000];
bool checked[7000];
vector < vector<int> >adjList;
vector <int> thisPath;
vector<int> thatPath;

void dfs(int node);

void dfs(int node)
{
    color[node]=1;
    int i;

    for(i=0;i<adjList[node].size();i++)
    {
        if(color[adjList[node][i]]==0)
        {
            dfs(adjList[node][i]);
            parent[adjList[node][i]]=node;
        }
    }

}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int N,Q;
    int i,j,k,LCA,a,b,u,v;

    //INPUT
    //OUTPUT

    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
            break;

        adjList.clear();

        for(i=0;i<=N;i++)
        {
            parent[i]=-1;
            color[i]=0;
            adjList.pb({});
        }

        for(i=1;i<N;i++)
        {
            getInt(j)
            getInt(k)

            adjList[j].pb(k);
            adjList[k].pb(j);
        }

        dfs(1);

        getInt(Q)

        while(Q--)
        {
            getInt(u)
            getInt(v)

            memset(checked,0,N+2);

            i=u;

            thisPath.clear();

            while(i!=-1)
            {
                thisPath.pb(i);
                checked[i]=1;
                i=parent[i];
            }

            i=v;

            thatPath.clear();

            while(i!=-1)
            {
                thatPath.pb(i);

                if(checked[i]==1)
                {
                    LCA=i;
                    break;
                }

                checked[i]=1;
                i=parent[i];
            }

            while(thisPath[thisPath.size()-1]!=LCA)
            {
                thisPath.ppb();
            }

            i=thatPath.size()-2;

            while(i>=0)
            {
                thisPath.pb(thatPath[i]);
                i--;
            }

            if(thisPath.size()%2==1)
            {
                a=thisPath[thisPath.size()/2];
                printf("The fleas meet at %d.\n",a);
            }

            else
            {
                a=thisPath[(thisPath.size()/2)-1];
                b=thisPath[thisPath.size()/2];

                if(a>b)
                {
                    a=a^b;
                    b=a^b;
                    a=a^b;
                }
                printf("The fleas jump forever between %d and %d.\n",a,b);
            }

        }
    }



    return 0;
}


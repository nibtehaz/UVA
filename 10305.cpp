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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-small-attempt0.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

int N;
vector <vector<int> > adjList;
bool color[205];
vector <int> topologicalSort;

void dfs(int node);

void dfs(int node)
{
    int v,len=adjList[node].size(),i;

    color[node]=1;

    for(i=0;i<len;i++)
    {
        if(color[adjList[node][i]]==0)
            dfs(adjList[node][i]);
    }

    topologicalSort.pb(node);
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma 
    int i,j,m,u,v,len;

    while(1)
    {
        getInt(N)
        getInt(m)

        if(N==0 && m==0)
            break;

        for(i=0;i<=N;i++)
        {
            adjList.pb({});
            color[i]=0;
        }

        while(m--)
        {
            getInt(u)
            getInt(v)

            adjList[u].pb(v);
        }

        for(i=1;i<=N;i++)
        {
            if(color[i]==0)
                dfs(i);
        }

        len=topologicalSort.size();

        printf("%d",topologicalSort[len-1]);

        for(i=len-2;i>=0;i--)
        {
            printf(" %d",topologicalSort[i]);
        }

        printf("\n");

        topologicalSort.clear();
        adjList.clear();


    }
    return 0;
}


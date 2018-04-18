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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("A-large (2).in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

struct edge
{
    int u;
    int v;
    int w;
};

int p[MAX];
int rankk[MAX];
int componenet;
vector <edge> edgelist;
vector <int> loop;

void initialize( int n);
int findRoot(int x);
int unionn (int x , int y);
bool structSmaller(edge a , edge b);


void initialize( int n)
{
    int i;

    for(i=0;i<=n;i++)
    {
        p[i]=i;
        rankk[i]=0;
    }

    componenet=n;
}

int findRoot(int x)
{
    if(x==p[x])
        return x;
    else
        return p[x]=findRoot(p[x]);
}

int unionn(int x , int y)
{
    int px=findRoot(x);
    int qy=findRoot(y);

    if(px==qy)
        return 0;

    if(rankk[px]>rankk[qy])
    {
        p[qy]=px;
    }

    else if(rankk[px]==rankk[qy])
    {
        p[qy]=px;
        rankk[px]++;
    }

    else
    {
        p[px]=qy;
    }

    componenet--;
    return 1;
}

bool structSmaller(edge a , edge b)
{
   return a.w<b.w;
}



int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma


    int N,M;
    int i,j;
    edge temp;

    //OUTPUT

    while(1)
    {
        getInt(N)
        getInt(M)

        if(N==0&&M==0)
            break;

        initialize(N);

        while(M--)
        {
            getInt(temp.u)
            getInt(temp.v)
            getInt(temp.w)

            edgelist.pb(temp);
        }


        sort(edgelist.begin(),edgelist.end(),structSmaller);

        for(i=0;i<edgelist.size();i++)
        {
            if(unionn(edgelist[i].u,edgelist[i].v)==0)
            {
                loop.pb(edgelist[i].w);
            }
        }

        sort(loop.begin(),loop.end());

        if(loop.size()==0)
            printf("forest\n");
        else
        {
            printf("%d",loop[0]);

            for(i=1;i<loop.size();i++)
                printf(" %d",loop[i]);

            printf("\n");
        }

        edgelist.clear();
        loop.clear();
    }

    return 0;
}


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
vector <edge> ans;

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
    if(a.w==b.w)
    {
        if(a.u<b.u)
        {
            return true;
        }

        else if(a.u==b.u)
        {
            return a.v<b.v;
        }

        else
            return false;
    }

    else
        return a.w<b.w;

}



int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,N,tp=1;
    int inp;
    int i,j;
    char ch;
    edge temp;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)

        initialize(N);

        for(i=0;i<N;i++)
        {
            scanf("%d",&inp);

            if(inp!=0)
            {
                temp.u=i;
                temp.v=0;
                temp.w=inp;

                edgelist.pb(temp);
            }

            for(j=1;j<N;j++)
            {
                ch=getchar();
                scanf("%d",&inp);

                if(inp!=0)
                {
                    temp.u=i;
                    temp.v=j;
                    temp.w=inp;

                    edgelist.pb(temp);
                }
            }
        }

        sort(edgelist.begin(),edgelist.end(),structSmaller);

        for(i=0;i<edgelist.size();i++)
        {
            if(unionn(edgelist[i].u,edgelist[i].v)==1)
            {
                ans.pb(edgelist[i]);
            }

            if(componenet==1)
                break;
        }

        printf("Case %d:\n",tp);

        for(i=0;i<ans.size();i++)
            printf("%c-%c %d\n",ans[i].u+'A',ans[i].v+'A',ans[i].w);

        tp++;
        edgelist.clear();
        ans.clear();
    }

    return 0;
}


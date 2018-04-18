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
    return (a.w<b.w);
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int N,M,A;
    long long int minn,airp,sum;
    int i,j;
    edge temp;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)
        getInt(M)
        getInt(A)

        initialize(N);

        for(i=0;i<M;i++)
        {
            getInt(temp.u)
            getInt(temp.v)
            getInt(temp.w)

            edgelist.pb(temp);
        }

        sort(edgelist.begin(),edgelist.end(),structSmaller);

        sum=0;
        minn=A*N;
        airp=N;

        for(i=0;i<edgelist.size();i++)
        {
            if(unionn(edgelist[i].u,edgelist[i].v)==1)
            {
                sum+=edgelist[i].w;

                if(sum+A*componenet<minn)
                {
                    minn=sum+A*componenet;
                    airp=componenet;
                }
            }

            if(componenet==1)
                break;
        }

        printf("Case #%d: %lld %lld\n",tp,minn,airp);

        tp++;

        edgelist.clear();
    }

    return 0;
}


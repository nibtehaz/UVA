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

struct combination
{
    int a;
    int b;
    int c;
    int d;
};

int p[MAX];
int rankk[MAX];
int componenet;
vector <edge> edgelist;
vector <combination> candy;

void initialize( int n);
int findRoot(int x);
int unionn (int x , int y);
bool structSmaller(edge a , edge b);
int roll(int a , int b);

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

int roll(int a , int b)
{
    int c,d;

    if(a>=b)
    {
        c=a-b;
        d=b+10-a;
    }

    else
    {
        c=b-a;
        d=a+10-b;
    }

    return SMALLER(c,d);

}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T;
    int N;
    int i,j,num,minn;
    long long int sum;
    edge tempE;
    combination tempC;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)

        initialize(N);

        sum=0;

        tempC.a=0;
        tempC.b=0;
        tempC.c=0;
        tempC.d=0;

        for(i=0;i<N;i++)
        {
            getInt(num);

            tempC.d=num%10;
            num/=10;

            tempC.c=num%10;
            num/=10;

            tempC.b=num%10;
            num/=10;

            tempC.a=num;

            candy.pb(tempC);
        }

        i=0;
        minn=roll(candy[i].a,0)+roll(candy[i].b,0)+roll(candy[i].c,0)+roll(candy[i].d,0);

        for(;i<candy.size();i++)
        {
            minn=SMALLER(minn,roll(candy[i].a,0)+roll(candy[i].b,0)+roll(candy[i].c,0)+roll(candy[i].d,0));
            for(j=i+1;j<candy.size();j++)
            {
                tempE.u=i;
                tempE.v=j;

                tempE.w=roll(candy[i].a,candy[j].a)+roll(candy[i].b,candy[j].b)+roll(candy[i].c,candy[j].c)+roll(candy[i].d,candy[j].d);

                edgelist.pb(tempE);
            }
        }

        /*for(i=0;i<edgelist.size();i++)
        {
            printf("%d%d%d%d %d%d%d%d %d\n",candy[edgelist[i].u].a,candy[edgelist[i].u].b,candy[edgelist[i].u].c,candy[edgelist[i].u].d,candy[edgelist[i].v].a,candy[edgelist[i].v].b,candy[edgelist[i].v].c,candy[edgelist[i].v].d,edgelist[i].w);
        }*/

        sort(edgelist.begin(),edgelist.end(),structSmaller);

        for(i=0;i<edgelist.size();i++)
        {
            if(unionn(edgelist[i].u,edgelist[i].v)==1)
            {
                sum+=edgelist[i].w;
            }

            if(componenet==1)
            {
                break;
            }
        }



        printf("%lld\n",sum+minn);

        edgelist.clear();
        candy.clear();
    }

    return 0;
}


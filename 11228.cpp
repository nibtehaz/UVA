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
#define MAX 200005
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

int p[1005];
int rankk[1005];
int componenet;
vector <edge> edgelist;
int x[1005],y[1005];
vector < vector<edge> >road;
vector<edge> rail;

void initialize( int n);
int findRoot(int x);
int unionn (int x , int y);
bool structSmaller(edge a , edge b);


void initialize( int n)
{
    int i;

    for(i=0;i<n;i++)
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
    double roadLen,railLen;
    int i,j,k,px,py;
    edge temp;
    int n,r,r_;
    int region;
    int debug1,debug2;

    getInt(T)

    while(T--)
    {
        getInt(n)
        getInt(r)

        r_=r*r;
        roadLen=0.0;
        railLen=0.0;

        for(i=0;i<n;i++)
        {
            getInt(x[i])
            getInt(y[i])
        }

        initialize(n);

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                temp.w=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                temp.u=i;
                temp.v=j;

                if(temp.w<=r_)
                {
                    k=unionn(i,j);
                }

                edgelist.pb(temp);

                //printf("(%d %d)\n",i,j);
            }
        }

        for(i=0;i<=n;i++)
            road.pb({});

        for(i=0;i<edgelist.size();i++)
        {
            px=findRoot(edgelist[i].u);
            py=findRoot(edgelist[i].v);

            //printf("%d %d %d %d %d\n",edgelist[i].u,edgelist[i].v,edgelist[i].w,px,py );


            if(px==py)
            {
                road[px].pb(edgelist[i]);
            }

            else
            {
                temp.u=px;
                temp.v=py;
                temp.w=edgelist[i].w;

                rail.pb(temp);
            }
        }


        region=componenet;

        sort(rail.begin(),rail.end(),structSmaller);

        //for(i=0;i<rail.size();i++)
            //DEBUG(rail[i].u)

        //debug1=0;

        for(i=0;i<rail.size();i++)
        {
            if(unionn(rail[i].u,rail[i].v)==1)
            {
                railLen += sqrt((double)(rail[i].w*1.0));
                debug1=rail[i].w;
                //DEBUG(railLen)
            }

            if(componenet==1)
                break;
        }



        for(i=0;i<n;i++)
        {   
            /*DEBUG(i)
            for(j=0;j<road[i].size();j++)
            {
                printf("%d %d %d\n",road[i][j].u,road[i][j].v,road[i][j].w);
            }*/

            if(road[i].size()>0)
            {
                sort(road[i].begin(),road[i].end(),structSmaller);

                initialize(n);
                componenet=road[i].size();

                for(j=0;j<road[i].size();j++)
                {
                    if(unionn(road[i][j].u,road[i][j].v)==1)
                    {
                        roadLen+=sqrt((double)(road[i][j].w*1.0));
                    }

                    if(componenet==1)
                        break;
                }
            }
        }
        //printf("%.0lf\n",round(railLen)) ;
        printf("Case #%d: %d %.0lf %.0lf\n",tp,region,round(roadLen),round(railLen));

        tp++;

        edgelist.clear();
        road.clear();
        rail.clear();
    }




    return 0;
}


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

long long int dist[MAX];
int firstOccurance[MAX];
int level[2*MAX];
int nodeIndex[2*MAX];
bool color[MAX];

int tree [8*MAX];

void init(int node ,int lo , int hi);
int query(int node,int lo,int hi, int i,int j);

void init(int node ,int lo , int hi)
{
    if(lo==hi)
    {
        tree[node]=lo;
        //printf("%d %d : %d\n",lo,hi,tree[node]);
        return;
    }

    int left=2*node;
    int right=left+1;

    int mid=(lo+hi)/2;

    init(left,lo,mid);
    init(right,mid+1,hi);

    if(level[tree[left]] < level[tree[right]] )
    {
        tree[node] = tree[left];
    }
    else
    {
        tree[node] = tree[right];
    }


    //printf("%d %d : %d = %d\n",lo,hi,tree[node],level[tree[node]]);
}

int query(int node,int lo,int hi, int i,int j)
{
    if(j<lo||hi<i)
    {
        return -1;
    }

    if(i<=lo && hi<=j)
    {
        return tree[node];
    }

    int left = 2*node;
    int right = left+1;
    int mid = (lo+hi)/2;

    int pp = query(left,lo,mid,i,j);
    int qq = query(right,mid+1,hi,i,j);

    if(pp==-1)
    {
        return qq;
    }

    else if(qq==-1)
    {
        return pp;
    }

    else
    {
        if(level[pp] <= level[qq])
            return pp;
        else
            return qq;
    }
}

vector <vector<pair<int,int> > > adjList;

int timeStamp=0;

void dfs(int node,int stage);

void dfs(int node,int stage)
{
    int i,temp;

    color[node]=1;

    firstOccurance[node]=timeStamp;

    nodeIndex[timeStamp]=node;
    level[timeStamp]=stage;

    timeStamp++;

    for(i=0;i<adjList[node].size();i++)
    {
        temp=adjList[node][i].first;

        if(color[temp]==0)
        {
            dist[temp]= dist[node] + adjList[node][i].second;

            dfs(temp,stage+1);

            nodeIndex[timeStamp]=node;
            level[timeStamp]=stage;

            timeStamp++;
        }
    }
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma


    int N,Q;
    int u,v,w,A,L,p,q;
    int i,j,k;

    //INPUT
    //OUTPUT

    while(1)
    {
        getInt(N)

        if(N==0)
            break;

        adjList.clear();

        for(i=0;i<=N;i++)
        {
            adjList.pb({});
            color[i]=0;
        }

        for(i=1;i<N;i++)
        {
            getInt(A)
            getInt(L)

            adjList[i].pb({A,L});
            adjList[A].pb({i,L});
        }

        dist[0]=0;
        timeStamp=0;

        dfs(0,0);

        /*for(i=0;i<timeStamp;i++)
            printf("%d ",nodeIndex[i]);
        printf("\n");

        for(i=0;i<timeStamp;i++)
            printf("%d ",level[i]);
        printf("\n");*/


        //segment tree

        init(1,0,timeStamp-1);

        /*i=0;
        for(j=0;j<5;j++)
        {
            for(k=0;k<(1<<j);k++)
            {
                printf("%d ",tree[i]);
                i++;
            }
            printf("\n");
        }

        while(1)
        {
            getInt(u)
            getInt(v)

            DEBUG( query(1,0,timeStamp-1,u,v))

        }*/


        getInt(Q)

        if(Q>0)
        {
            getInt(u)
            getInt(v)

            p=firstOccurance[u];
            q=firstOccurance[v];

            if(p>q)
            {
                p=p^q;
                q=p^q;
                p=p^q;
            }

            w=nodeIndex[query(1,0,timeStamp-1,p,q)];


            printf("%lld",dist[u]+dist[v]-2*dist[w]);

            Q--;

        }


        while(Q--)
        {
            getInt(u)
            getInt(v)

            p=firstOccurance[u];
            q=firstOccurance[v];

            if(p>q)
            {
                p=p^q;
                q=p^q;
                p=p^q;
            }

            w=nodeIndex[query(1,0,timeStamp-1,p,q)];

            //printf("\n%d\n",w);

            printf(" %lld",dist[u]+dist[v]-2*dist[w]);

        }

        printf("\n");


    }


    return 0;
}


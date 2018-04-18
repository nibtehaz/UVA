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

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
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
#define setBit(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;

#define INF 1000000000

int parent[30005];
int sizee[30000];
int ans=0;

void initialize(int N);
int findRoot(int x);
void unionn(int x,int y);

void initialize(int N)
{
    int i;

    for(i=0;i<N;i++)
    {
        parent[i]=i;
        sizee[i]=1;
    }
}

int findRoot(int x)
{
    if(parent[x]!=x)
    {
        parent[x]=findRoot(parent[x]);
    }

    return parent[x];
}

void unionn(int x,int y)
{
    int p = findRoot(x);
    int q = findRoot(y);

    if(p==q)
    {
        return;
    }

    if(sizee[p]>sizee[q])
    {
        parent[q]=p;
        sizee[p]+=sizee[q];
        ans=BIGGER(ans,sizee[p]);
    }

    else
    {
        parent[p]=q;
        sizee[q]+=sizee[p];
        ans=BIGGER(ans,sizee[q]);
    }
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    //INPUT
    //OUTPUT

    int N,M,T;
    int i,j;

    getInt(T)

    while(T--)
    {

        getInt(N)

        initialize(N);
        ans=0;

        getInt(M)

        while(M--)
        {
            getInt(i)
            getInt(j)

            unionn(i-1,j-1);
        }

        printf("%d\n",ans);
    }



    return 0;
}

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

int p[MAX];
int rankk[MAX];
int sizee[MAX];

void initialize(int n);
void connect (int x , int y);
int findd(int x);
bool query(int x,int y);

void initialize(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        p[i]=i;
        rankk[i]=0;
        sizee[i]=1;
    }
}

int findd(int x)
{
    if(x==p[x])
    {
        return x;
    }

    else
    {
        p[x]=findd(p[x]);
        return p[x];
    }
}

void connect (int x , int y)
{
    int p1=findd(x);
    int p2=findd(y);

    if(p1==p2)
        return;

    if(rankk[x]>rankk[y])
    {
        p[p2]=p1;
        sizee[p1]+=sizee[p2];
    }

    else if(rankk[x]==rankk[y])
    {
        p[p2]=p1;
        rankk[p1]++;
        sizee[p1]+=sizee[p2];
    }

    else
    {
        p[p1]=p2;
        sizee[p2]+=sizee[p1];
    }
}

bool query(int x,int y)
{
    return findd(x)==findd(y);
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int k,i,j;

    //OUTPUT

    while(1)
    {
        getInt(n)
        getInt(m)

        if(n==0&&m==0)
            break;

        initialize(n);

        while(m--)
        {
            getInt(k)

            k--;

            getInt(i)

            while(k--)
            {
                getInt(j)
                connect(i,j);
            }
        }

        /*for(i=0;i<n;i++)
            printf("%d ",sizee[i]);
        printf("\n");*/

        printf("%d\n",sizee[findd(0)]);
    }



    return 0;
}



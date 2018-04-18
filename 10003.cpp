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

int cut[100];
int n;
int L;
int memo[1002][1002];
                            // state 1 : start
                            // state 2 : end

int dp(int startt,int endd)
{

    int firstt=upper_bound(cut,cut+n,startt)-cut;

    int lastt=upper_bound(cut,cut+n,endd-1)-cut;
    lastt--;

    //printf("start %d end %d first %d last %d\n",startt,endd,firstt,lastt);

    if(firstt>lastt)
    {
        return 0;
    }

    if(memo[startt][endd]!=-1)
    {
        return memo[startt][endd];
    }

    int i;
    int minn=-1;
    int temp;


    for(i=firstt;i<=lastt;i++)
    {
        temp=(endd-startt) + dp(startt,cut[i]) + dp(cut[i],endd);

        if(minn==-1)
        {
            minn=temp;
        }

        else
        {
            minn=SMALLER(minn,temp);
        }
    }

    memo[startt][endd]=minn;

    return minn;

}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j;

    //INPUT
    //OUTPUT

    while(1)
    {
        getInt(L)

        if(L==0)
        {
            break;
        }

        getInt(n)

        for(i=0;i<n;i++)
        {
            getInt(cut[i]);
        }

        for(i=0;i<=L;i++)
            for(j=0;j<=L;j++)
                memo[i][j]=-1;

        printf("The minimum cutting is %d.\n",dp(0,L));
    }


    return 0;
}

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

int N,M,R;
long long int memo[55][55][55];
                                // state 1 : current number
                                // state 2 : current item left
                                // state 3 : slot left

int countt[55];

long long int dp(int current , int currentLeft , int slotLeft) ;

long long int dp(int current , int currentLeft , int slotLeft)
{
    if(slotLeft==0)
    {
        return 1;
    }

    if(current>N)
    {
        return 0 ;
    }

    if(memo[current][currentLeft][slotLeft]!=-1)
    {
        return memo[current][currentLeft][slotLeft];
    }

    long long int take=0 , notTake=0 ;


    // take

    if(currentLeft!=0)
    {
        take = dp(current,currentLeft-1,slotLeft-1);
    }

    // not take

    notTake = dp(current+1,countt[current+1],slotLeft);

    memo[current][currentLeft][slotLeft] =take+notTake;

    return memo[current][currentLeft][slotLeft];

}


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    //INPUT
    //OUTPUT

    int tp=1;
    int i,j;

    while(1)
    {
        getInt(N)
        getInt(M)

        if(N==0 && M==0)
        {
            break;
        }


        memset(countt,0,sizeof(countt));

        for(i=0;i<N;i++)
        {
            getInt(j)
            countt[j]++;
        }

        printf("Case %d:\n",tp);
        tp++;

        while(M--)
        {
            getInt(R)
            memset(memo,-1,sizeof(memo));
            printf("%lld\n",dp(1,countt[1],R) );
        }

    }

    return 0;
}

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

int memo[101][50002]={0,};
int arr[25];
int total;
int n;
int tp=1;
int minn;

void dp(int index,int amount);

void dp(int index,int amount)
{
    if(index==n)
    {
        minn=SMALLER(minn,abs(total-2*amount));
        return;
    }

    if(memo[index][amount]==tp)
    {
        return;
    }

    // take
    dp(index+1,amount+arr[index]);

    // not take
    dp(index+1,amount);

    memo[index][amount]=tp;
}


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,T;

    //INPUT
    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(n)
        total=0;
        for(i=0;i<n;i++)
        {
            getInt(arr[i])
            total+=arr[i];
        }

        minn=total;

        dp(0,0);

        printf("%d\n",minn);

        tp++;
    }

    return 0;
}

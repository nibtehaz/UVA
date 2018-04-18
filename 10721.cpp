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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-small-attempt0.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

int N,M,K;

long long int memo[2][55][55][55];

long long int dp(int current,int cumulative, int count , int length);

long long int dp(int current,int cumulative, int count , int length)
{
    if(length==N)
    {
        if(count==K)
            return 1;
        else
            return 0;
    }

    if(memo[current][cumulative][count][length]!=-1)
        return memo[current][cumulative][count][length];

    long long int neww=0;
    long long int oldd=0;

    if(cumulative<M)
        oldd=dp(current,cumulative+1,count,length+1);

    if(count<K)
        neww=dp(1-current,1,count+1,length+1);

    memo[current][cumulative][count][length] = oldd + neww;

    //printf("%d %d %d %d %lld\n",current,cumulative,count,length,memo[current][cumulative][count][length] );

    return memo[current][cumulative][count][length];

}



int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j,k;

    //OUTPUT

    while(scanf("%d%d%d",&N,&K,&M)!=EOF)
    {
        for(i=0;i<=M;i++)
        {
            for(j=0;j<=K;j++)
            {
                for(k=0;k<=N;k++)
                {
                    memo[0][i][j][k]=-1;
                    memo[1][i][j][k]=-1;
                }
            }
        }
        printf("%lld\n",dp(1,1,1,1) );
    }

    return 0;
}


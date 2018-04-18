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




int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j,k;
    int N,K;
    int memo[105][105];

    //OUTPUT

    while(1)
    {
        scanf("%d%d",&N,&K);

        if(N==0 || K==0)
            break;

        for(i=0;i<=N;i++)
        {
            memo[i][0]=1;
        }

        for(k=1;k<K;k++)
        {
            for(i=0;i<=N;i++)
            {
                memo[i][k]=0;

                for(j=0;j<=N;j++)
                {
                    if(i-j>=0)
                        memo[i][k]=(memo[i][k]+memo[i-j][k-1])%1000000;
                }
            }
        }

        printf("%d\n",memo[N][K-1]);
    }
    return 0;
}


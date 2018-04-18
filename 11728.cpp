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

int preCalc[1005]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j;
    int temp;
    int S,tp=1;

    //INPUT
    //OUTPUT

    for(i=1;i<=1000;i++)
    {
        temp=0;

        for(j=1;;j++)
        {
            if(j*j>i)
                break;

            if(j*j>=i)
            {
                temp+=j;
                break;
            }

            if(i%j==0)
            {
                temp+=j;
                temp+=i/j;
            }
        }

        if(temp<1005)
        {
            preCalc[temp]=i;
        }
    }

    while(1)
    {
        getInt(S)

        if(S==0)
        {
            break;
        }

        printf("Case %d: %d\n",tp, preCalc[S]==0 ? -1 : preCalc[S] );

        tp++;
    }


    return 0;
}

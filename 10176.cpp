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

int PrimeNumber = 131071 ;
int twoModulo[10005];
vector<int>numb;
char inp[500];

void compute();

void compute()
{
    int temp=0;
    int i;

    for(i=0;i<numb.size();i++)
    {
        if(numb[i]==1)
        {
            temp = (temp + twoModulo[numb.size()-i-1] )%PrimeNumber ;
        }
    }

    if(temp==0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    numb.clear();
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i;
    int twoo=1;
    int temp=0;

    //INPUT
    //OUTPUT

    for(i=0;i<10005;i++)
    {
        twoModulo[i]=twoo;

        twoo = ( twoo * 2 ) % PrimeNumber;
    }

    while(gets(inp))
    {
        for(i=0;inp[i];i++)
        {
            if(inp[i]=='#')
            {
                compute();
                break;
            }

            else
            {
                numb.pb(inp[i]-'0');
            }
        }
    }

    if(numb.size()!=0)
    {
        compute();
    }


    return 0;
}

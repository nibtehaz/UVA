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

long long int decre(long long int num);
long long int incre(long long int num);


long long int decre(long long int num)
{
    vector<int>digi;
    int i;
    long long int deccc=0;

    for(i=0;i<10;i++)
    {
        digi.pb(0);
    }

    while(num>0)
    {
        digi[num%10]++;
        num/=10;
    }

    for(i=0;i<10;i++)
    {
        while(digi[i]>0)
        {
            deccc=deccc*10+i;
            digi[i]--;
        }
    }

    return deccc;
}

long long int incre(long long int num)
{
    vector<int>digi;
    int i;
    long long int inccc=0;

    for(i=0;i<10;i++)
    {
        digi.pb(0);
    }

    while(num>0)
    {
        digi[num%10]++;
        num/=10;
    }


    for(i=9;i>=0;i--)
    {
        while(digi[i]>0)
        {
            inccc=inccc*10+i;
            digi[i]--;
        }
    }

    return inccc;
}

set<long long int>found;

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int num;
    long long int inccc,deccc;
    int i;

    //INPUT
    //OUTPUT

    while(1)
    {
        getLong(num)

        if(num==0)
        {
            break;
        }

        found.clear();

        printf("Original number was %lld\n",num);

        for(i=1;;i++)
        {
            inccc = incre(num);
            deccc = decre(num);

            num = inccc - deccc ;

            printf("%lld - %lld = %lld\n",inccc,deccc,num);

            if(found.find(num)!=found.end())
            {
                break;
            }


            found.insert(num);

        }

        printf("Chain length %d\n\n",i);


    }


    return 0;
}

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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
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




int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j,n,sum;
    bool sieve[MAX]={0,};
    vector <int> primo;
    int cnt[MAX]={0,};

    for(i=2;i<1000;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<20000;j+=i)
            {
                sieve[j]=1;
            }
        }
    }

    for(i=2;i<10005;i++)
    {
        if(sieve[i]==0)
            primo.pb(i);
    }

    n=primo.size();

    for(i=0;i<n;i++)
    {
        sum=primo[i];
        if(sum<10005)
            cnt[sum]++;
        for(j=i+1;j<n;j++)
        {
            sum+=primo[j];
            if(sum<10005)
                cnt[sum]++;
        }
    }

    while(1)
    {
        getInt(n)
        if(n==0)
            break;
        printf("%d\n",cnt[n]);
    }


    return 0;
}



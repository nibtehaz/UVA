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

long long int calc(long long int num);

long long int calc(long long int num)
{
    long long int ans=0;
    long long int divider , modulo;

    if(num<0)
        return 0;

    if(num<10000000000)
    {
        divider=num/1000000000;
        num=num%1000000000;

        ans += 4999999995*divider + ((divider*(divider+1))/2);
    }

    if(num<1000000000)
    {
        divider=num/100000000;
        num=num%100000000;

        ans+= 499999995*divider + ((divider*(divider+1))/2);
    }

    if(num<100000000)
    {
        divider=num/10000000;
        num=num%10000000;

        ans+= 49999995*divider + ((divider*(divider+1))/2);
    }

    if(num<10000000)
    {
        divider=num/1000000;
        num=num%1000000;

        ans+= 4999995*divider + ((divider*(divider+1))/2);
    }

    if(num<1000000)
    {
        divider=num/100000;
        num=num%100000;

        ans+= 499995*divider + ((divider*(divider+1))/2);
    }

    if(num<100000)
    {
        divider=num/10000;
        num=num%10000;

        ans+= 49995*divider + ((divider*(divider+1))/2);
    }

    if(num<10000)
    {
        divider=num/1000;
        num=num%1000;

        ans+= 4995*divider + ((divider*(divider+1))/2);
    }

    if(num<1000)
    {
        divider=num/100;
        num=num%100;

        ans+= 495*divider + ((divider*(divider+1))/2);
    }

    if(num<100)
    {
        divider=num/10;
        num=num%10;

        ans+= 45*divider + ((divider*(divider+1))/2);
    }

    if(num<10)
    {
        ans+= (num*(num+1))/2;
    }

    return ans;
}


int main()
{
    long long int p,q,ans;

    //OUTPUT

    while(1)
    {
        getLong(p)
        getLong(q)

        if(p<0 && q<0)
            break;

        printf("%lld\n",calc(q)-calc(p-1));
    }

    return 0;
}



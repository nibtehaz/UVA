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
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

struct point
{
    long long int x;
    long long int y;
}P[MAX];

long long int getArea(int n);
long long int getGCD(long long int a , long long int b);

long long int getArea(int n)
{
    long long int area=0;
    int m=n-1;
    int i;
    for(i=0;i<m;i++)
    {
        area += P[i].x*P[i+1].y - P[i+1].x*P[i].y;
        //DEBUG(area)
    }

    area += P[m].x*P[0].y - P[0].x*P[m].y;

    return llabs(area);
}


long long int getGCD(long long int a , long long int b)
{
    long long int c;

    if(b>a)
    {
        c=b;
        b=a;
        a=c;
    }

    while(1)
    {
        if(b==0)
            return a;
        c=b;
        b=a%b;
        a=c;
    }
}

int main()
{
    int n,m;
    long long int area,boundary,internal;
    int i;



    while(1)
    {
        getInt(n)

        if(n==0)
            break;

        for(i=0;i<n;i++)
        {
            getLong(P[i].x)
            getLong(P[i].y)
        }

        area=getArea(n);
        boundary=n;

        m=n-1;

        for(i=0;i<m;i++)
        {
            boundary += getGCD(abs(P[i].x-P[i+1].x),abs(P[i].y - P[i+1].y))-1;

        }

    boundary += getGCD(abs(P[0].x-P[n-1].x),abs(P[0].y - P[n-1].y))-1;


        internal=area -boundary + 2 ;  // here I have multiplied the formula by 2

        internal/=2;
//DEBUG(area)
//DEBUG(boundary)
        printf("%lld\n",internal);

    }


    return 0;
}

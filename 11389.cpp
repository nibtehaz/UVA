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
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


int main()
{
    int n,d,r;
    int array1[MAX];
    int array2[MAX];
    int i;
    long long int extra;

    //OUTPUT

    while(1)
    {
        getInt(n)
        getInt(d)
        getInt(r)

        if(n==0 && d==0 &&r ==0)
            break;

        extra=0;

        for(i=0;i<n;i++)
            getInt(array1[i])

        for(i=0;i<n;i++)
            getInt(array2[i])

        sort(array1,array1+n);
        sort(array2,array2+n);

        for(i=0;i<n;i++)
        {
            extra += BIGGER(array1[i]+array2[n-i-1]-d , 0);
        }

        printf("%lld\n",extra*r);


    }



    return 0;
}



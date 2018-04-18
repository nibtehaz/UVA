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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("A-large (2).in","r",stdin);
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

#define INF 1000000000

multiset <int> lists;
multiset <int>:: iterator it1,it2;

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n;
    int k,i,j;
    int inp;
    long long int ans;

    //OUTPUT

    while(1)
    {
        getInt(n)

        if(n==0)
            break;

        ans=0;

        while(n--)
        {
            getInt(k)

            for(i=0;i<k;i++)
            {
                getInt(inp)
                lists.insert(inp);
            }

            it1=lists.begin();
            it2=lists.end();
            it2--;

            ans+=*it2-*it1;

            lists.erase(it1);
            lists.erase(it2);
        }

        printf("%lld\n",ans);

        lists.clear();
    }


    return 0;
}



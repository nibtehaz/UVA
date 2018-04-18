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
#include <unordered_map>

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

bool isFirstSmaller(string a, string b);

bool isFirstSmaller(string a, string b)
{
    string c=a+b;
    string d=b+a;

    return c>d;
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    ios_base::sync_with_stdio(false);

    vector <string> data;
    int n,i;
    char inp[MAX];

    //OUTPUT

    while(1)
    {
        getInt(n)

        if(n==0)
            break;

        for(i=0;i<n;i++)
        {
            scanf("%s",inp);
            data.pb(inp);
        }

        sort(data.begin(),data.end(),isFirstSmaller);

        for(i=0;i<n;i++)
            cout<<data[i];
        cout<<endl;

        data.clear();
    }


    return 0;
}



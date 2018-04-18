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

bool isFirstSmaller(char a , char b);

bool isFirstSmaller(char a , char b)
{
    char c,d;

    if('a'<=a && a<'z')
        c=a-'a'+'A';
    else c=a;

    if('a'<=b && b<'z')
        d=b-'a'+'A';
    else d=b;

    if(c==d)
    {
        return(a<b);
    }

    else
    {
        return (c<d);
    }
}

int main()
{
    int T,len;
    char inp[MAX];

    //OUTPUT

    getInt(T)

    while(T--)
    {
        scanf("%s",inp);
        len=strlen(inp);

        sort(inp,inp+len,isFirstSmaller);

        do
        {
            printf("%s\n",inp);
        }while(next_permutation(inp,inp+len,isFirstSmaller));
    }

    return 0;
}

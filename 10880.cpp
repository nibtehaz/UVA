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

set <int> factors;
set <int> ::iterator it;

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int L,A,P,B,i,divi;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(P)
        getInt(L)

        A=P-L;
        B=sqrt(A)+1;

        for(i=1;i<B;i++)
        {
            if(A%i==0)
            {
                divi=A/i;

                if(divi>L)
                    factors.insert(divi);
                if(i>L)
                    factors.insert(i);
            }
        }

        printf("Case #%d:",tp);
        tp++;

        if(P==L)
        {
            printf(" 0\n");
        }

        else if(factors.size()==0)
            printf("\n");

        else
        {
            for(it=factors.begin();it!=factors.end();it++)
            {
                printf(" %d",*it);
            }
            printf("\n");
        }

        factors.clear();


    }

    return 0;
}



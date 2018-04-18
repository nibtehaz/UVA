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

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int term1,term2,finall,attendance,ct1,ct2,ct3,maxx;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        scanf("%d%d%d%d%d%d%d",&term1,&term2,&finall,&attendance,&ct1,&ct2,&ct3);

        maxx=ct1+ct2;

        if(ct1+ct3>maxx)
        {
            maxx=ct1+ct3;
        }

        if(ct2+ct3>maxx)
        {
            maxx=ct2+ct3;
        }

        maxx+=2*term1;
        maxx+=2*term2;
        maxx+=2*finall;
        maxx+=2*attendance;

        //DEBUG(maxx)

        printf("Case %d: ",tp);
        tp++;

        if(maxx>=180)
            printf("A");
        else if(maxx<180 && maxx>=160)
            printf("B");
        else if(maxx<160 && maxx>=140)
            printf("C");
        else if(maxx<140 && maxx>=120)
            printf("D");
        else
            printf("F");

        printf("\n");


    }


    return 0;
}



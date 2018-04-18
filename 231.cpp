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

#define PI acos(-1.0)
#define MAX 100015
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

vector <int> given;
vector<int> greedy;


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int tp=1;
    int inp;
    int i,j;

    //INPUT
    //OUTPUT

    while(1)
    {
        getInt(inp)

        if(inp==-1)
            break;

        if(tp>1)
            printf("\n");

        given.pb(-inp);

        while(1)
        {
            getInt(inp)

            if(inp==-1)
                break;

            given.pb(-inp);
        }

        greedy.pb(given[0]);

        for(i=1;i<given.size();i++)
        {
            j=upper_bound(greedy.begin(),greedy.end(),given[i]) - greedy.begin();

            if(j==greedy.size())
            {
                greedy.pb(given[i]);
            }


            //DEBUG(j)

            if(greedy[j]>given[i])
            {
                greedy[j]=given[i];
            }

            /*printf("%d\n",given[i]);

            for(j=0;j<greedy.size();j++)
                printf("%d ",greedy[j]);
            printf("\n");*/
        }

        printf("Test #%d:\n",tp);
        printf("  maximum possible interceptions: %d\n",greedy.size());

        tp++;
        given.clear();
        greedy.clear();
    }



    return 0;
}


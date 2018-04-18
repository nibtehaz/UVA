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

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 1000005
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
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N,q,x,nn,tp=1;
    stack <int> steak;
    queue <int> kue;
    priority_queue <int> heap;

    //OUTPUT
    //INPUT

    int st,qu,pq,impossible;

    while(scanf("%d",&N)!=EOF)
    {
        nn=0;

        while(!steak.empty())
        {
            steak.pop();
            kue.pop();
            heap.pop();
        }

        st=0;
        qu=0;
        pq=0;
        impossible=0;

        //printf("Test %d\n",tp);
        //tp++;

        while(N--)
        {
            getInt(q)
            getInt(x)

            //printf("%d %d\n",q,x);

            if(q==1)
            {
                steak.push(x);
                kue.push(x);
                heap.push(x);
            }

            else
            {
                nn++;

                if(steak.empty())
                {
                    impossible=1;
                    continue;
                }


                if(x==steak.top())
                {
                    st++;
                }

                if(x==kue.front())
                {
                    qu++;
                }

                if(x==heap.top())
                {
                    pq++;
                }

                if(x!=steak.top() && x!=kue.front() && x!=heap.top())
                {
                    impossible++;
                }

                steak.pop();
                kue.pop();
                heap.pop();
            }
        }

        //printf("ST %d\nKU %d\nHEAP %d\nImpossible %d\n",st,qu,pq,impossible);

        if(st==nn && pq!=nn && qu !=nn)
        {
            printf("stack\n");
        }

        else if(st!=nn && pq!=nn && qu ==nn)
        {
            printf("queue\n");
        }

        else if(st!=nn && pq==nn && qu !=nn)
        {
            printf("priority queue\n");
        }

        else if(impossible!=0 || (st!=nn && pq!=nn &&qu!=nn) )
        {
            printf("impossible\n");
        }

        else
        {
            printf("not sure\n");
        }
    }



    return 0;
}

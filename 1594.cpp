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

struct Tuple
{
    int arr[16];
};

vector<Tuple> lisst;

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int T,n,i,j,loop,LP,ZR,test,test2;
    int current;
    Tuple temp,temp2;
    int tp=0;
    //OUTPUT

    getInt(T)

    while(T--)
    {
        tp++;
        getInt(n)
        lisst.clear();
        current=0;
        LP=0;
        ZR=0;

        for(i=0;i<n;i++)
        {
            getInt(temp.arr[i])
        }

        lisst.pb(temp);

        for(loop=0;loop<=1000;loop++)
        {
            //for(i=0;i<n;i++)
                //printf("%d ",temp.arr[i] );
            //printf("\n");

            test2=1;
            temp2=temp;

            for(i=0;;i++)
            {
                if(i==n-1)
                    break;

                temp.arr[i]=abs(temp2.arr[i+1]-temp2.arr[i]);

                if(temp.arr[i]!=0)
                    test2=0;
            }

            temp.arr[n-1]=abs(temp2.arr[n-1]-temp2.arr[0]);

            if(temp.arr[n-1]!=0)
                test2=0;

            if(test2==1)
            {
                ZR=1;
                goto shesh;
            }

            for(j=0;j<lisst.size();j++)
            {
                test=1;

                for(i=0;i<n;i++)
                {
                    if(lisst[j].arr[i]!=temp.arr[i])
                    {
                        test=0;
                        break;
                    }
                }

                if(test==1)
                {
                    LP=1;
                    goto shesh;
                }
            }

            lisst.pb(temp);
        }

        shesh:
            //DEBUG(tp);
        //printf("LP %d ZR %d\n",LP,ZR);
            if(LP==0 || ZR==1)
                printf("ZERO\n");
            else
                printf("LOOP\n");
    }

    return 0;
}

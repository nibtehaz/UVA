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
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back
#define setBit(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;

#define INF 1000000000

int T,N,arr[105];
int cnt[1005];
vector<int>arrrr;
int done;
vector<int>temp;

void dp(int countt , int index , int summ)
{
    //printf("%d %d %d\n",countt,index,summ);



    // take this one
    if(summ+arrrr[index]<=T && countt>0)
    {
        temp.pb(arrrr[index]);

        if(summ+arrrr[index]==T )
        {
            done = 1;
            printf("%d",temp[0]);

            for(int i=1;i<temp.size();i++)
            {
                printf("+%d",temp[i]);
            }

            printf("\n");
        }

        dp(countt-1,index,summ+arrrr[index]);
        temp.ppb();

    }

    // move to the next
    if(index+1<arrrr.size())
    {
        dp(cnt[arrrr[index+1]],index+1,summ);
    }

}


int main()
{
    // Bisimillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    //INPUT
    //OUTPUT


    while(1)
    {
        getInt(T)
        getInt(N)

        if(N==0)
            break;

        memset(cnt,0,sizeof(cnt));
        arrrr.clear();

        done=0;

        for(int i=0;i<N;i++)
        {
            getInt(arr[i])

            cnt[arr[i]]++ ;

            if(arrrr.size()==0)
            {
                arrrr.pb(arr[i]);
            }

            else if(arrrr[arrrr.size()-1]>arr[i])
            {
                arrrr.pb(arr[i]);
            }

        }

        /*DEBUG(arrrr.size())
        for(int i=0;i<arrrr.size();i++)
        {
            printf("%d ",arrrr[i] );
        }

        printf("\n" );*/

        printf("Sums of %d:\n",T);

        dp(cnt[arrrr[0]],0,0);

        if(done==0)
        {
            printf("NONE\n");
        }
    }


    return 0;
}

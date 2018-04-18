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
    int T,tp=1,N,i,cnt;
    char inp[MAX];

    getInt(T)

    while(T--)
    {
        getInt(N)
        scanf("%s",inp);

        cnt=0;

        for(i=0;i<N;i++)
        {
            if(inp[i]=='.')
            {
                if(i+1<N)
                    inp[i+1]='#';
                if(i+2<N)
                    inp[i+2]='#';

                inp[i]='#';

                cnt++;
            }
        }

        printf("Case %d: %d\n",tp,cnt);

        tp++;
    }

    return 0;
}



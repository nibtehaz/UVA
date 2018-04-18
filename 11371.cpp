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

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    //INPUT
    //OUTPUT

    long long int Num,biggest,smallest;
    int cnt1[20],cnt2[20],i;

    while(scanf("%lld",&Num)!=EOF)
    {
        for(i=0;i<10;i++)
        {
            cnt1[i]=0;
            cnt2[i]=0;
        }

        while(Num>0)
        {
            cnt1[Num%10]++;
            cnt2[Num%10]++;
            Num/=10;
        }

        biggest=0;

        for(i=9;i>=0;i--)
        {
            while(cnt1[i]>0)
            {
                biggest=biggest*10+i;
                cnt1[i]--;
            }
        }

        smallest=0;

        for(i=1;i<10;i++)
        {
            if(cnt2[i]>0)
            {
                smallest=smallest*10+i;
                cnt2[i]--;
                break;
            }
        }

        for(i=0;i<10;i++)
        {
            while(cnt2[i]>0)
            {
                smallest=smallest*10+i;
                cnt2[i]--;
            }
        }

        printf("%lld - %lld = %lld = 9 * %lld\n",biggest,smallest,biggest-smallest,(biggest-smallest)/9);

    }


    return 0;
}

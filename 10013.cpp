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

int A[1000005];
int B[1000005];
int Sum[1000005];

 int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int T;
    int M,i,tmp;

    //INPUT
    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(M)

        for(i=0;i<M;i++)
        {
            getInt(A[i])
            getInt(B[i])
            Sum[i]=0;
        }

        for(i=M-1;i>=0;i--)
        {
            tmp=A[i]+B[i]+Sum[i];
            //DEBUG(tmp)

            if(tmp>=10)
            {
                Sum[i]=tmp%10;

                if(i!=0)
                {
                    Sum[i-1]=tmp/10;
                }

                tmp=1;
            }

            else
            {
                Sum[i]=tmp%10;
                tmp=0;
            }
        }

        if(tmp==1)
        {
            printf("1");
        }

        for(i=0;i<M;i++)
        {
            printf("%d",Sum[i]);
        }

        printf("\n");

        if(T!=0)
        {
            printf("\n");
        }
    }

    return 0;
}

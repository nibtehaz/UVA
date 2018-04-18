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

bool sieve[1050000]={0,};
vector<int>primo;


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j;
    int num,base,temp;
    int cnt,minn,pre,ans2,tempPre;
    double sumLog;

    //OUTPUT

    sieve[1]=1;

    for(i=2;i<1026;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<1050000;j+=i)
            {
                sieve[j]=1;
            }
        }
    }


    for(i=2;i<1050000;i++)
    {
        if(sieve[i]==0)
            primo.pb(i);
    }

    while(scanf("%d%d",&num,&base)!=EOF)
    {
        temp=base;
        minn=-1;

        for(i=0;i<primo.size();i++)
        {
            pre=0;
            cnt=0;

            while(temp%primo[i]==0)
            {
                temp/=primo[i];
                pre++;
            }

            if(pre!=0)
            {
                tempPre=primo[i];
                cnt=0;

                for(;;)
                {
                    if(tempPre<=0 || tempPre>num )
                        break;

                    cnt += num / tempPre ;

                    tempPre*=primo[i];
                }


                cnt/=pre;

                if(minn==-1)
                {
                    minn=cnt;
                }

                else
                {
                    if(cnt<minn)
                        minn=cnt;
                }
            }

            if(temp==1)
                break;
        }

        //DEBUG(min)

        sumLog=0.0;

        for(i=1;i<=num;i++)
        {
            sumLog+=log((double)i)/log((double)base);
        }

        ans2=(int)sumLog + 1;

        //DEBUG(ans2)

        printf("%d %d\n",minn,ans2);
    }


    return 0;
}


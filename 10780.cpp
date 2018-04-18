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

bool sieve[46342]={0,};
vector<int>primo;


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j;

    //OUTPUT

    sieve[1]=1;

    for(i=2;i<217;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<46342;j+=i)
            {
                sieve[j]=1;
            }
        }
    }


    for(i=2;i<46342;i++)
    {
        if(sieve[i]==0)
            primo.pb(i);
    }

    int T,tp=1;
    int num,mul,temp;
    int cnt,minn,pnt,pre;

    getInt(T)

    while(T--)
    {
        getInt(mul)
        getInt(num)

        minn=-1;

        temp=mul;

        for(i=0;i<primo.size();i++)
        {
            if(primo[i]*primo[i]>temp)
                break;

            cnt=0;

            while(temp%primo[i]==0)
            {
                cnt++;
                temp/=primo[i];
            }


            if(cnt!=0)
            {
                pnt=0;
                pre=primo[i];

                while(1)
                {
                    if(pre<=0 || pre>num)
                        break;

                    pnt += num/pre;

                    pre *= primo[i];
                }

                pnt /= cnt;

                if(minn==-1)
                {
                    minn=pnt;
                }

                else
                {
                    minn=SMALLER(minn,pnt);
                }
            }
        }

        if(temp!=1)
        {
            pnt=0;
            pre=temp;
            while(1)
                {
                    if(pre<=0 || pre>num)
                        break;

                    pnt += num/pre;

                    pre *= temp;
                }

                if(minn==-1)
                {
                    minn=pnt;
                }

                else
                {
                    minn=SMALLER(minn,pnt);
                }
        }


        printf("Case %d:\n",tp);
        tp++;

        if(minn==0)
            printf("Impossible to divide\n");
        else
            printf("%d\n",minn);
    }

    return 0;
}


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

int gcd (int a , int b);

int gcd (int a , int b)
{
    int c;

    if(a<b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }

    while(1)
    {
        if(b==0)
            return a;
        c=b;
        b=a%b;
        a=c;
    }
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j;
    long long int num,sign;
    int temp,ggccdd,cnt;

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

    while(scanf("%lld",&num)!=EOF)
    {
        if(num==0)
            break;

        if(num<0)
        {
            num=-num;
            sign=-1;
        }

        else
        {
            sign=1;
        }

        ggccdd=-1;

        for(i=0;i<primo.size();i++)
        {
            if(primo[i]*primo[i]>num)
                break;

            cnt=0;

            while(num%primo[i]==0)
            {
                num/=primo[i];
                cnt++;
            }

            if(cnt!=0)
            {
                if(ggccdd==-1)
                {
                    ggccdd=cnt;
                }

                else
                {
                    ggccdd=gcd(ggccdd,cnt);
                }
            }
        }

        if(num!=1)
            ggccdd=1;

        if(sign==1)
        {
            printf("%d\n",ggccdd);
        }

        else
        {
            while(ggccdd%2==0)
            {
                ggccdd/=2;
            }

            printf("%d\n",ggccdd);

        }
    }

    return 0;
}


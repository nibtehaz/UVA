﻿/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
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
    int fact,num,real;
    int test,cnt,pnt,temp;

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

    while(scanf("%d%d",&fact,&num)!=EOF)
    {

        test=1;
        real=num;

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

            pnt=0;
            temp=primo[i];

            while(1)
            {
                if(temp<=0 || temp>fact)
                    break;

                pnt+=fact/temp;

                temp*=primo[i];
            }

            if(pnt<cnt)
            {
                test=0;
                goto shesh;
            }

        }

        if(num!=1)
        {
            if(fact<num)
                test=0;
        }


        shesh:
            if(test==1)
                printf("%d divides %d!\n",real,fact);
            else
                printf("%d does not divide %d!\n",real,fact );
    }

    return 0;
}


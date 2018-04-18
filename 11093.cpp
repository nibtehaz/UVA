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
#include<map>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

map <string,int> trees;
map <string,int> :: iterator it;


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1,N,i;
    long long int array[MAX],a,b;
    long long int sum;
    int index;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N);
        sum=0;

        for(i=0;i<N;i++)
        {
            getLong(a)
            array[i]=a;
        }

        for(i=0;i<N;i++)
        {
            getLong(a)
            array[i]-=a;
            sum+=array[i];
        }

        //DEBUG(sum)

        if(sum<0)
        {
            printf("Case %d: Not possible\n",tp);
            tp++;
        }

        else
        {
            sum=0;
            index=0;

            for(i=0;i<N;i++)
            {
                sum+=array[i];

                if(sum<0)
                {
                    index=i+1;
                    sum=0;
                }
            }

            printf("Case %d: Possible from station %d\n",tp,index+1);
            tp++;
        }

    }

    return 0;
}

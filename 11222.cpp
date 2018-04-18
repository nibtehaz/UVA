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

bool bank[10005][3]={0,};

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1,solved1,solved2,solved3,cnt1,cnt2,cnt3,maxx;
    vector <int> p1 , p2 ,p3;
    int temp,i;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        cnt1=0;
        cnt2=0;
        cnt3=0;
        maxx=0;

        getInt(solved1);

        for(i=0;i<solved1;i++)
        {
            getInt(temp)
            if(bank[temp][0]==0)
                p1.pb(temp);
            bank[temp][0]=1;
        }

        getInt(solved2);

        for(i=0;i<solved2;i++)
        {
            getInt(temp)
            if(bank[temp][1]==0)
                p2.pb(temp);
            bank[temp][1]=1;
        }

        getInt(solved3);

        for(i=0;i<solved3;i++)
        {
            getInt(temp)
            if(bank[temp][2]==0)
                p3.pb(temp);
            bank[temp][2]=1;
        }

        solved1=p1.end()-p1.begin();
        solved2=p2.end()-p2.begin();
        solved3=p3.end()-p3.begin();

        sort(p1.begin(),p1.end());
        sort(p2.begin(),p2.end());
        sort(p3.begin(),p3.end());

        for(i=0;i<solved1;i++)
        {
            if(bank[p1[i]][1]==0 && bank[p1[i]][2]==0)
                cnt1++;
        }

        maxx = BIGGER(cnt1,maxx);

        for(i=0;i<solved2;i++)
        {
            if(bank[p2[i]][0]==0 && bank[p2[i]][2]==0)
                cnt2++;
        }

        maxx = BIGGER(cnt2,maxx);

        for(i=0;i<solved3;i++)
        {
            if(bank[p3[i]][0]==0 && bank[p3[i]][1]==0)
                cnt3++;
        }

        maxx = BIGGER(cnt3,maxx);

        printf("Case #%d:\n",tp);
        tp++;

        if(cnt1==maxx)
        {
            printf("%d %d",1,cnt1);

            for(i=0;i<solved1;i++)
            {
                if(bank[p1[i]][1]==0 && bank[p1[i]][2]==0)
                    printf(" %d",p1[i]);
            }
            printf("\n");

        }

        if(cnt2==maxx)
        {
            printf("%d %d",2,cnt2);

            for(i=0;i<solved2;i++)
            {
                if(bank[p2[i]][0]==0 && bank[p2[i]][2]==0)
                    printf(" %d",p2[i]);
            }
            printf("\n");

        }

        if(cnt3==maxx)
        {
            printf("%d %d",3,cnt3);

            for(i=0;i<solved3;i++)
            {
                if(bank[p3[i]][0]==0 && bank[p3[i]][1]==0)
                    printf(" %d",p3[i]);
            }
            printf("\n");

        }

        for(i=0;i<solved1;i++)
        {
            bank[p1[i]][0]=0;
        }

        for(i=0;i<solved2;i++)
        {
            bank[p2[i]][1]=0;
        }

        for(i=0;i<solved3;i++)
        {
            bank[p3[i]][2]=0;
        }

        p1.clear();
        p2.clear();
        p3.clear();

    }

    return 0;
}

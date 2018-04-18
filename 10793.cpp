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


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int L,M;
    int MAT[105][105];
    int i,j,k;
    int prob,maxx,minn,ans;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(L)
        getInt(M)

        for(i=0;i<L;i++)
            for(j=0;j<L;j++)
                MAT[i][j]=INF;

        for(i=0;i<L;i++)
            MAT[i][i]=0;

        while(M--)
        {
            getInt(i)
            getInt(j)
            getInt(k)

            i--;
            j--;

            MAT[i][j]=SMALLER(MAT[i][j],k);
            MAT[j][i]=SMALLER(MAT[j][i],k);
        }


        for(k=0;k<L;k++)
            for(i=0;i<L;i++)
                for(j=0;j<L;j++)
                    MAT[i][j]=SMALLER(MAT[i][j],MAT[i][k]+MAT[k][j]);

        /*for(i=0;i<L;i++)
        {
            for(j=0;j<L;j++)
            {
                printf("%d ",MAT[i][j]);
            }
            printf("\n");
        }

        printf("\n");printf("\n");printf("\n");*/

        minn=INF;
        ans=-1;

        for(i=0;i<L;i++)
        {
            prob=0;
            maxx=0;
            if(!((MAT[i][0]==MAT[i][1])&&(MAT[i][3]==MAT[i][4])&&(MAT[i][1]==MAT[i][2])&&(MAT[i][2]==MAT[i][4])))
                continue;

            for(j=0;j<L;j++)
            {
                if(MAT[i][j]==INF)
                    prob++;
                else if(MAT[i][j]>maxx)
                    maxx=MAT[i][j];
            }

            if(maxx<minn && prob==0)
            {
                minn=maxx;
                ans=i+1;
            }
        }

        if(ans!=-1)
            ans=minn;
        printf("Map %d: %d\n",tp,ans);

        tp++;
    }



    return 0;
}



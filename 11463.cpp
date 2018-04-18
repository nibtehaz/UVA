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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.in","r",stdin);
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

#define INF 1000000





int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int matrix[105][105];
    int i,j,k,u,v,start,end,n,r,max,sum;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(n)
        getInt(r)

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    matrix[i][j]=0;
                else
                    matrix[i][j]=INF;
            }
        }

        while(r--)
        {
            getInt(u)
            getInt(v)

            matrix[u][v]=1;
            matrix[v][u]=1;
        }

        getInt(start)
        getInt(end)

        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    matrix[i][j]=SMALLER(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }

        max=0;

        for(i=0;i<n;i++)
        {
            sum=matrix[start][i]+matrix[i][end];
            max=BIGGER(max,sum);
        }

        printf("Case %d: %d\n",tp,max);

        tp++;


    }

    return 0;
}

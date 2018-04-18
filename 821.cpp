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

    int matrix[102][102];
    int u,v;
    int tp=1,i,j,k,total,cnt;

    //OUTPUT

    while(1)
    {
        getInt(u)
        getInt(v)

        if(u==0 && v==0)
            break;

        else
        {
            for(i=0;i<100;i++)
            {
                for(j=0;j<100;j++)
                {
                    if(i==j)
                        matrix[i][j]=0;
                    else
                        matrix[i][j]=INF;
                }
            }

            matrix[u-1][v-1]=1;

            while(1)
            {
                getInt(u)
                getInt(v)

                if(u==0 && v==0)
                    break;

                matrix[u-1][v-1]=1;
            }

            total=0;
            cnt=0;

            for(k=0;k<100;k++)
            {
                for(i=0;i<100;i++)
                {
                    for(j=0;j<100;j++)
                    {
                        matrix[i][j]=SMALLER(matrix[i][j],matrix[i][k]+matrix[k][j]);
                    }
                }
            }

            for(i=0;i<100;i++)
            {
                for(j=0;j<100;j++)
                {
                    if(i!=j && matrix[i][j]!=INF)
                    {
                        total+=matrix[i][j];
                        cnt++;
                    }
                }
            }

            printf("Case %d: average length between pages = %.3lf clicks\n",tp,(double)total/(double)cnt);

            tp++;


        }
    }



    return 0;
}

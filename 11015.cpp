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

    int n,m;
    char names[50][50];
    int matrix[50][50];
    int i,j,k;
    int sum,min,index;
    int tp=1;

    //OUTPUT

    while(1)
    {
        getInt(n)
        getInt(m)

        if(n==0 && m==0)
            break;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    matrix[i][j]=0;
                else
                    matrix[i][j]=INF;
            }
        }

        for(i=1;i<=n;i++)
        {
            scanf("%s",names[i]);
        }

        while(m--)
        {
            getInt(i)
            getInt(j)
            getInt(k)

            matrix[i][j]=SMALLER(k,matrix[i][j]);
            matrix[j][i]=SMALLER(k,matrix[j][i]);
        }

        for(k=1;k<=n;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    matrix[i][j]=SMALLER(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }

        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=matrix[i][1];
        }

        min=sum;
        index=1;

        for(i=2;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                sum+=matrix[j][i];
            }

            if(sum<min)
            {
                min=sum;
                index=i;
            }
        }
        printf("Case #%d : %s\n",tp,names[index]);

        tp++;
    }

    return 0;
}

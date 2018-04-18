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

struct element
{
    int row;
    int value;
};

 vector< vector<element> >column;

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;

    int i,j,array[MAX],cnt,val;

    //INPUT
    //OUTPUT

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<=m;i++)
        {
            column.pb({});
        }

        for(i=0;i<n;i++)
        {
            getInt(cnt);

            for(j=0;j<cnt;j++)
            {
                getInt(array[j])
            }

            for(j=0;j<cnt;j++)
            {
                getInt(val)

                column[array[j]-1].pb({i+1,val});
            }
        }

        printf("%d %d\n",m,n);

        for(i=0;i<m;i++)
        {
            printf("%d",column[i].size());

            for(j=0;j<column[i].size();j++)
            {
                printf(" %d",column[i][j].row);
            }

            printf("\n");

            if(column[i].size()>0)
            {
                printf("%d",column[i][0].value);

                for(j=1;j<column[i].size();j++)
                {
                    printf(" %d",column[i][j].value);
                }
            }

            printf("\n");
        }


        column.clear();
    }




    return 0;
}

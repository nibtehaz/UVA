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

vector < vector<int> >adjList;

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int i,inp,k,num;

    //INPUT
    //OUTPUT

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<1000002;i++)
            adjList.pb({});



        for(i=0;i<n;i++)
        {
            getInt(inp)

            adjList[inp].pb(i);
        }

        /*for(i=0;i<10;i++)
        {

            printf("%d : ",i);

            for(int j=0;j<adjList[i].size();j++)
                printf("%d ",adjList[i][j]);
            printf("\n");
        }*/

        while (m--)
        {
            getInt(k)
            getInt(num)

            if(adjList[num].size()<k)
            {
                printf("0\n");
            }

            else
            {
                printf("%d\n",adjList[num][k-1]+1);
            }
        }

        adjList.clear();
    }


    return 0;
}

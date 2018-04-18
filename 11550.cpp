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

    int T;
    int n,m,inp,i,j,need=0,test,a,b,cnt;
    vector <vector<bool> > edge;
    vector <vector<bool> > adjMat;

    getInt(T)

    //OUTPUT

    while(T--)
    {
        getInt(n)
        getInt(m)

        test=1;

        for(i=0;i<n;i++)
        {
            edge.pb({});

            for(j=0;j<m;j++)
            {
                getInt(inp)

                if(inp==0)
                    edge[i].pb(0);
                else
                    edge[i].pb(1);
            }
        }

        /*for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<edge[i][j]<<" ";
            }
            printf("\n");
        }*/


        for(i=0;i<n;i++)
        {
            adjMat.pb({});

            for(j=0;j<n;j++)
            {
                adjMat[i].pb(0);
            }
        }

        for(i=0;i<m;i++)
        {
            a=-1;
            b=-1;
            cnt=0;

            for(j=0;j<n;j++)
            {
                if(edge[j][i]==1)
                {
                    cnt++;
                    //printf("{(%d %d)}\n",i,j );


                    if(cnt==1)
                    {
                        a=j;
                    }

                    else if(cnt==2)
                    {
                        b=j;
                    }

                    else if(cnt>2)
                    {
                        test=0;
                        goto shesh;
                    }
                }


            }

            if(cnt<2)
            {
                //DEBUG("bug\n");
                test=0;
                goto shesh;
            }
//printf("%d %d\n",a,b);
            if(adjMat[a][b]==0 && adjMat[b][a]==0)
            {
                adjMat[a][b] = 1;
                adjMat[b][a] = 1;
            }

            else
            {
                //DEBUG("bug\n");
                test=0;
                goto shesh;
            }
        }

        shesh:

        if(test==1)
            printf("Yes\n");
        else
            printf("No\n");

        edge.clear();
        adjMat.clear();
    }


    return 0;
}

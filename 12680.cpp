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
#define MAX 200005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

double matrix[205][205];
int predecessor[205][205];


void printPath(int i , int j , int space);

void printPath(int i , int j , int space)
{
    if(i!=j)
        printPath(i,predecessor[i][j],1);

    printf("%d",j);

    if(space)
        printf(" ");

}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int x[205],y[205],z[205];
    int i,j,k,u,v;
    int q,tp=1;
    char inp[20];

    //OUTPUT

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        
        if(tp>1)
            printf("\n");
        tp++;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    matrix[i][j]=0.0;
                }
                else
                {
                    matrix[i][j]=(double)INF;
                }

                predecessor[i][j]=i;
            }
        }

        for(i=0;i<n;i++)
        {
            getInt(z[i])
            getInt(x[i])
            getInt(y[i])
        }

        while(m--)
        {
            getInt(u)
            getInt(v)
            scanf("%s",inp);

            if(!strcmp(inp,"walking"))
            {
                matrix[u][v]=(double)((x[u]-x[v])*(x[u]-x[v]) + (y[u]-y[v])*(y[u]-y[v]))  ;
                matrix[v][u]=(double)((x[u]-x[v])*(x[u]-x[v]) + (y[u]-y[v])*(y[u]-y[v]))  ;
                matrix[u][v]=sqrt(matrix[u][v]);
                matrix[v][u]=sqrt(matrix[v][u]);
            }

            else if(!strcmp(inp,"stairs"))
            {
                matrix[u][v]=(double)((x[u]-x[v])*(x[u]-x[v]) + (y[u]-y[v])*(y[u]-y[v]) + (z[u]-z[v])*(z[u]-z[v])*25) ;
                matrix[v][u]=(double)((x[u]-x[v])*(x[u]-x[v]) + (y[u]-y[v])*(y[u]-y[v]) + (z[u]-z[v])*(z[u]-z[v])*25) ;
                matrix[u][v]=sqrt(matrix[u][v]);
                matrix[v][u]=sqrt(matrix[v][u]);
            }

            else if(!strcmp(inp,"lift"))
            {
                matrix[u][v]=1.0;
                matrix[v][u]=1.0;
            }

            else if(!strcmp(inp,"escalator"))
            {
                matrix[u][v]=1.0;
                matrix[v][u]=(double)((x[u]-x[v])*(x[u]-x[v]) + (y[u]-y[v])*(y[u]-y[v]) + (z[u]-z[v])*(z[u]-z[v])*25) ;
                matrix[v][u]=sqrt(matrix[v][u])*3.0;
            }
        }

        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if( (matrix[i][j]-matrix[i][k]-matrix[k][j]) >=EPS )
                    {
                        matrix[i][j] = matrix[i][k]+matrix[k][j];
                        predecessor[i][j]=predecessor[k][j];
                    }
                }
            }
        }

        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%lf ",matrix[i][j]);
            }
            printf("\n");
        }

        DEBUG("___________________________________________")

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",predecessor[i][j]);
            }
            printf("\n");
        }*/

        getInt(q);

        while(q--)
        {
            getInt(u)
            getInt(v)

            printPath(u,v,0);
            printf("\n");
        }

    }

    return 0;
}


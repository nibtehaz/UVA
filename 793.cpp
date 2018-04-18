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

int p[MAX];
int rankk[MAX];

void initialize(int n);
void connect (int x , int y);
int findd(int x);
bool query(int x,int y);

void initialize(int n)
{
    int i;

    for(i=0;i<=n;i++)
    {
        p[i]=i;
        rankk[i]=0;
    }
}

int findd(int x)
{
    if(x==p[x])
    {
        return x;
    }

    else
    {
        p[x]=findd(p[x]);
        return p[x];
    }
}

void connect (int x , int y)
{
    int p1=findd(x);
    int p2=findd(y);

    if(rankk[x]>rankk[y])
    {
        p[p2]=p1;
    }

    else if(rankk[x]==rankk[y])
    {
        p[p2]=p1;
        rankk[p1]++;
    }

    else
    {
        p[p1]=p2;
    }
}

bool query(int x,int y)
{
    return findd(x)==findd(y);
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    char ch;
    int i,j;
    int n;
    int yes,no;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(n)

        if(tp>1)
            printf("\n");
        tp++;

        initialize(n);
        yes=0;
        no=0;

        ch=getchar();
        while(ch!='\n')
            ch=getchar();

        while((ch=getchar())!=EOF)
        {

            if(ch=='c')
            {
                getInt(i)
                getInt(j)

                connect(i,j);
            }

            else if(ch=='q')
            {
                getInt(i)
                getInt(j)

                if(query(i,j))
                    yes++;
                else
                    no++;
            }

            else if(ch=='\n')
                break;

            ch=getchar();

            while(ch!='\n')
                ch=getchar();
        }


        printf("%d,%d\n",yes,no);

    }


    return 0;
}



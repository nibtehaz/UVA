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
#include <deque>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

struct Node
{
    bool endMark;
    int child;
    int countt;
    int next[27];

};

Node nodelist[MAX];
int current;

char inp[85];
int total;

void init(int i);
void Insert(int len);
void Compute(int x);

void init(int i)
{
    nodelist[i].child=0;
    nodelist[i].countt=0;
    nodelist[i].endMark=0;

    for(int j=0;j<26;j++)
    {
        nodelist[i].next[j]=-1;
    }
}

void Insert(int len)
{
    int Curr=0;
    int i;
    int id;

    for(i=0;i<len;i++)
    {
        id=inp[i]-'a';

        if(nodelist[Curr].next[id] == -1)
        {
            init(current);
            nodelist[Curr].next[id]=current;
            current++;
            nodelist[Curr].child++;
        }


        Curr=nodelist[Curr].next[id];
        nodelist[Curr].countt++;
    }

    nodelist[Curr].endMark=1;

}

void Compute(int x)
{
    int i;

    int Curr=x;
    bool test;

    rpy:

    total+=nodelist[Curr].countt;
    test=0;
    while(nodelist[Curr].child==1)
    {
        if(nodelist[Curr].endMark==1)
            test=1;
        //printf("Test %d\n",(int)test);
        //DEBUG("stuck")
        for(i=0;i<26;i++)
        {
            if(nodelist[Curr].next[i]!=-1)
            {
                Curr = nodelist[Curr].next[i];
                if(test==1)
                    goto rpy;

                break;
            }
        }
    }

    if(nodelist[Curr].child==0)
        return;

    for(i=0;i<26;i++)
    {
        if(nodelist[Curr].next[i]!=-1)
        {
            Compute(nodelist[Curr].next[i]);
        }
    }


}

void printTrie(int x)
{
    printf("***** Node %d *****\n",x);
    printf("Count %d\n",nodelist[x].countt);
    printf("Childs %d\n",nodelist[x].child);
    printf("Endmark %d\n",(int)nodelist[x].endMark );
    for(int i=0;i<26;i++)
    {
        if(nodelist[x].next[i]!=-1)
        {
            printf("%c %d\n",'a'+i,nodelist[x].next[i]);
        }
    }
}



int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,N;
    //OUTPUT
    //INPUT

    while(scanf("%d",&N)!=EOF)
    {
        total=0;
        current=1;

        init(0);


        for(i=0;i<N;i++)
        {
            scanf("%s",inp);

            Insert(strlen(inp));
        }

        total=0;

        for(i=0;i<26;i++)
        {
            if(nodelist[0].next[i]!=-1)
                Compute(nodelist[0].next[i]);
        }

        //for(i=0;i<current;i++)
            //printTrie(i);


        //DEBUG(total)

        //DEBUG(total)

        printf("%.2f\n",double(total)/N + EPS );

    }


    return 0;
}

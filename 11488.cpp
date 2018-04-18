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
#define INPUT freopen("myInput.txt","r",stdin);
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

struct Node
{
    bool endMark;
    int level;
        int count;
    Node *next[2];

    Node()
    {
        endMark=0;
                level=0;
        for(count=0;count<2;count++)
            next[count]=NULL;
        count=0;
    }
}*Root;

char inp[500];
long long int maxx;

void Insert(int len);
void Clear(Node *node);

void Insert(int len)
{
    Node *Curr=Root;
    int i;
    int id;

    for(i=0;i<len;i++)
    {
        id=inp[i]-'0';

        if(Curr->next[id]==NULL)
        {
            Curr->next[id]=new Node();
            Curr->next[id]->count=0;
            Curr->next[id]->level=i+1;
        }

        Curr=Curr->next[id];
        Curr->count++;
    }

    Curr->endMark=1;
}

void Clear(Node *node)
{
    int i;

    //printf("Level %d Count %d\n",node->level,node->count );

    maxx=BIGGER(maxx,node->level * node->count);

    for(i=0;i<2;i++)
        if(node->next[i]!=NULL)
            Clear(node->next[i]);

    delete(node);
}

int main()
{
    // Bismillahir Rahmanir Rahim
        // Rabbi Zidni Ilma

    int T,N;
    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)
        maxx=0;

        Root = new Node();

        while(N--)
        {
            scanf("%s",inp);

            Insert(strlen(inp));
        }

                Clear(Root);

                printf("%lld\n",maxx);
    }


    return 0;
}

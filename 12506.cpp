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
    int cnt;
    int level;
    Node *next[26];
    bool endMark;

    Node()
    {
        endMark=0;
        level=0;

        for(cnt=0;cnt<26;cnt++)
        {
            next[cnt]=NULL;
        }

        cnt=0;
    }
}*Root;

char inp[1000005];
int total;

void Insert(int len);
void Compute(Node *node);
void Delete(Node *node);

void Insert(int len)
{
    Node *Curr=Root;
    int i;
    int id;

    for(i=0;i<len;i++)
    {
        id=inp[i]-'a';

        if(Curr->next[id]==NULL)
        {
            Curr->next[id]=new Node();
            Curr->next[id]->level=i+1;
        }

        Curr=Curr->next[id];
        Curr->cnt++;
    }

    Curr->endMark=1;
}

void Compute(Node *node)
{
    if(node->cnt==1)
    {
        total+=node->level;
        return;
    }

    for(int i=0;i<26;i++)
    {
        if(node->next[i]!=NULL)
        {
            Compute(node->next[i]);
        }
    }
}

void Delete(Node *node)
{
    for(int i=0;i<26;i++)
        if(node->next[i]!=NULL)
            Delete(node->next[i]);

    delete(node);
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int T,N,i;

    //OUTPUT

    getInt(T)

    while(T--)
    {
        getInt(N)

        total=0;
        Root = new Node();

        for(i=0;i<N;i++)
        {
            scanf("%s",inp);
            Insert(strlen(inp));
        }

        Compute(Root);

        printf("%d\n",total);

        Delete(Root);
    }


    return 0;
}

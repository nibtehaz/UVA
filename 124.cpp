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
#define ppb pop_back

#define INF 1000000000

char nodes[30];
vector <vector<int> > adjList;
int nNodes;
map <int,char> intToChar;
map <char,int> charToInt;
vector <int> solution;
int inDegree[30];
int used[30];
vector <string> ans;

void processSolution();
void backTrack(int n);
void makeCandidates(int candidateArray[],int &ncandidate);

void processSolution()
{
    string temp="";
    for(int i=0;i<nNodes;i++)
    {
        temp+=intToChar[solution[i]];
    }

    ans.pb(temp);

    return;
}

void backTrack(int n)
{
    if(n==nNodes)
    {
        processSolution();
        return;
    }

    int candidateArray[30];
    int ncandidate=0;
    int i,j,len;

    makeCandidates(candidateArray,ncandidate);

    for(i=0;i<ncandidate;i++)
    {
        solution.pb(candidateArray[i]);

        len=adjList[candidateArray[i]].size();

        for(j=0;j<len;j++)
        {
            inDegree[adjList[candidateArray[i]][j]]--;
        }

        used[candidateArray[i]]=1;

        backTrack(n+1);

        solution.ppb();

        for(j=0;j<len;j++)
        {
            inDegree[adjList[candidateArray[i]][j]]++;
        }

        used[candidateArray[i]]=0;
    }
}

void makeCandidates(int candidateArray[],int &ncandidate)
{
    int i;

    for(i=0;i<nNodes;i++)
    {
        if(used[i]==0 && inDegree[i]==0)
        {
            candidateArray[ncandidate++]=i;
        }
    }

    return;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    ios_base::sync_with_stdio(false);

    char inp[MAX],a,b;
    int i,j,nodeA,nodeB,len,tp=1;

    //OUTPUT

    while(gets(inp))
    {
        j=0;

        for(i=0;inp[i];i++)
        {
            if(inp[i]!=' ')
            {
                intToChar[j]=inp[i];
                charToInt[inp[i]]=j;
                j++;
            }
        }

        nNodes=j;

        for(i=0;i<=nNodes;i++)
        {
            inDegree[i]=0;
            adjList.pb({});
        }

        gets(inp);

        a='$';
        b='$';

        for(i=0;inp[i];i++)
        {
            if(inp[i]!=' ')
            {
                if(a=='$')
                {
                    a=inp[i];
                }

                else if(b=='$')
                {
                    b=inp[i];
                }
            }

            if(a!='$' && b!='$')
            {
                adjList[charToInt[a]].pb(charToInt[b]);

                inDegree[charToInt[b]]++;

                a='$';
                b='$';
            }
        }

        for(i=0;i<=nNodes;i++)
            used[i]=0;

        backTrack(0);

        sort(ans.begin(),ans.end());

        len=ans.size();

        if(tp>1)
            cout<<endl;
        tp++;

        for(i=0;i<len;i++)
        {
            cout<<ans[i]<<endl;
        }

        intToChar.clear();
        charToInt.clear();
        adjList.clear();
        solution.clear();
        ans.clear();



    }


    return 0;
}


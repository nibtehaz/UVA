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
#include<map>

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

map <string,int> trees;
map <string,int> :: iterator it;


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int T,tp=1;
    int i,total;
    char inp[40];
    double ratioo;
    string name;

    //OUTPUT

    getInt(T);
    gets(inp);
    gets(inp);

    while(T--)
    {

        if(tp>1)
            printf("\n");
        total=0;
        tp++;

        while(gets(inp))
        {
            if(strlen(inp)==0)
            {
                break;
            }

            name=inp;

            if(trees.find(name)!=trees.end())
            {
                trees[name]++;
                total++;
            }

            else
            {
                trees[name]=1;
                total++;
            }
        }

        for(it=trees.begin();it!=trees.end();it++)
        {
            cout<<it->first;
            ratioo=(it->second*100.0)/(total*1.0);
            printf(" %.4lf\n",ratioo);
        }

        trees.clear();



    }


    return 0;
}

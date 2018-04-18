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

struct organization
{
    string Name;
    int cnt;
};

bool isFirstSmaller(organization a , organization b);

bool isFirstSmaller(organization a , organization b)
{
    if(a.cnt>b.cnt)
        return true;
    else if(a.cnt==b.cnt)
        return a.Name<b.Name;
    else
        return false;
}

vector <organization> finalReport;

map<string,string> formSubmission;
map<string,int> countt;
map<string,int> :: iterator it;
map<string,bool> banned;

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    ios_base::sync_with_stdio(false);

    int i,j;
    char inp[MAX];
    string a,b;
    organization temp;

    //OUTPUT

    while(1)
    {
        gets(inp);
        {
            if(inp[0]=='1')
            {
                for(it=countt.begin();it!=countt.end();it++)
                {
                    temp.Name=it->first;
                    temp.cnt=it->second;

                    finalReport.pb(temp);
                }

                sort(finalReport.begin(),finalReport.end(),isFirstSmaller);

                for(i=0;i<finalReport.size();i++)
                {
                    cout<<finalReport[i].Name<<" "<<finalReport[i].cnt<<endl;
                }

                finalReport.clear();
                countt.clear();
                formSubmission.clear();
                banned.clear();

            }

            else if(inp[0]=='0')
            {
                return 0;
            }

            else if('A'<=inp[0] &&  inp[0]<='Z')
            {
                a=inp;

                if(countt.find(a)==countt.end())
                {
                    countt[a]=0;
                }
            }

            else if('a'<=inp[0] &&  inp[0]<='z')
            {
                b=inp;

                if(formSubmission.find(b)!=formSubmission.end())
                {
                    if(formSubmission[b]==a)
                    {
                        continue;
                    }

                    else
                    {
                        if(banned[b]==false)
                        {
                            countt[formSubmission[b]]--;
                            banned[b]=true;
                        }
                    }
                }

                else
                {
                    formSubmission[b]=a;
                    banned[b]=false;
                    countt[a]++;
                }
            }
        }
    }


    return 0;
}


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

bool memo[22][205];

int n;
int arr[30];
int want;
bool found;

void dp(int index,int amount)
{
    if(amount==want)
    {
        found=1;
    }

    if(index==n)
        return;

    if(memo[index][amount]==1)
        return;

    // not take

    dp(index+1,amount);

    //take

    if(amount+arr[index]<=want)
    {
        dp(index+1,amount+arr[index]);
    }

}


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int T;
    char ch;
    int i,j,pre;

    //OUTPUT
    //INPUT

    getInt(T)

    ch=getchar();

    while(ch!='\n')
    {
        ch=getchar();
    }

    while(T--)
    {
        n=0;
        found=0;
        pre=0;
        want=0;

        while(1)
        {
            ch=getchar();

            if(ch==' ')
            {
                arr[n]=pre;
                want+=pre;
                pre=0;
                n++;
            }

            else if(ch=='\n')
            {
                break;
            }

            else
            {
                pre=pre*10+(ch-'0');
            }
        }

        if(pre!=0)
        {
            arr[n]=pre;
            want+=pre;
            pre=0;
            n++;
        }

        if(want%2!=0)
            printf("NO\n");

        else
        {
            want/=2;

            for(i=0;i<n;i++)
            {
                for(j=0;j<=want;j++)
                {
                    memo[i][j]=0;
                }
            }

            dp(0,0);

            printf("%s\n", found==1 ? "YES" : "NO" );
        }
    }


    return 0;
}

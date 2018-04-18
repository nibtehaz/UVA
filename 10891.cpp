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

struct score
{
    long long int p1;
    long long int p2;
};

int n;
long long int array[1000];
struct score memo[105][105][3];
long long int sum[1000];



int main()
{
    //BisMillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,len,j,player;
    struct score temp;
//OUTPUT
    while(1)
    {
        getInt(n)

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            getLong(array[i])
        }

        sum[0]=0;
        sum[1]=array[0];

        for(i=2; i<=n; i++)
        {
            sum[i]=sum[i-1]+array[i-1];
        }

        for(len=0; len<n; len++)
        {
            for(i=0; i+len<n; i++)
            {
                //player 1
                memo[i][i+len][0].p1=sum[i+len+1]-sum[i];
                memo[i][i+len][0].p2=0;

                for(j=i; j<i+len; j++)
                {
                    temp.p1= sum[j+1] - sum[i] + memo[j+1][i+len][1].p1;
                    temp.p2= 0 + memo[j+1][i+len][1].p2;

                    if(temp.p1>memo[i][i+len][0].p1)
                        //if((temp.p1-temp.p2)>(memo[i][i+len][0].p1-memo[i][i+len][0].p2))
                    {
                        memo[i][i+len][0].p1=temp.p1;
                        memo[i][i+len][0].p2=temp.p2;
                    }

                    else if (temp.p1==memo[i][i+len][0].p1)
                    {
                        if(temp.p2<memo[i][i+len][0].p2)
                        {
                            memo[i][i+len][0].p1=temp.p1;
                            memo[i][i+len][0].p2=temp.p2;
                        }
                    }

                    temp.p1=memo[i][j][1].p1 + sum[i+len+1] - sum[j+1] ;
                    temp.p2=memo[i][j][1].p2 + 0 ;

                    if(temp.p1>memo[i][i+len][0].p1)
                        //if((temp.p1-temp.p2)>(memo[i][i+len][0].p1-memo[i][i+len][0].p2))

                    {
                        memo[i][i+len][0].p1=temp.p1;
                        memo[i][i+len][0].p2=temp.p2;
                    }

                    else if (temp.p1==memo[i][i+len][0].p1)
                    {
                        if(temp.p2<memo[i][i+len][0].p2)
                        {
                            memo[i][i+len][0].p1=temp.p1;
                            memo[i][i+len][0].p2=temp.p2;
                        }
                    }
                }

                //player 2
                memo[i][i+len][1].p2=sum[i+len+1]-sum[i-1+1];
                memo[i][i+len][1].p1=0;

                for(j=i; j<i+len; j++)
                {
                    temp.p1=memo[i][j][0].p1 + 0;
                    temp.p2=memo[i][j][0].p2 + sum[i+len+1] - sum[j+1];

                    if(temp.p2>memo[i][i+len][1].p2)
                        //if((temp.p2-temp.p1)>(memo[i][i+len][1].p2-memo[i][i+len][1].p1))

                    {
                        memo[i][i+len][1].p1=temp.p1;
                        memo[i][i+len][1].p2=temp.p2;
                    }

                    else if (temp.p2==memo[i][i+len][1].p2)
                    {
                        if(temp.p1<memo[i][i+len][1].p1)
                        {
                            memo[i][i+len][1].p1=temp.p1;
                            memo[i][i+len][1].p2=temp.p2;
                        }
                    }

                    temp.p1= 0 + memo[j+1][i+len][0].p1;
                    temp.p2= sum[j+1] - sum[i] + memo[j+1][i+len][0].p2;

                    if(temp.p2>memo[i][i+len][1].p2)
                        //if((temp.p2-temp.p1)>(memo[i][i+len][1].p2-memo[i][i+len][1].p1))

                    {
                        memo[i][i+len][1].p1=temp.p1;
                        memo[i][i+len][1].p2=temp.p2;
                    }

                    else if (temp.p2==memo[i][i+len][1].p2)
                    {
                        if(temp.p1<memo[i][i+len][1].p1)
                        {
                            memo[i][i+len][1].p1=temp.p1;
                            memo[i][i+len][1].p2=temp.p2;
                        }
                    }
                }
            }
        }

        printf("%lld\n",memo[0][n-1][0].p1-memo[0][n-1][0].p2);

        /*{
        int a,b,c;

        for(a=0;a<n;a++)
        {
            for(b=a;b<n;b++)
            {

                for(c=0;c<2;c++)
                printf("(%d,%d,%d)  {%d,%d}\n",a,b,c,memo[a][b][c].p1,memo[a][b][c].p2);
            }

        }
        }*/


    }



    return 0;
}



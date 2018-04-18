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
#define MAX 220005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

struct squareMatrix
{
    int n;
    long long int mat[20][20];

    struct squareMatrix matrixMultiplication(struct squareMatrix A , struct squareMatrix B,long long int mod);
    struct squareMatrix exponentiation (struct squareMatrix base , long long int power,long long int mod);
    struct squareMatrix makeIdentity(int n);
}I,A,B;

struct squareMatrix matrixMultiplication(struct squareMatrix A , struct squareMatrix B , long long int mod)
{
    struct squareMatrix temp;
    int i,j,k;

    for(i=0;i<A.n;i++)
    {
        for(j=0;j<A.n;j++)
        {
            temp.mat[i][j]=0;

            for(k=0;k<A.n;k++)
            {
                temp.mat[i][j] = (temp.mat[i][j] + (A.mat[i][k] * B.mat[k][j])%mod)%mod ;
            }
        }
    }

    temp.n=A.n;

    return temp;
}

struct squareMatrix exponentiation (struct squareMatrix base , long long int power ,long long int mod)
{
    if(power==0)
        return I;

    else if(power==1)
    {
        return base;
    }

    else if(power%2==0)
    {
        struct squareMatrix temp = exponentiation(base,power/2,mod);
        return matrixMultiplication(temp,temp,mod);
    }

    else
    {
        struct squareMatrix temp = exponentiation(base,power/2,mod);
        return matrixMultiplication(matrixMultiplication(temp,temp,mod),base,mod);
    }
}

struct squareMatrix makeIdentity(int n)
{
    int i,j;
    struct squareMatrix temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                temp.mat[i][j]=1;
            else
                temp.mat[i][j]=0;
        }
    }

    temp.n=n;

    return temp;
}

int main()
{
    long long int n,m;
    int d;
    long long int F[30];
    long long int a[30];
    int i,j;
    long long int ans=0;

    //OUTPUT

    while(1)
    {
        getInt(d)
        getLong(n)
        getLong(m)

        if(d==0 && n==0 && m==0)
            break;

        I=makeIdentity(d);

        for(i=1;i<=d;i++)
            getLong(a[i]);

        for(i=0;i<d;i++)
            A.mat[0][i]=a[i+1];

        for(i=1;i<d;i++)
        {
            for(j=0;j<d;j++)
            {
                if(i==j+1)
                    A.mat[i][j]=1;
                else
                    A.mat[i][j]=0;
            }
        }

        A.n=d;

        /*for(i=0;i<d;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d ",A.mat[i][j]);
            }
            printf("\n");
        }

        printf("\n");*/

        for(i=1;i<=d;i++)
            getLong(F[i]);

        if(n<=d)
            printf("%lld\n",F[n]%m);

        else
        {
            B=exponentiation(A,n-d,m);

            ans=0;

            for(i=0;i<d;i++)
            {
                ans = (ans +  ((F[d-i]*B.mat[0][i])%m))%m;
            }

            printf("%lld\n",ans);

        }
    }


    return 0;
}

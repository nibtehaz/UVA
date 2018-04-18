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
    long long int mat[10][10];

    struct squareMatrix matrixMultiplication(struct squareMatrix A , struct squareMatrix B,int mod);
    struct squareMatrix exponentiation (struct squareMatrix base , long long int power,int mod);
    struct squareMatrix makeIdentity(int n);
}I,A,B;

struct squareMatrix matrixMultiplication(struct squareMatrix A , struct squareMatrix B , int mod)
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

struct squareMatrix exponentiation (struct squareMatrix base , long long int power ,int mod)
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
    I=makeIdentity(3);

    A.n=3;
    A.mat[0][0]=1;
    A.mat[0][1]=1;
    A.mat[0][2]=1;

    A.mat[1][0]=1;
    A.mat[1][1]=0;
    A.mat[1][2]=0;

    A.mat[2][0]=0;
    A.mat[2][1]=1;
    A.mat[2][2]=0;

    /*while(1)
    {
        int n;

        getInt(n);
        B=exponentiation(A,n,MOD);

        printf("%d %d\n%d %d\n\n",B.mat[0][0],B.mat[0][1],B.mat[1][0],B.mat[1][1]);
        DEBUG(B.n)
    }*/

    long long int n;

    //OUTPUT

    while(scanf("%lld",&n)!=EOF)
    {

        if(n==0)
            break;

        if(n==1)
            printf("%d\n",0%MOD);
        else if(n==2)
            printf("%d\n",1%MOD);
        else if(n==3)
            printf("%d\n",2%MOD);
        else
        {
            B=exponentiation(A,n-3,MOD);

            printf("%lld\n",(B.mat[0][0]*2+B.mat[0][1])%MOD);
        }
    }

    return 0;
}

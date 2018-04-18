/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int check_square(int n);

int main()
{


    int i,p,num,T,use,dp[55]={0,};

    for(p=1;p<=50;p++)
    {
        int peg[100]={0,};
        num=2;
        use=1;
        peg[0]=1;

        while(1)
        {
            for(i=0;i<use;i++)
            {
                if(check_square(peg[i]+num)==1)
                {
                    peg[i]=num;
                    num++;
                    i=-1;
                }

            }

            if(use<p)
            {
                peg[use]=num;
                num++;
                use++;
            }
            else
                break;
        }

        dp[p]=num-1;
    }

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&p);
        printf("%d\n",dp[p]);

    }

    return 0;
}


int check_square(int n)
{
    int p=sqrt(n);

    if(p*p==n)
        return 1;
    p++;
    if(p*p==n)
        return 1;


    return 0;
}

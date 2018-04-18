/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005


int main()
{
    long long int T,N,plant[500][2],max,power,total,i,j,key[2],tp=1;

    scanf("%lld",&T);

    while(T--)
    {
        scanf("%lld",&N);

        total=0;
        max=0;

        for(i=0;i<N;i++)
        {
            scanf("%lld%lld",&plant[i][0],&plant[i][1]);
            total+=plant[i][0];
        }

        for(i=0;i<N;i++)
        {
            key[0]=plant[i][0];
            key[1]=plant[i][1];

            for(j=i-1;j>=0;j--)
            {
                if(key[1]<plant[j][1])
                {
                    plant[j+1][0]=plant[j][0];
                    plant[j+1][1]=plant[j][1];
                }
                else
                    break;
            }
            plant[j+1][0]=key[0];
            plant[j+1][1]=key[1];
        }

        for(i=0;i<N;i++)
        {
            power=total * plant[i][1];
            total-=plant[i][0];

            if(power>max)
                max=power;
        }

        printf("Case %lld: %lld\n",tp,max);

        tp++;


    }


    return 0;

}

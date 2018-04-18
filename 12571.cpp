/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
	int T,N,Q,max,i,j,a,andd;
	long long int input;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d",&N,&Q);
        int bank[300]={0,};
        int answer[300]={0,};

        for(i=0;i<N;i++)
        {
            scanf("%lld",&input);
            bank[ input & 255 ]=1;
        }

        for(a=0;a<235;a++)
        {
            max=0;
            for(i=0;i<=255;i++)
            {
                if(bank[i]==1)
                {
                    andd=i&a;

                    if(andd>max)
                        max=andd;
                }
            }
            answer[a]=max;

        }


        while(Q--)
        {
            scanf("%d",&a);


            printf("%d\n",answer[a]);

        }
    }

    return 0;

}


/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005



int main()
{
    int w1,w2,m1,m2,h,m,N,tp=1;

    scanf("%d",&N);

    while(N--)
    {
        scanf("%d:%d",&h,&m);
        w1=h*60+m;
        scanf("%d:%d",&h,&m);
        w2=h*60+m;
        //if(w2<w1)
            //w2+=1440;
        scanf("%d:%d",&h,&m);
        m1=h*60+m;
        scanf("%d:%d",&h,&m);
        m2=h*60+m;
        //if(m2<m1)
            //m2+=1440;

        if(m2<w1||w2<m1)
            printf("Case %d: Hits Meeting\n",tp);
        else
            printf("Case %d: Mrs Meeting\n",tp);

        tp++;
    }


    return 0;
}


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
    long long int T,tp=1,x1,x2,y1,y2,base1,base2,pos1,pos2,upto_base1, upto_base2;

    scanf("%lld",&T);

    while(T--)
    {
        scanf("%lld%lld%lld%lld",&y1,&x1,&y2,&x2);

        base1=x1+y1;
        pos1=y1;
        upto_base1=(base1*(base1+1))/2;

        base2=x2+y2;
        pos2=y2;
        upto_base2=(base2*(base2+1))/2;

        printf("Case %lld: %lld\n",tp,pos2+upto_base2-pos1-upto_base1 );
        tp++;
    }



}



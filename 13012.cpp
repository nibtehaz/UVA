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
    int T,Ans,i,cnt;

    while(scanf("%d",&T)!=EOF)
    {
        cnt=0;
        for(i=0;i<5;i++)
        {
            scanf("%d",&Ans);
            if(Ans==T)
               cnt++;
        }
        printf("%d\n",cnt);
    }

    return 0;

}


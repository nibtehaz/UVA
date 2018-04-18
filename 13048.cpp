/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 1000005



int main()
{
    int T,tp=1,cnt,i,len;
    char inp[MAX];

    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",inp);

        len=strlen(inp);
        cnt=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]!='D' && inp[i]!='B' && !(i<(len-1) && inp[i+1]=='B') && !(i<(len-2) && inp[i+2]=='B') && inp[i]!='S' && !(i<(len-1) && inp[i+1]=='S') && !(i>0 && inp[i-1]=='S') )
                cnt++;
        }

        printf("Case %d: %d\n",tp,cnt);
        tp++;
    }

    return 0;

}


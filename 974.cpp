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

int ans[100]={9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962,77778,};


int main()
{
	int T,tp=1,inf,sup,cnt,i;

	scanf("%d",&T);

	while(T--)
    {
        if(tp>1)
            printf("\n");
        scanf("%d%d",&inf,&sup);

        if(inf>sup)
        {
            inf=inf^sup;
            sup=inf^sup;
            inf=inf^sup;
        }

        cnt=0;
        printf("case #%d\n",tp);
        tp++;

        for(i=0;i<20;i++)
        {
            if(ans[i]<=sup&&ans[i]>=inf)
            {
                cnt=1;
                printf("%d\n",ans[i]);
            }
            if(ans[i]>sup)
                break;
        }
        if(cnt==0)
            printf("no kaprekar numbers\n");
    }


    return 0;

}


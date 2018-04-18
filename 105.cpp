#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int sky[10005]={0,},le,hi,ri,i,max=0,cur;
    while(scanf("%d%d%d",&le,&hi,&ri)!=EOF)
    {
        for(i=le;i<ri;i++)
            if(hi>=sky[i]) sky[i]=hi;

            if(ri>=max) max=ri;
    }

    for(i=0;i<max;i++)
    {
        if(sky[i]!=0) break;
    }
    cur=sky[i];
    printf("%d %d ",i,cur);
    for(;i<max;i++)
    {
        if(sky[i]==cur) continue;

        else
        {
           cur=sky[i];
           printf("%d %d ",i,cur);
        }
    }
    printf("%d %d\n",i,0);

    return 0;

}

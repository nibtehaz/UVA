#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int t,k,pre,h,m,arr,len,min,temp,tp=1;

    scanf("%d",&t);
   
    while(t--)
    {
        scanf("%d",&k);
        scanf("%d:%d",&h,&m);
        pre=h*60+m;

        scanf("%d:%d",&h,&m);
        arr=h*60+m;

        if(arr<pre)
            arr+=1440;

        scanf("%d",&len);
        min=len+arr-pre;

        k--;

        while(k--)
        {
            scanf("%d:%d",&h,&m);
            arr=h*60+m;

            if(arr<pre)
                arr+=1440;

            scanf("%d",&len);

            temp=len+arr-pre;

            if(min>temp)
                min=temp;
        }
        printf("Case %d: %d\n",tp,min);
        tp++;

    }

    return 0;
}

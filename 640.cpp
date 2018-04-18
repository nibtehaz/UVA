/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


    int state[1000001];

int main()
{
    int sum,temp,i;


    for(i=1;i<1000001;i++)
    {
        sum=i;
        temp=i;

        for(;;)
        {
            sum+=temp%10;
            temp=temp/10;
            if(temp==0) break;
        }
        if((sum)<1000001)state[sum]=1;
    }

     for(i=1;i<1000001;i++)
     {
         if(state[i]==0)
            printf("%d\n",i);
     }



    return 0;
}


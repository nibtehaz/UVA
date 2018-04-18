/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int N,i,nega;
   long long int sum,max,bet[100000];

   while(1)
   {
       scanf("%d",&N);

       if(N==0) break;

       nega=1;
       for(i=0;i<N;i++)
       {
           scanf("%lld",&bet[i]);
           if(bet[i]>0) nega=0;
       }

       if(nega==1)
       {
           printf("Losing streak.\n");
       }

       else
       {
           sum=0;
           max=0;

           for(i=0;i<N;i++)
           {
               sum+=bet[i];

               if(sum>max)
                max=sum;

               if(sum<0)
                sum=0;



           }

           printf("The maximum winning streak is %lld.\n",max);
       }



   }

    return 0;
}


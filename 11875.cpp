#include<stdio.h>

int main ()
{
   int t,N,array[9],i,j;

   scanf("%d",&t);

   for(j=1;j<=t;j++)
   {
       scanf("%d",&N);
       for(i=0;i<N;i++)
        scanf("%d",&array[i]);


       N/=2;
       printf("Case %d: %d\n",j,array[N]);


   }

   return 0;


}

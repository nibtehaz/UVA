#include<stdio.h>

int main ()
{
   int i,j,max,cnt,num; /*Let i to be less than j */

   while(scanf("%d %d",&i,&j)!=EOF)
   {

       printf("%d %d ",i,j);

       if(i>j) {max=i; i=j; j=max; }


       max=0;


       for(;i<=j;i++)
       {


           num=i;

           cnt=0;
           for(;;)
           {
               if (num==1) {cnt++;  break;}
               else if(num%2==0) {num=num/2; cnt++; }
               else {num=3*num+1; cnt++;   }
           }
           if(max<cnt) max=cnt;
       }
       printf("%d\n",max);
   }



   return 0;


}

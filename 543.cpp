#include<stdio.h>

int main ()
{

   int n,a,b,factor,i;
   for(;;)
   {
       scanf("%d",&n);
       if(n==0) break;

       else
       {
           /* finding smallest prime for it */

           for(a=3;;a+=2)
           {
               factor=0;
               for(i=3;i<(a/2);i+=2)
               {
                   if(a%i==0)  { factor=1; break;   }

                   else continue ;



               }
               if(a==n-1) {printf("Goldbach's conjecture is wrong.\n"); break; }
               if(factor==1) continue ;

               /* checking if it's counter part is prime */

               b=n-a;


               factor=0;
               for(i=3;i<(b/2);i+=2)
               {
                   if(b%i==0)  { factor=1; break;   }

                   else continue ;


                }

               if(factor==1) continue ;

              else {
               printf("%d = %d + %d\n",n,a,b);
               break ;
              }

           }












           }








       }
       return 0;
   }



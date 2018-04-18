#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   unsigned long long int  a[4],key;
   int t,i,j;

   scanf("%d",&t);

   while(t--)
   {
       for(i=0;i<4;i++)
       {
           scanf("%llu",&a[i]);

           key=a[i];

           for(j=i-1;j>=0;j--)
           {
                if(a[j]<=key) break;
               else {a[j+1]=a[j];}
           }
           a[j+1]=key;

       }

       if( (a[0]==a[1])&&(a[2]==a[3])  )
       {
           if(a[0]==a[2])
            printf("square\n");
           else printf ("rectangle\n");
       }

       else
       {

           if(a[3]<(a[0]+a[1]+a[2])) printf("quadrangle\n");
           else printf("banana\n");
       }
   }


    return 0;

}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,D,M,din;
    char cal[12][20]={"Friday", "Saturday", "Sunday","Monday", "Tuesday","Wednesday", "Thursday" };

   scanf("%d",&t);
   while(t--)
   {
       scanf("%d%d",&M,&D);

       switch(M)
       {
           case 1 :
               din=D;
               break;
           case 2:
                din=31+D;
                break;
           case 3:
                din=59+D;
                break;
           case 4:
                din=90+D;
                break;
           case 5:
                din=120+D;
                break;
           case 6:
                din=151+D;
                break;
           case 7:
                din=181+D;
                break;
           case 8:
                din=212+D;
                break;
           case 9:
                din=243+D;
                break;
           case 10:
                din=273+D;
                break;
           case 11:
                din=304+D;
                break;
           case 12:
                din=334+D;
                break;
       }

       printf("%s\n",cal[(din%7)]);
   }

    return 0;
}

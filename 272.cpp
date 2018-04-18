#include<stdio.h>
#include<string.h>
int main()
{
   char s;
   int test=0;

   while((s=getchar())!=EOF)
   {

           if((test==0)&&(s=='"')) { printf("``"); test=1;}
           else if((test==1)&&(s=='"')) { printf("''"); test=0;}
           else printf("%c",s);
       }



    return 0;
}


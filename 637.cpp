#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int page,sheet,print[300][4],i,cur;

    while(1)
    {
        scanf("%d",&page);
        if(page==0) break;

        sheet=page/4;
        if(page%4!=0) sheet++;
        cur=1;

        for(i=0;i<sheet;i++)
        {
            print[i][1] =cur;
            print[i][2]=cur+1;
            cur+=2;
        }

        for(i=sheet-1;i>=0;i--)
        {
            print[i][3] =cur;
            print[i][0]=cur+1;
            cur+=2;
        }
       printf("Printing order for %d pages:\n",page);

        if(page==1)
            printf("Sheet 1, front: Blank, 1\n");
     else{
         for(i=0;i<sheet;i++)
         {
             printf("Sheet %d, front: ",i+1);
             if(print[i][0]>page) printf("Blank, ");
             else   printf("%d, ",print[i][0]);
             if(print[i][1]>page) printf("Blank\n");
             else   printf("%d\n",print[i][1]);

             printf("Sheet %d, back : ",i+1);

             if(print[i][2]>page) printf("Blank, ");
             else   printf("%d, ",print[i][2]);
             if(print[i][3]>page) printf("Blank\n");
             else   printf("%d\n",print[i][3]);

         }


        }

    }
    return 0;
}

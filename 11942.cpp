#include<stdio.h>

int main()
{
    int t,line[10],i;

    scanf("%d",&t);
    printf("Lumberjacks:\n");

    for(;t;t--)
    {


        for(i=0;i<10;i++)
        {
            scanf("%d",&line[i]);
        }
        if(line[0]>line[1])
        {


                for(i=1;i<9;i++)
            {
                if(line[i]>line[i+1]) continue ;
                else break;
            }
                if(i==9) { printf("Ordered\n"); }
                else printf("Unordered\n");
        }
        else
        {


                for(i=1;i<9;i++)
            {
                if(line[i]<line[i+1]) continue ;
                else break;
            }
                if(i==9) { printf("Ordered\n"); }
                else printf("Unordered\n");
        }





    }



    return 0;
}

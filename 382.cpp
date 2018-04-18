#include<stdio.h>

int main ()
{
    int num,sum,space,i;

    printf("PERFECTION OUTPUT\n");
    for(;;)
    {
        sum=0;
        space=0;
        scanf("%d",&num);
        if(num==0)
        {
            printf("END OF OUTPUT\n");
            break;

        }
        else
        {


        for(i=1;i<num;i++)
        {
            if(num%i==0) sum+=i;
        }



        if(num>=10000) space=0;
        else if(num>=1000) space=1;
        else if(num>=100) space=2;
        else if(num>=10) space=3;
        else if(num>=1) space=4;

        for(;space;space--) printf(" ");
        printf("%d  ",num);

        if(num==sum) printf("PERFECT\n");
        else if(num<sum) printf("ABUNDANT\n");
        else printf("DEFICIENT\n");




    }

    }

    return 0;
}

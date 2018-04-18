#include<stdio.h>
#include<string.h>
int main()
{
    int array[10],num,i,test;
    char s1[10],s2[10];

    for(;;)
    {
        scanf("%d",&num);
        if(num==0) break;

        else
            {
                test=1;
                int array[10]={0,};

                scanf("%s %s",s2,s1);
                if(!strcmp(s1,"high")) array[num-1]=1;
                else if(!strcmp(s1,"low")) array[num-1]=-1;
                else if(!strcmp(s1,"on")) { printf("Stan may be honest\n"); continue; }



                while(1)
                {
                     scanf("%d",&num);
                     scanf("%s %s",s2,s1);
                     if(!strcmp(s1,"high")) { if(array[num-1]==-1) test=0; array[num-1]=1;}
                     else if(!strcmp(s1,"low")){if(array[num-1]==1) test=0; array[num-1]=-1;}
                     else if(!strcmp(s1,"on")) { if(array[num-1]!=0) test=0; break; }

                }

                for(i=0;i<=num-1;i++)
                    if(array[i]>0) test =0;
                for(;i<10;i++)
                if(array[i]<0) test =0;


                if(test==0)  printf("Stan is dishonest\n");
                else printf("Stan may be honest\n");
                continue;

            }





    }

    return 0;
}



#include<stdio.h>
#include<string.h>

int main()
{
    char str[5];
    int n,t,test,i;

    scanf("%d",&t);
    while(t--)
    {

        scanf("%s",str);
        n=strlen(str);

        if(n==5)
        {
            printf("%d\n",3);
        }

        else if(n==3)
        {
            test=0;

            {
                if(str[0]=='t') test++;
                if(str[1]=='w') test++;
                if(str[2]=='o') test++;

            }

            if(test>=2)

                printf("%d\n",2);


            test=0;

            {
                if(str[0]=='o') test++;
                if(str[1]=='n') test++;
                if(str[2]=='e') test++;

            }

            if(test>=2)
                printf("%d\n",1);







        }
    }




    return 0;
}


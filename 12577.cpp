#include<stdio.h>
#include<string.h>

int main()
{

    int Case=1;
    char in[10];



    for(;;)
    {
        scanf("%s",in);
        if((strcmp(in,"*"))==0) break ;

        else

        {

            if(!(strcmp(in,"Hajj")))  printf("Case %d: Hajj-e-Akbar\n",Case);
            else if (!(strcmp(in,"Umrah"))) printf("Case %d: Hajj-e-Asghar\n",Case);
            Case++;
        }





    }

    return 0;
}


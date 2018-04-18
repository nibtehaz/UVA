#include<stdio.h>
#include<string.h>

int main()
{
    int T,Fund=0,add;
    char setu[20];

    scanf("%d",&T);

    for(;T;T--)
    {

     scanf("%s",setu);

     if(!(strcmp(setu,"report")))  printf("%d\n",Fund);

     else {scanf("%d",&add);  Fund+=add; }




    }


    return 0;
}


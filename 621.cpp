#include<stdio.h>
#include<string.h>

int main()
{
    int T,n;
    char number[1000];

    scanf("%d",&T);

    for(;T;T--)
    {
        scanf("%s",number);
        n=strlen(number);
        if((!(strcmp(number,"1")))||(!(strcmp(number,"4")))||(!(strcmp(number,"78"))))  printf("+\n");
        else if((number[n-2]=='3')&&(number[n-1]=='5')) printf("-\n");
        else if((number[0]=='9')&&(number[n-1]=='4')) printf("*\n");
        else if((number[0]=='1')&&(number[1]=='9')&&(number[2]=='0')) printf("?\n");
    }

    return 0;
}


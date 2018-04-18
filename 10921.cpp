#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int i,n;
    char num[50];

    while(scanf("%s",num)!=EOF)
    {
        n=strlen(num);

        for(i=0;i<n;i++)
        {
            if(num[i]=='0') printf("0");
            else if (num[i]=='1') printf("1");
            else if((num[i]=='A')||(num[i]=='B')||(num[i]=='C')) printf("2");
            else if((num[i]=='D')||(num[i]=='E')||(num[i]=='F')) printf("3");
            else if((num[i]=='G')||(num[i]=='H')||(num[i]=='I')) printf("4");
            else if((num[i]=='J')||(num[i]=='K')||(num[i]=='L')) printf("5");
            else if((num[i]=='M')||(num[i]=='N')||(num[i]=='O')) printf("6");
            else if((num[i]=='P')||(num[i]=='S')||(num[i]=='R'||(num[i]=='Q'))) printf("7");
            else if((num[i]=='T')||(num[i]=='U')||(num[i]=='V')) printf("8");
            else if((num[i]=='Y')||(num[i]=='X')||(num[i]=='Z')||(num[i]=='W')) printf("9");
            else if(num[i]=='-') printf("-");

        }
        printf("\n");

    }

    return 0;
}


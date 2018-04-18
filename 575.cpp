#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int i,n,k;
    long long int sum;
    char inp[200];

    while(1)
    {
        scanf("%s",inp);

        if(!strcmp(inp,"0")) break;

        sum=0;
        n=strlen(inp);
        for(i=n-1,k=1;i>=0;i--,k++)
        {
            sum+=(inp[i]-48) * (pow(2,k)-1);
        }

        printf("%lld\n",sum);




    }


    return 0;
}

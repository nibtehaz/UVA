#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int check(int num)
{
    int dig[11]={0,};
    int mod;

    for(;;)
    {
        mod=num%10;
        if(dig[mod]==0)
        {
            dig[mod]++;
        }
        else
            return 0;

        num/=10;
        if(num==0)
            break;
    }

    return 1;

}

int main()
{
    int a,b,i,cnt,bank[6000];

    for(i=0;i<6000;i++)
    {
        bank[i]=check(i);
    }

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        cnt=0;

        if(a>b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }

        for(i=a;i<=b;i++)
        {
            if(bank[i]==1)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}



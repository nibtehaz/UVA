#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factor[2600];
long long int digit[1005];
int main()
{
    long long int num,digi,i,j,carry;

    factor[0]=1;
    digit[1]=1;

    for(i=2;i<1001;i++)
    {
        carry=0;
        for(j=0;j<2601;j++)
        {
            factor[j]=(factor[j]*i)+carry;

            if(factor[j]>9)
            {
                carry=factor[j]/10;
                factor[j]%=10;
            }

            else
            {
                carry=0;
            }

            digit[i]+=factor[j];
        }


    }





    while(scanf("%lld",&num)!=EOF)
    {
       printf("%lld\n",digit[num]);

    }
    return 0;
}


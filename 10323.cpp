#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int num,fact,i;

    while(scanf("%lld",&num)!=EOF)
    {
        fact=1;

        while(num>0)
        {
            fact*=num;
            num--;
            if(fact>6227020800) break;
        }

        if((fact>6227020800)||((num<0)&&((-num)%2==1))) printf("Overflow!\n");
        else if((fact<10000)||((num<0)&&((-num)%2==0))) printf("Underflow!\n");
        else printf("%lld\n",fact);
    }


    return 0;
}

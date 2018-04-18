#include<stdio.h>

int main()
{
    long long int a,b,c,max;

    for(;;)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(!a&&!b&&!c) break;

        else
            {
               
                    if(b*b==(c*c)+(a*a)) printf("right\n");
                else if(c*c==(b*b)+(a*a)) printf("right\n");
                else if(a*a==(c*c)+(b*b)) printf("right\n");
                else  printf("wrong\n");

            }


    }

    return 0;




}
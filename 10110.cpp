#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    unsigned long long int n,m;

    for(;;)
    {
        scanf("%llu",&n);
        if(n==0) break;

        else
        {
            m=sqrt(n);
        if(m*m==n) printf("yes\n");
        else printf("no\n");

        }
    }


    return 0;
}




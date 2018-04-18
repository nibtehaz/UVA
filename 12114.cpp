#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long int gcd (long long int a , long long int b);

int main()
{
    int a,b,tp=1;;

    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
            break;

        if(a==1)
            printf("Case %d: :-\\\n",tp);
        else if(a>b)
            printf("Case %d: :-(\n",tp);
        else
            printf("Case %d: :-|\n",tp);
        tp++;


    }


    return 0;

}

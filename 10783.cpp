#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,b,i,sum;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);

        if(a%2==0)a++;
        if(b%2==0)b--;
        sum=(a+b)*(b-a+2)/4;
        printf("Case %d: %d\n",i,sum);

    }

    return 0;
}



#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int bin1 (int n);

int main()
{
    int ca,t,n;
    long long int a,b,c,d;

    scanf("%d",&ca);

    while(ca--)
    {
        getchar();
        scanf("%d%d",&t,&n);
        while(t--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

        if((a==c)&&(b==d)) printf("%d\n",0);

        else if(abs(a-c)==abs(b-d)) printf("%d\n",1);

        else if( ((a+b)%2)== ((c+d)%2)) printf("%d\n",2);

        else printf("no move\n");

    }
    }

    return 0;

}

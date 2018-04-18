#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int bin1 (int n);

int main()
{
    int t,i,n,h,num,b1,b2,dig;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        b1=bin1(n);

        num=n;
        h=0;
        for(i=1;;i++)
        {
            dig=num%10;
            h+=dig*pow(16,i-1);
            num/=10;
            if(num==0) break;
        }
        b2=bin1(h);
        printf("%d %d\n",b1,b2);

    }



    return 0;

}


int bin1 (int n)
{
    int num=n;
    int cnt=0;

    for(;;)
    {
        if(num%2==1) cnt++;
        num=num/2;
        if(num==0) break;
    }
    return cnt;
}


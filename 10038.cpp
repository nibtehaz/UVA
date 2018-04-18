#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int gcd (int a ,int b);

int main()
{
    int n,a,b,c,arr[5000],i,cnt;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
        {
            scanf("%d",&a);
            printf("Jolly\n");
            continue;
        }
        cnt=0;
        for(i=0;i<n;i++)
            arr[i]=0;

        scanf("%d",&a);

        for(i=1;i<n;i++)
        {
            scanf("%d",&b);
            c=abs(a-b);
            if((arr[c]==0)&&(c<n))
            {
                arr[c]=1;
                cnt++;
            }
            a=b;
        }

        if(cnt==n-1)
            printf("Jolly\n");

        else
            printf("Not jolly\n");
    }


    return 0;
}



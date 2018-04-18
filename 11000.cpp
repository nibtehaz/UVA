#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    unsigned long long int fibo[60]={0,1,} ,m,f;
    int i ,  year;
    while(scanf("%d",&year)!=EOF)
    {
        if(year==-1) break;
        m=0;
        f=0;
        for (i=2;i<=year+1;i++)
        {
            if(fibo[i]!=0) continue;
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
       for(i=1;i<=year;i++)
        {
            m+=fibo[i];
            f+=fibo[i-1];

        }
        f+=m+1;

        printf("%llu %llu\n",m,f);
    }



    return 0;
}


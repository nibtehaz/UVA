#include<stdio.h>

int main ()
{
    int n,k,ans,m;
    while (scanf("%d %d",&n,&k)!=EOF)
    {
        ans=n;
        for(;(n/k)!=0;)
        {
            m=n%k;
            n=(n/k);
            ans+=n;
            n+=m;

        }

        printf("%d\n",ans);
    }



    return 0;
}

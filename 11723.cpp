#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,i=1,ans;

    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0&&n==0) break;

        if(r<=n) printf("Case %d: %d\n",i,0);

        else {
        r=r-n;
        ans=r/n;


        if(r%n!=0) ans++;

        if(ans<=26) printf("Case %d: %d\n",i,ans);

        else printf("Case %d: impossible\n",i);
        }

        i++;

    }





    return 0;

}

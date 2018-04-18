#include<stdio.h>
int main()
{
   int t,n,calc,ans;

   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       calc=(((n*567/9)+7492)*235/47)-498;
       ans=(calc%100)/10;
       if(ans<0) ans=-ans;
       printf("%d\n",ans);
   }

    return 0;
}


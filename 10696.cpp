#include<stdio.h>
#include<string.h>

int f91 (int n);
int main()
{
   int n,m,ans;

   for(;;)
   {
       scanf("%d",&n);

       if(n==0) break;

       else
        {
            ans=f91(n);

            printf("f91(%d) = %d\n",n,ans);

        }

   }

    return 0;
}

int f91(int n)
{
    if(n>=101) return (n-10);
    else return f91(f91(n+11));
}


#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,i,t;
    
    scanf("%llu",&t);
    
    while(t--)
    {
        scanf("%llu",&n);
        
        i=((-1+sqrt(1+8*n))/2);
      
            printf("%llu\n",i);
    }
    return 0;    
}


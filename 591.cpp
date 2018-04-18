#include <stdio.h>
#include<math.h>
#include<string.h>


int main(void) 
{
    int n,t=1,h[500],mean,ans,abs,i;
    
    while(t)
    {
        if(t>1) printf("\n");
        scanf("%d",&n);
        if(n==0) break;
        mean=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            mean+=h[i];
        }
        mean/=n;
        
        for(i=0;i<n;i++)
        {
            abs= (h[i]-mean);
            if(abs<0) abs=-abs;
            ans+=abs;
        }
        
        ans/=2;
        printf("Set #%d\nThe minimum number of moves is %d.\n" , t,ans );        
        t++;
        
    
    }
    
    
    return 0;
 }


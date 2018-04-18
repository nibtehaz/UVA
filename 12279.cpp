#include<stdio.h> 
int main()
{
    int t=1,n,i,cnt;
    for(;;)
    {
        scanf("%d",&n);
        
        if(n==0) break;
        
        else
        {
            cnt=0;
            for(;n;n--)
            {
                scanf("%d",&i);
                if(i==0) cnt--;
                else cnt++;
                
            }
            
            printf("Case %d: %d\n",t,cnt);
            t++;
            
            
        }
        
    }
    return 0;
    
}

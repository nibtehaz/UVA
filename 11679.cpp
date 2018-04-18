#include<stdio.h> 
int main()
{
    int b,n,taka[20],i,dibe,pabe,bill,test;
     
    for(;;)
    {
        scanf("%d %d",&b,&n);
        
        if(n==0&&b==0) break;
        
        else
        {
            test =1;
            for(i=0;i<b;i++)
            scanf("%d",&taka[i]);
            
            for(i=0;i<n;i++)
            {
                scanf("%d %d %d",&dibe,&pabe,&bill);
                taka[dibe-1]-=bill;
                taka[pabe-1]+=bill;    
            }
            
            for(i=0;i<b;i++)
            {
                if(taka[i]<0) { test=0; break; }
            }
            if(test) printf("S\n");
            else printf("N\n");
                        
            
        }
            
    }
    
    return 0;
    
}

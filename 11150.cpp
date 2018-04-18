#include<stdio.h>

int main()
{
    int khaisi,khali,cola;
    
    while(scanf("%d",&cola)!=EOF)
    
    {
        khaisi=cola;
        khali=cola;
        for(;;)
        {
            
            cola=khali/3;
            khaisi+=cola;
            khali=(khali%3)+cola;
            if((khali)==2) {khaisi++; break;}
            
            if((cola==0)) { break;}
                   
        }
        printf("%d\n",khaisi);
        
    }
    
    return 0;
    
}

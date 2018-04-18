#include <stdio.h>
#include<math.h>
#include<string.h>

int main(void) 
{
    int n,alpha[26],i,max;
    char ch;
    
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<26;i++) alpha[i]=0;
        max=0;
        getchar();
        for(;;)
        {
            ch=getchar();
            
            if((65<=ch)&&(ch<=90))
            {
                alpha[ch-65]++;
                if(alpha[ch-65]>max) max=alpha[ch-65];
            
            }  
            
            else if ((97<=ch)&&(ch<=122))
            
            {
                alpha[ch-97]++;
                if(alpha[ch-97]>max) max=alpha[ch-97];
            
            }
            
            else if(ch=='\n') n--;
            if(n==0) break;

        }
        
        for(;max>0;max--)
        {
            for(i=0;i<26;i++)
            {
                if(alpha[i]==max)
                {
                    printf("%c %d\n",65+i,max);
                }
            }
        }
        
        
    }
    
    return 0;
}


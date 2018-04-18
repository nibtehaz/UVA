#include<stdio.h> 
#include<string.h>
int main()
{
    int t,M,F,i;
    char inp[2000];
    
    scanf("%d",&t);
    gets(inp);
    
    for(;t;t--)
    {
        F=0,M=0;
        gets(inp);
        for(i=0;inp[i];i++)
        {
            if(inp[i]=='F') F++;
            else if(inp[i]=='M') M++;
        }
        
        if(M==1&&F==1) printf("NO LOOP\n");
        else if(M!=F) printf("NO LOOP\n");
        else printf("LOOP\n");
        
    }
    return 0;
    
}

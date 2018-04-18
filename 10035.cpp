#include <stdio.h>
#include<math.h>
#include<string.h>


int main(void) 
{
    char a[15],b[15];
    int i,j,n1,n2,carry,cnt,c;
    
    
    for(;;)
    {
        scanf("%s%s",a,b);
        if((!strcmp(a,"0"))&&(!strcmp(b,"0"))) break;
        
        n1=strlen(a);
        n2=strlen(b);
        
        cnt=0;
        carry=0;
        
        for(i=n1-1,j=n2-1;;i--,j--)
        {
            if(i>=0&&j>=0)
            c=a[i]+b[j]-96+carry;
            
            else if(i>=0)
            c=a[i]-48+carry;
            
            else if(j>=0)
            c=b[j]-48+carry;
            
            else break;
            
            if(c>9)
            {
                carry=1;
                cnt++;
            }
            
            else
                carry=0;
            
        }
        
        if(cnt==0)
        printf("No carry operation.\n");
        else if(cnt==1)
        printf("1 carry operation.\n");
        else printf("%d carry operations.\n",cnt);
    
    }
    
    return 0;
 }


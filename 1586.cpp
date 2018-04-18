#include<stdio.h>
#include<string.h>

int main()
{
 char form[100];
    int num,t,i,n;
    double mass;
    
    scanf("%d",&t);
    while(t--)
    {
        mass=0.0;
        scanf("%s",form);
        n=strlen(form);
        
        for(i=0;i<n;i++)
        {
        if(form[i]=='C')
    {if(((i+2)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9')&& ('0'<=form[i+2])&&(form[i+2]<='9') )    {num=(form[i+1]-'0')*10+ (form[i+2]-'0'); i=i+2;}
else if(((i+1)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9') )  {num= (form[i+1]-'0'); i++; }
else num=1;
mass+=12.01*num;
               
}

else if(form[i]=='O')
    {if( ( (i+2)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9')&& ('0'<=form[i+2])&&(form[i+2]<='9') )    {num=(form[i+1]-'0')*10+ (form[i+2]-'0'); i=i+2;}
else if( ( (i+1)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9') )  {num= (form[i+1]-'0'); i++; }
else num=1;
mass+=16.00*num;
               
}

else if(form[i]=='H')
    {if( ((i+2)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9')&& ('0'<=form[i+2])&&(form[i+2]<='9') )    {num=(form[i+1]-'0')*10+ (form[i+2]-'0'); i=i+2;}
else if( ((i+1)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9') )  {num= (form[i+1]-'0'); i++; }
else num=1;
mass+=1.008*num;
               
}
 
else if(form[i]=='N')
    {if(( (i+2)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9')&& ('0'<=form[i+2])&&(form[i+2]<='9') )    {num=(form[i+1]-'0')*10+ (form[i+2]-'0'); i=i+2;}
else if( ((i+1)<n)&& ('0'<=form[i+1])&&(form[i+1]<='9') )  {num= (form[i+1]-'0'); i++; }
else num=1;
mass+=14.01*num;
               
}        
    }
        
 printf("%.3lf\n",mass);       
        
        
    }
return 0;
}

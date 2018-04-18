#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    unsigned long long int a,b,sum;
    int t,Loop,i,n,j,test;
    char inp[15];
    char temp[15];
    scanf("%d",&t);

    while(t--)
    {
        Loop=1;
        scanf("%s",inp);

        if(!strcmp(inp,"0")) {  printf("1 0\n"); continue;  }



n=strlen(inp);

        while(1)
        {
            a=0;
            b=0;
            for(i=0;i<n;i++)
            {
                a=10*a+(inp[i]-'1'+1);
                b=10*b+(inp[n-1-i]-'1'+1);
            }
            sum=a+b;
            for(i=0;;i++)
            {
                inp[i]='1'+(sum%10)-1;
                sum=sum/10;
                if(sum==0) break;
            }
            n=i+1;

            test=1;
            for(i=0;i<n;i++)
            if(inp[i]!=inp[n-1-i]) {test=0; break;}


            if(test) {break;}
            else {Loop++ ; continue;}

        }
        printf("%d ",Loop);
        for(i=0;i<n;i++)
            printf("%c",inp[i]);
        printf("\n");



    }


    return 0;
}


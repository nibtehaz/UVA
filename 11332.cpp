#include<stdio.h>
#include<string.h>
int main()
{

    char num[15];
    int sum[15],ans,i,len;
    for(;;)
    {

        ans=0;
        scanf("%s",num);
        if(num[0]=='0') break;

        else
        {

        len=strlen(num);

        for(i=0;i<len;i++)
        {

        sum[i]=num[i]-'0';
        ans+=sum[i];

        }

        while(ans>9)
         ans=(ans/10)+(ans%10);

         printf("%d\n",ans);

        }
    }
    return 0;
}


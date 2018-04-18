#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int max,i,n;
    char str[1000005];

    while(gets(str))
    {
        n=strlen(str);
        max=0;
        int freq[260]={0,};

        for(i=0;i<n;i++)
        {
            if((('a'<=str[i])&&(str[i]<'z'))||(('A'<=str[i])&&(str[i]<'Z'))){
            freq[(int)str[i]]++;
            if(freq[(int)str[i]]>max) max=freq[(int)str[i]];}
        }

if(max>0)
        {for(i=0;i<260;i++)
        {
            if(freq[i]==max) printf("%c",i);
        } printf(" %d\n",max);
        }


    }


    return 0;
}

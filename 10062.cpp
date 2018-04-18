#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int freq[150],i,n,max,k,t=0;
    char inp[10000];

    while(gets(inp))
    {
        if(t>0)
            printf("\n");

        max=0;
        n=strlen(inp);

        for(i=0;i<150;i++)
            freq[i]=0;

        for(i=0;i<n;i++)
        {
            freq[(int)inp[i]]++;
            if(freq[(int)inp[i]]>max)
                max=freq[(int)inp[i]];
        }

        for(k=1;k<=max;k++)
        {
            for(i=149;i>=0;i--)
            {
                if(freq[i]==k)
                    printf("%d %d\n",i,freq[i]);
            }
        }
        t++;


    }
    return 0;

}

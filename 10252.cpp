#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int freq1[150],freq2[150],freq[150],i,j,n,test;
    char inp[10000];


    while(gets(inp))
    {

        n=strlen(inp);

        for(i=0;i<150;i++)
            {
                freq1[i]=0;
                freq2[i]=0;
                freq[i]=0;
            }

        for(i=0;i<n;i++)
        {
            freq1[(int)inp[i]]++;
        }

        gets(inp);

        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            freq2[(int)inp[i]]++;
        }


        for(i=0;i<150;i++)
        {
            if(freq1[i]>freq2[i])
                freq[i]=freq2[i];
            else
                freq[i]=freq1[i];

        }


          for(i=0;i<150;i++)
            {
                while(freq[i]--)
                    printf("%c",i);
            }

        printf("\n");


    }
    return 0;

}

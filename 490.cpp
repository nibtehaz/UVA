/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005



int main()
{
    int maxlen=0,len[105],n,i=0,j;
    char sent[105][105];

    while(gets(sent[i]))
    {
        len[i]=strlen(sent[i]);
        if(maxlen<len[i])
            maxlen=len[i];

           

        i++;
    }

    n=i-1;




    for(j=0;j<maxlen;j++)
    {
        for(i=n;i>=0;i--)
            {
                if(j<len[i])
                    printf("%c",sent[i][j]);
                else
                    printf(" ");
            }

        printf("\n");
    }


    return 0;
}



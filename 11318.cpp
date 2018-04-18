/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 10005
#define EPS 1e-11


int main()
{
    int flag,i,bit,binary[100],len,two,ans;
    char inp[1000];

    while(1)
    {
        scanf("%s",inp);

        if(inp[0]=='~')
            break;

        bit=0;
        len=strlen(inp);
        if(len==1)
            flag=1;
        else
            flag=0;

        while(1)
        {
            scanf("%s",inp);
            if(inp[0]=='#')
                break;
            len=strlen(inp);

            if(len==1)
                flag=1;
            else if(len==2)
                flag=0;
            else
            {
                len-=2;
                for(i=0;i<len;i++)
                {
                    binary[bit++]=flag;
                }
            }
        }

        two=1;
        ans=0;

        for(i=bit-1;i>=0;i--)
        {
            if(binary[i]==1)
                ans+=two;

            two*=2;
        }

        printf("%d\n",ans);

    }


    return 0;
}



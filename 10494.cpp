/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    char a[100005],symbol[5],ans[100005];
    long long int b,i,j,anslen,len,c;

    while(scanf("%s",a)!=EOF)
    {
        scanf("%s",symbol);
        scanf("%lld",&b);
        len=strlen(a);


        anslen=0;
        c=0;
        j=0;

        for(i=0;i<len;i++)
        {
            if(c>=b)
            {
                ans[anslen++]=48+(c/b);
                c%=b;
                c=c*10+(a[i]-48);
            }
            else
            {
                ans[anslen++]='0';
                c=c*10+(a[i]-48);
            }
        }

        if(c>=b)
            {
                ans[anslen++]=48+(c/b);
                c%=b;
            }
        else
            ans[anslen++]=48;

        if(symbol[0]=='/')
        {
            for(i=0;i<anslen;i++)
                if(ans[i]!='0')
                    {   j=1;   break;  }

            for(;i<anslen;i++)
                printf("%c",ans[i]);

            if(j==0)
                printf("0");

            printf("\n");

        }
        else if(symbol[0]=='%')
            printf("%lld\n",c);


    }


    return 0;
}


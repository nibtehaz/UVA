/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd (int a, int b);

int main()
{
    int t,n,num[1000],i,j,max,pre;
    char ch;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        n=0;
        pre=0;

        while(1)
        {
            ch=getchar();

            if(ch=='\n')
                {
                    if(pre>0)
                        num[n++]=pre;
                    pre=0;
                    break;
                }

            if(ch<=57&&ch>=48)
            {
                pre=pre*10+(ch-48);
            }
            else
            {
                if(pre>0)
                    num[n++]=pre;
                pre=0;
            }
        }

        max=0;


        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                pre=gcd(num[i],num[j]);
                if(pre>max)
                    max=pre;
            }
        }
        printf("%d\n",max);

    }


    return 0;
}


int gcd (int a, int b)
{
    int c ;

    if(b>a)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }


    while(1)
    {
        if(b==0)
            return a;


        c=b;
        b=a%b;
        a=c;



    }
}

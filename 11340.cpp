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
    int T,registr,line,i,j,n,cent;
    unsigned char ch;
    long long int teka;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&registr);
        int check[10000]={0,};

            ch=getchar();

        while(ch!='\n')
            ch=getchar();

        while(registr--)
        {
            ch=getchar();
            scanf("%d",&i);

            check[(int)ch] =i;
            ch=getchar();
        while(ch!='\n')
            ch=getchar();


        }

        scanf("%d",&line);
        ch=getchar();
        while(ch!='\n')
            ch=getchar();


        teka=0;

        while(line)
        {
            ch=getchar();

            teka+=check[ch];
            if(ch=='\n')
                line--;
        }

        line=teka%100;

        if(line<10)
            printf("%lld.0%d$\n",teka/100,line);
        else
            printf("%lld.%d$\n",teka/100,line);



    }



    return 0;

}




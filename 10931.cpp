#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int i,cnt;
    char bin[150];
    long long int k;

    while(1)
    {
        scanf("%lld",&k);
        if(k==0) break;

        cnt=0;

        for(i=0;;i++)
        {
            bin[i]=k%2+48;
            k/=2;
            if(bin[i]=='1') cnt++;
            if(k==0)
            {
                i++;
                bin[i]=k%2+48;
                if(bin[i]=='1') cnt++;
                break;
            }

        }

        printf("The parity of ");

        for(;i>=0;i--)
            if(bin[i]=='1') break;
        for(;i>=0;i--)
            printf("%c",bin[i]);

        printf(" is %d (mod 2).\n",cnt);





    }
    return 0;
}

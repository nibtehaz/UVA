#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int n,khaisi,khali,paisi;

    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        khali=n;
        khaisi=0;

        dokan:
        paisi=khali/3;
        khaisi+=paisi;
        khali=(khali%3)+paisi;
        if(khali>2) goto dokan;
        if(khali==2) khaisi++;

        printf("%d\n",khaisi);

    }


    return 0;

}


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int khali,paisi,lagbe,t,khaisi;

    scanf("%d",&t);

    while(t--)
    {
        khaisi=0;
        scanf("%d %d %d",&khali,&paisi,&lagbe);

        khali+=paisi;
        abar:
        paisi=khali/lagbe;
        khaisi+=paisi;
        khali=(khali%lagbe)+paisi;;

        if(khali>=lagbe) goto abar;

        printf("%d\n",khaisi);
    }


    return 0;
}

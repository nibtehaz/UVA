/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int P,H,O;

    while(scanf("%d%d%d",&P,&H,&O)!=EOF)
    {
        if( H>(O-P) )
            printf("Hunters win!\n");
        else
            printf("Props win!\n");
    }

    return 0;

}



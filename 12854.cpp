/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[5],b[5],match,i;

    while((scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&b[0],&b[1],&b[2],&b[3],&b[4]))!=EOF)
    {
        match=0;

        for(i=0;i<5;i++)
        {
            if(a[i]+b[i]==1)
                match++;
            else
                break;
        }

        if(match==5)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;

}



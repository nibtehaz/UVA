#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    unsigned long long int n,age[101],i,inp;
    int j;

    while(1)
    {
        scanf("%llu",&n);
        if(n==0) break;

        for(i=0;i<101;i++)
            age[i]=0;

        for(i=0;i<n;i++)
        {
            scanf("%llu",&inp);
            age[inp]++;
        }

        for(j=0;j<101;j++)
        {
            if(age[j]!=0)
            {
                printf("%d",j);
                age[j]--;
                break;
            }
        }

        for(;j<101;j++)
        {
            while(age[j]>0)
            {
                printf(" %d",j);
                age[j]--;
            }

        }

        printf("\n");

    }


    return 0;
}


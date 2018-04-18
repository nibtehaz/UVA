#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,a,f,i,j,t=0,k;

    scanf("%d",&n);

    while(t<n)
    {
        scanf("%d%d",&a,&f);
        if(t>0&&f>0&&a>0) printf("\n");

        t++;

        

        for(j=1;j<=f;j++)
        {

            for(i=1;i<=a;i++)
            {
                k=i;
                while(k--)
                    printf("%d",i);

                printf("\n");

            }
            i-=2;
            for(;i>0;i--)
            {
                k=i;
                while(k--)
                    printf("%d",i);

                printf("\n");

            }

            if(j<f) printf("\n");
        }
    }
    return 0;
}


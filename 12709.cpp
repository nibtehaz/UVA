#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,L[200],W[200],H[200],i,j,max,vol;

    while(1)
    {
        scanf("%d",&t);
        if(t==0) break;

        else
        {
            for(i=0;i<t;i++)
                scanf("%d%d%d",&L[i],&W[i],&H[i]);

            max=H[0];
            vol=L[0]*W[0]*H[0];

            for(i=1;i<t;i++)
            {
                if(H[i]>max)
                {
                    max=H[i];
                    vol=L[i]*W[i]*H[i];
                }
                else if(H[i]==max)
                {
                    if((L[i]*W[i]*H[i])>vol) vol=L[i]*W[i]*H[i];
                }
            }

            printf("%d\n",vol);
        }
    }


    return 0;

}


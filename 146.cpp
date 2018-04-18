#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n,j,key,a,test,k;
    char inp[5005];

    while(1)
    {
        test=0;
        scanf("%s",inp);
        if(!strcmp(inp,"#"))
            break;

        n=strlen(inp);

        for(k=n-1;k>=0&&test==0;k--)
        {
            for(i=k-1;i>=0;i--)
            {
            if(inp[i]<inp[k])
            {
                inp[i]=inp[i]^inp[k];
                inp[k]=inp[i]^inp[k];
                inp[i]=inp[i]^inp[k];

                a=i+1;

                for(i=a;i<n;i++)
                {
                    key=inp[i];

                    for(j=i-1;j>=a;j--)
                    {
                        if(inp[j]<=key)
                            break;
                        else
                            inp[j+1]=inp[j];
                    }
                    inp[j+1]=key;
                }
                printf("%s\n",inp);
                test=1;
                break;
            }
            }
        }


        if(test==0)
            printf("No Successor\n");

    }


  return 0;
}


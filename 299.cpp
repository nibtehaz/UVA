#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int t,L,arr[200],swap,i,j,k,temp;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&L);
        swap=0;
        for(i=0;i<L;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<L;i++)
        {
            if(arr[i]!=i+1)
            {
                for(j=i+1;j<L;j++)
                {
                    if(arr[j]==i+1)
                    {
                        for(k=j;k>i;k--)
                        {
                            temp=arr[k];
                            arr[k]=arr[k-1];
                            arr[k-1]=temp;
                            swap++;
                        }
                        break;
                    }
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",swap);
    }

    return 0;
}


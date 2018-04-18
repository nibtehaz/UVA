#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int n,arr[100005],i,j,flip,temp;

    while(scanf("%d",&n)!=EOF)
    {
        flip=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for (i = 0 ; i < ( n - 1 ); i++)
        {
            for (j = 0 ; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    flip++;
                    temp       = arr[j];
                    arr[j]   = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }


        printf("Minimum exchange operations : %d\n",flip);
    }

    return 0;

}


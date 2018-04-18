#include<stdio.h>
#include<string.h>
int main()
{
    int t , n , x[20] , i , walk, j , temp ;

    scanf("%d",&t);

    for(;t;t--)
    {
        walk=0;
        scanf("%d",&n);
        scanf("%d",&x[0]);
        for(i=1;i<n;i++)
        {
            scanf("%d",&x[i]);

        }

        for (i = 0; i < n-1; ++i)
 {
      for (j = 0; j < n-1- i; ++j )
      {
           if (x[j] > x[j+1])
           {
                temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;
           }
      }
 }

        for(i=1;i<n;i++)
        {
            walk+=x[i]-x[i-1];

        }

               walk+=x[i-1]-x[0];


            printf("%d\n",walk);
    }

    return 0;
}


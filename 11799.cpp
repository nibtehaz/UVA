#include<stdio.h>
int main ()
{
    int T,N,V[105],i,max;

    scanf("%d",&T);

    for(V[0]=1;V[0]<=T;V[0]++)       /*V[0] = test case*/
    {
        max=0;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d",&V[i]);
            if(V[i]>max) max=V[i];

        }
            printf("Case %d: %d\n",V[0],max);
    }

    return 0;
 }



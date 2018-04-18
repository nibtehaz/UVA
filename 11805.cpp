#include<stdio.h>

int main()
{
    int T,i,N,K,P;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&N,&K,&P);

        P=P%N;

        if(K+P<=N)
            printf("Case %d: %d\n",i,K+P);
        else
            printf("Case %d: %d\n",i,K+P-N);
    }


    return 0;

}

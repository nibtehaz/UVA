#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int dig[10],num,N,t,i;


    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&N);

        for(i=0;i<10;i++) dig[i]=0;

        for(i=1;i<=N;i++)
        {
            num=i;

            for(;;)
            {
                dig[num%10]++;
                num=num/10;
                if(num==0) break;
            }


        }

        printf("%d",dig[0]);
        for(i=1;i<10;i++) printf(" %d",dig[i]);
        printf("\n");

    }


    return 0;

}


#include<stdio.h>
#include<math.h>
#include<string.h>

int fibo[5011][1005];


int main()
{
    int n,i,max,ans[1005],j;
            fibo[1][0]=1;
    while(scanf("%d",&n)!=EOF)
    {



        for(j=2;j<=n;j++)
        {
            for(i=0;i<1005;i++)  fibo[j][i]=0;

            for(i=0;i<1005;i++)
            {
                fibo[j][i]+=fibo[j-1][i]+fibo[j-2][i];
                if(fibo[j][i]>9) {fibo[j][i]=fibo[j][i]%10;       fibo[j][i+1]=1;}
               /* printf("%d",fibo[j][i]);*/


            }
            /*printf("\n");*/

        }

        for(i=0;i<1005;i++)
        {
            if(fibo[n][1004-i]==0) continue;
            else break;
        }
        for(;i<1005;i++)
        {
            printf("%d",fibo[n][1004-i]);
        }
        printf("\n");


    }



    return 0;
}


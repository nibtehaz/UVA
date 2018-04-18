#include<stdio.h>
#include<math.h>
#include<string.h>

int fibo[55][1105];


int main()
{
    int n,i,max,j;
            fibo[1][0]=1;




        for(j=2;j<55;j++)
        {
            for(i=0;i<1105;i++)  fibo[j][i]=0;

            for(i=0;i<1105;i++)
            {
                fibo[j][i]+=fibo[j-1][i]+fibo[j-2][i];
                if(fibo[j][i]>9) {fibo[j][i]=fibo[j][i]%10;       fibo[j][i+1]=1;}
               /* printf("%d",fibo[j][i]);*/


            }
            /*printf("\n");*/

        }
         while(scanf("%d",&n)!=EOF)
    {
        if(n==0)        break;
else{

        for(i=0;i<1105;i++)
        {
            if(fibo[n+1][1104-i]==0) continue;
            else break;
        }



        for(;i<1105;i++)
        {
            printf("%d",fibo[n+1][1104-i]);
        }}
        printf("\n");


    }



    return 0;
}


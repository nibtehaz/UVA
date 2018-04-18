#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    long long int N,A,B,sum,temp;
    int tp=1,test,cnt;
    int dig[20];


    while(scanf("%lld%lld",&A,&B)!=EOF)
    {
        if(tp>1) printf("\n");
        tp++;
        if(A>B) {N=B; B=A;  A=N; }


    for(N=A;N<=B;N++)
        {
        test=1;
        sum=0;
        temp=N;

          if(N==1) {test=1; cnt=1; goto ennd ;}

        for(;;)
        {
            sum+=(temp%10)*(temp%10);
            temp=temp/10;
            if(temp==0) break;
        }

    cnt=2;
     if(sum<10)
            {
                if(sum==1) {test=1; goto ennd ;}
                else if(sum==4) {test=0; goto ennd;}
            }


        for(;;)
        {
            temp=sum;
            sum=0;

            for(;;)
            {
            sum+=(temp%10)*(temp%10);
            temp=temp/10;
            if(temp==0) break;
            }

            cnt++;

            if(sum<10)
            {
                if(sum==1) {test=1; break;}
                else if(sum==4) {test=0; break;}


            }

        }

        ennd:
        if(test==1) printf("%lld %d\n",N,cnt);

    }

    }
    return 0;
}


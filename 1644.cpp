#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int prime (long long int num);

int main()
{
    long long int n,len,i;

    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        len=0;
        if(prime(n)==1) printf("%d\n",0);

        else
        {
            for(i=n-1;i>1;i--)
            {
                if(prime(i)==0) len++;
                else break;
            }

            for(i=n+1;;i++)
            {
                if(prime(i)==0) len++;
                else break;
            }
            printf("%d\n",len+2);
        }
    }


    return 0;


}



int prime (long long int num)
{
    int test=1;
    long long int i,pum=sqrt(num);

    if(num==1) return 0;
    if(num==2) return 1;
    if(num%2==0) return 0;

    for(i=3;i<=pum;i+=2)
    {
        if(num%i==0) {test=0; break;}

    }

    if(test==1) return 1;
    else return 0;

}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int fac[10005],i,j,n,carry;
    long long int temp;
    fac[0]=1;
    fac[1]=1;
    char fact[35680];



   fact[0]='1';
    for(i=1;i<35679;i++)
        fact[i]='0';

    fac[0]=1;
    fac[1]=1;



    for(i=2;i<10005;i++)
    {
        carry=0;
        for(j=0;j<35680;j++)
        {
            temp=((fact[j]-48)*i)+carry;
            if(temp>9)
            {
                carry=temp/10;
                temp=temp%10;
            }
            else
                carry=0;

            fact[j]=temp+48;
        }

        for(j=0;j<35679;j++)
        {
            if(fact[j]!='0')
            {
                fac[i]=fact[j]-48;
                break;
            }
        }

    }


    while(scanf("%d",&n)!=EOF)
    {
        printf("%5d -> %d\n",n,fac[n]);

    }


    return 0;

}

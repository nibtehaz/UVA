#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char fact[1005][2571];

int main()
{
    int n,i,j,carry,temp;

   fact[0][0]='1';
    for(i=1;i<2571;i++)
        fact[0][i]='0';


  for(i=1;i<1005;i++)
    {
        for(j=0;j<2571;j++)
            fact[i][j]=fact[i-1][j];



        carry=0;
        for(j=0;j<2571;j++)
        {
            temp=((fact[i][j]-48)*i)+carry;
            if(temp>9)
            {
                carry=temp/10;
                temp=temp%10;
            }
            else
                carry=0;

            fact[i][j]=temp+48;
        }
    }

    while(scanf("%d",&n)!=EOF)
    {
        printf("%d!\n",n);

        for(i=2570;i>=0;i--)
        {
            if(fact[n][i]!='0')
                break;
        }
        for(;i>=0;i--)
            printf("%c",fact[n][i]);

        printf("\n");
    }





    return 0;

}


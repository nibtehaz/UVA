#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char fact[368][787];

int main()
{
    int n,i,j,carry,temp;

   fact[0][0]='1';
    for(i=1;i<785;i++)
        fact[0][i]='0';


  for(i=1;i<368;i++)
    {
        for(j=0;j<785;j++)
            fact[i][j]=fact[i-1][j];



        carry=0;
        for(j=0;j<785;j++)
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
        if(n==0)
            break;

        for(i=784;i>=0;i--)
        {
            if(fact[n][i]!='0')
                break;
        }

        int num[10]={0,};

        for(;i>=0;i--)
            {
                num[fact[n][i]-48]++;

            }

    printf("%d! --\n",n);
    printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",num[0],num[1],num[2],num[3],num[4]);
    printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",num[5],num[6],num[7],num[8],num[9]);



    }





    return 0;

}


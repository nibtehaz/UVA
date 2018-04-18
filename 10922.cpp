#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int num[4],degree,sum,i,n;
    char inp[1005];

    for(;;)
    {
        degree=0;

        scanf("%s",inp);
        if(!strcmp(inp,"0")) break;

        else
        {
            sum=0;
            n=strlen(inp);
            for(i=0;i<n;i++)
                sum+=(inp[i]-'0');

                 degree++;


if (sum==9)  { printf("%s is a multiple of 9 and has 9-degree %d.\n",inp,degree); continue ;}

                else if(sum<9) {printf("%s is not a multiple of 9.\n",inp); continue;}
            num[3]=sum%10;
            sum=sum/10;
            num[2]=sum%10;
            sum=sum/10;
            num[1]=sum%10;
            num[0]=sum/10;




            for(;;)
            {
                sum=num[3]+num[2]+num[1]+num[0];
                degree++;

                   if (sum==9)  { printf("%s is a multiple of 9 and has 9-degree %d.\n",inp,degree); break;}

                else if(sum<9) {printf("%s is not a multiple of 9.\n",inp); break;}



                num[3]=sum%10;
                sum=sum/10;
                num[2]=sum%10;
                sum=sum/10;
                num[1]=sum%10;
                num[0]=sum/10;


            }


        }
    }


    return 0;
}

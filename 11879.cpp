/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

char num[1000];
int len;

void minus(int j);

int main()
{
    int i,head,j,pranto;
    long long int vajok,vajjo;
    while(gets(num))
    {
        if(!strcmp(num,"0"))
            break;

        len=strlen(num);

        for(i=0;i<len;i++)
        {
            if(num[i]!=48)
                break;
        }

        head=i;

        if(head!=0)
        {
            j=0;
            for(i=head;i<len;i++)
            {
                num[j++]=num[i];
            }
            len=j;
            num[j]='\0';

        }



        for(i=head;i<len;i++)
            num[i]-=48;


        pranto = len >= 17 ? 16 : len -1 ;

        for(i=len-1;i>pranto;i--)

        {
            minus(i);
        }

        vajjo=0;
        vajok=5*num[pranto];

        for(j=0;j<pranto;j++)
        {
            vajjo=vajjo*10 +num[j];
        }
     //   printf("\n\n\n\n%lld\n",vajjo);
      //  printf("%lld\n",vajok);

        vajjo-=vajok;



        printf("%d\n",(vajjo%17==0));

    }


    return 0;

}


void minus(int j)
{
    int del=5*(num[j]),carry=0,temp,i,c,d;

    c=del/10;
    d=del%10;



        i=j-1;
        if(num[i]>=d)
        {
            num[i]-=d;

        }
        else
        {
            for(i=j-2;i>=0;i--)
                {
                    if(num[i]>0)
                    {
                        num[i]--;
                        i++;
                        for(;i<=j-2;i++)
                        {
                            if(num[i]>0)
                            num[i]--;
                            else
                            num[i]=9;
                        }
                        num[j-1]+=10-d;
                        break;
                    }
                }

        }


        j--;
         i=j-1;
        if(num[i]>=c)
        {
            num[i]-=c;

        }
        else
        {
            for(i=j-2;i>=0;i--)
                {
                    if(num[i]>0)
                    {
                        num[i]--;
                        i++;
                        for(;i<=j-2;i++)
                        {
                            if(num[i]>0)
                            num[i]--;
                            else
                            num[i]=9;
                        }
                        num[j-1]+=10-c;
                        break;
                    }
                }

        }

  /*      printf("%d\n",del);
        for(i=0;i<j+1;i++)
            printf("%c",num[i]+48);
        printf("\n");

*/





}

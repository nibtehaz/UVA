/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    char inp[100005],product[100005];
    int n,i,j,len,num,point,tail=0,carry,temp,head;

    while(scanf("%s%d",inp,&n)!=EOF)
    {
        len=strlen(inp);

        strcpy(product,"");

        j=len-2;
        num=0;
        for(i=0;i<len;i++)
        {
            if(inp[i]=='.')
            point=len-i-1;
            else
            {
                product[j--]=inp[i];
                num=(inp[i]-48)+num*10;
            }
            product[len-1]='\0';
        }

        point=n*point;


        tail=len-2;

        n--;
        while(n--)
        {
            carry=0;
            for(i=0;i<=tail;i++)
            {
                temp=num*(product[i]-48)  +carry ;
                if(temp>9)
                {
                    carry=temp/10;
                    product[i]=temp%10+48;
                }
                else
                {
                    product[i]=temp+48;
                    carry=0;
                }
            }

            while(carry!=0)
            {
                tail++;
                product[tail]=carry%10 +48 ;
                carry/=10;
            }
        }


        j=0;

        if(point>tail)
            for(i=tail+1;i<=point+5;i++)
            product[i]='0';

        for(i=0;i<point;i++)
        {
            if(product[i]!=48)
                break;
        }

       // printf("%d\t%c\n",i,product)
        for(;i<point;i++)
        {
            inp[j++]=product[i];
        }
      //  printf("%d\t%c\n",j,product[i]);
        if(j!=0)
            inp[j++]='.';

        for(n=j-2;n>=0;n--)
        {
            if(inp[n]<=57&&inp[n]>=48)
                ;
            else
                inp[i]='0';
        }

        for(;i<=tail;i++)
        {
            if(product[i]<=57&&product[i]>=48)
                inp[j++]=product[i];
            else
                inp[j++]='0';
        }

        head=j;


        for(i=head-1;i>=0;i--)
        {
            if(inp[i]!='0')
                break;
        }

        for(;i>=0;i--)
            printf("%c",inp[i]);

        printf("\n");



/*printf("%d\n",tail);
        for(i=tail;i>=point;i--)
        {
            if(product[i]==48)
                tail--;
            else
                break;
        }


printf("%d\n",tail);

        head=0;

        for(i=0;i<=tail;i++)
            {
                if(product[i]!=48)
                    {
                        head=i;
                        break;
                    }
            }



        point=tail-point+1;
        for(i=0;i<point;i++)
            printf("%c",product[tail-i]);

        printf(".");


        for(i=tail-i;i>=head;i--)
            printf("%c",product[i]);

        printf("\n");*/

    }

    return 0;



}



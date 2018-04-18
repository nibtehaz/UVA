/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


char inp[1005],sum[100005];
int len , lensum=0;
void add();

int main()
{
    int i;

    for(i=0;i<100005;i++)
        sum[i]='0';
    while(gets(inp))
        {
            if(!strcmp(inp,"0"))
                break;

            add();
        }
    for(i=lensum-1;i>=0;i--)
        if(sum[i]!=48)
        break;

    for(;i>=0;i--)
        printf("%c",sum[i]);
    printf("\n");



    return 0;

}

void add()
{
    int i,carry=0,temp;

    len=strlen(inp);

    for(i=0;i<len;i++)
    {
        temp=inp[len-1-i]+sum[i]+carry - 96;

        if(temp>9)
        {
            carry=temp/10;
            sum[i]=temp%10 + 48;
        }
        else
        {
            carry=0;
            sum[i]=temp + 48;
        }

    }

    while(carry!=0)
    {
        temp=carry+sum[len]-48;

        if(temp>9)
        {
            carry=temp/10;
            sum[len]=temp%10 + 48;
        }
        else
        {
            carry=0;
            sum[len]=temp + 48;
        }
        len++;
    }

    if(len>lensum)
        lensum=len;



}

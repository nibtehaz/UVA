/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char brail[3][3000],num[1000],ch;
    int i,n,D;

    while(scanf("%d",&D)!=EOF)
    {
        if(D==0)
            break;

        ch=getchar();
        if(ch=='\n')
        {
            ch=getchar();
        }

        if(ch=='S')
        {
            gets(num);
            gets(num);

            for(i=0;i<D;i++)
            {
                if(num[i]=='1')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='.';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='.';
                    brail[1][3*i+1]='.';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='2')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='.';
                    brail[1][3*i+1]='.';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='3')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='.';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='.';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='4')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='.';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='*';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='5')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='.';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='.';
                    brail[1][3*i+1]='*';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='6')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='.';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='7')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='*';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='8')
                {
                    brail[0][3*i]  ='*';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='.';
                    brail[1][3*i+1]='*';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='9')
                {
                    brail[0][3*i]  ='.';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='.';
                    brail[2][3*i+1]='.';
                }
                else if(num[i]=='0')
                {
                    brail[0][3*i]  ='.';
                    brail[1][3*i]  ='*';
                    brail[2][3*i]  ='.';
                    brail[0][3*i+1]='*';
                    brail[1][3*i+1]='*';
                    brail[2][3*i+1]='.';
                }

                    brail[0][3*i+2]=' ';
                    brail[1][3*i+2]=' ';
                    brail[2][3*i+2]=' ';
            }
            for(i=0;i<(3*D-1);i++)
            {
                printf("%c",brail[0][i]);
            }
            printf("\n");

            for(i=0;i<(3*D-1);i++)
            {
                printf("%c",brail[1][i]);
            }
            printf("\n");

            for(i=0;i<(3*D-1);i++)
            {
                printf("%c",brail[2][i]);
            }
            printf("\n");
        }
        else if(ch=='B')
        {
            gets(num);
            gets(brail[0]);
            gets(brail[1]);
            gets(brail[2]);

            for(i=0;i<D;i++)
            {
                if(brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='.'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='.'&&
                    brail[1][3*i+1]=='.'&&
                    brail[2][3*i+1]=='.')
                    num[i]='1';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='.'&&
                    brail[1][3*i+1]=='.'&&
                    brail[2][3*i+1]=='.')
                    num[i]='2';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='.'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='.'&&
                    brail[2][3*i+1]=='.')
                    num[i]='3';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='.'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='*'&&
                    brail[2][3*i+1]=='.')
                    num[i]='4';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='.'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='.'&&
                    brail[1][3*i+1]=='*'&&
                    brail[2][3*i+1]=='.')
                    num[i]='5';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='.'&&
                    brail[2][3*i+1]=='.')
                    num[i]='6';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='*'&&
                    brail[2][3*i+1]=='.')
                    num[i]='7';
                else if(
                    brail[0][3*i]  =='*'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='.'&&
                    brail[1][3*i+1]=='*'&&
                    brail[2][3*i+1]=='.')
                    num[i]='8';
                else if(
                    brail[0][3*i]  =='.'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='.'&&
                    brail[2][3*i+1]=='.')
                    num[i]='9';
                else if(
                    brail[0][3*i]  =='.'&&
                    brail[1][3*i]  =='*'&&
                    brail[2][3*i]  =='.'&&
                    brail[0][3*i+1]=='*'&&
                    brail[1][3*i+1]=='*'&&
                    brail[2][3*i+1]=='.')
                    num[i]='0';
            }
            for(i=0;i<D;i++)
                printf("%c",num[i]);
            printf("\n");
        }
    }

    return 0;
}

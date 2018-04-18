#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,n,code;
    char str[20000];

    while(gets(str))
    {
        n=strlen(str);
        if((str[0]>=48)&&(str[0]<=57))
        {
            /*decode*/
            for(i=n-1;i>=0;i-=2)
            {
                code=(str[i]-48)*10+(str[i-1]-48);
                if(code<65&&(code!=32&&code!=33&&code!=44&&code!=46&&code!=58&&code!=59&&code!=63))
                        {
                        code=code*10+(str[i-2]-48);
                        i--;
                        }

                printf("%c",code);
            }
        }

        else
        {
            /*encode*/

            for(i=n-1;i>=0;i--)
            {
                code=(int)str[i];

                if(code<100) printf("%d%d",code%10,code/10);
                else printf("%d%d%d",code%10,(code/10)%10,code/100);
            }
        }

        printf("\n");

    }

    return 0;
}

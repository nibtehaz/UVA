#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,len,i;
    char str[100000],inp;


    scanf("%d",&t);
    getchar();

    while(gets(str))
    {
        len=strlen(str);
        if(len==0)
            t--;
        if(t==0)
            break;
        for(i=0;i<len;i++)
        {


            inp=str[i];

            {
            if(inp=='1')
                printf("I");
            else if(inp=='2')
                printf("Z");
            else if(inp=='3')
                printf("E");
            else if(inp=='4')
                printf("A");
            else if(inp=='5')
                printf("S");
            else if(inp=='6')
                printf("G");
            else if(inp=='7')
                printf("T");
            else if(inp=='8')
                printf("B");
            else if(inp=='9')
                printf("P");
            else if(inp=='0')
                printf("O");
            else
                printf("%c",inp);

            }
        }
        if(t>0) printf("\n");

    }

    return 0;
}

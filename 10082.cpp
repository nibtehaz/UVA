#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int n,test,i,j;

    char inp[100005];

    char line1[]={"`1234567890-="};
    char line2[]={"QWERTYUIOP[]\\"};
    char line3[]={"ASDFGHJKL;'"};
    char line4[]={"ZXCVBNM,./"};

    while(gets(inp))
    {
        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            test=1;

            if(inp[i]==' ') test=0;

            for(j=0;line1[j];j++)
            {
                if(inp[i]==line1[j])
                {
                    if(j==0)
                    inp[i]=line1[j];
                    else
                        inp[i]=line1[j-1];
                   test=0;
                    break;
                }
            }

            for(j=0;line2[j]&&test;j++)
            {
                if(inp[i]==line2[j])
                {
                    if(j==0)
                    inp[i]=line2[j];
                    else
                        inp[i]=line2[j-1];
                   test=0;
                    break;
                }
            }

            for(j=0;line3[j]&&test;j++)
            {
                if(inp[i]==line3[j])
                {
                    if(j==0)
                    inp[i]=line3[j];
                    else
                        inp[i]=line3[j-1];
                   test=0;
                    break;
                }
            }

            for(j=0;line4[j]&&test;j++)
            {
                if(inp[i]==line4[j])
                {
                    if(j==0)
                    inp[i]=line4[j];
                    else
                        inp[i]=line4[j-1];
                   test=0;
                    break;
                }
            }
         printf("%c",inp[i]);
        }
        printf("\n");
    }
    return 0;
}

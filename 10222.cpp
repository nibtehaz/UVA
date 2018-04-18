#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int n,test,i,j;

    char inp[100005];

    char line1[]={"`1234567890-="};
    char line2[]={"qwertyuiop[]\\"};
    char line3[]={"asdfghjkl;'"};
    char line4[]={"zxcvbnm,./"};

    while(gets(inp))
    {
        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            if((inp[i]<='Z')&&(inp[i]>='A'))
                inp[i]+=32;
            test=1;

            if(inp[i]==' ') test=0;

            for(j=0;line1[j];j++)
            {
                if(inp[i]==line1[j])
                {
                    if(j<=1)
                    inp[i]=line1[j];
                    else
                        inp[i]=line1[j-2];
                   test=0;
                    break;
                }
            }

            for(j=0;line2[j]&&test;j++)
            {
                if(inp[i]==line2[j])
                {
                    if(j<=1)
                    inp[i]=line2[j];
                    else
                        inp[i]=line2[j-2];
                   test=0;
                    break;
                }
            }

            for(j=0;line3[j]&&test;j++)
            {
                if(inp[i]==line3[j])
                {
                    if(j<=1)
                    inp[i]=line3[j];
                    else
                        inp[i]=line3[j-2];
                   test=0;
                    break;
                }
            }

            for(j=0;line4[j]&&test;j++)
            {
                if(inp[i]==line4[j])
                {
                    if(j<=1)
                    inp[i]=line4[j];
                    else
                        inp[i]=line4[j-2];
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

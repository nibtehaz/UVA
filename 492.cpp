#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char inp[1000005],word[1000005];

    long long int i,j,k,n;

    while(gets(inp))
    {
        n=strlen(inp);

        for(i=0,j=0;i<n;i++)
        {
           if((inp[i]<='z')&&(inp[i]>='a')|| (inp[i]<='Z')&&(inp[i]>='A'))
           {
               word[j]=inp[i];
               j++;
           }
           else
           {
               if((j>0)&&((word[0]!='a')&&(word[0]!='e')&&(word[0]!='i')&&(word[0]!='o')&&(word[0]!='u')&&(word[0]!='A')&&(word[0]!='E')&&(word[0]!='I')&&(word[0]!='O')&&(word[0]!='U')))
                    {
                        for(k=1;k<j;k++)
                        {
                            printf("%c",word[k]);
                        }
                        printf("%cay",word[0]);
                    }
                else if(j>0)
                    {
                        for(k=0;k<j;k++)
                        {
                            printf("%c",word[k]);
                        }
                        printf("ay");
                    }

                j=0;
                printf("%c",inp[i]);
           }
        }

        if((j>0)&&((word[0]!='a')&&(word[0]!='e')&&(word[0]!='i')&&(word[0]!='o')&&(word[0]!='u')&&(word[0]!='A')&&(word[0]!='E')&&(word[0]!='I')&&(word[0]!='O')&&(word[0]!='U')))
                    {
                        for(k=1;k<j;k++)
                        {
                            printf("%c",word[k]);
                        }
                        printf("%cay",word[0]);
                    }
                else if(j>0)
                    {
                        for(k=0;k<j;k++)
                        {
                            printf("%c",word[k]);
                        }
                        printf("ay");
                    }

                    j=0;



        printf("\n");
    }

    return 0;
}

/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char inp[20],op[30][150];
    int i,j,k,n,s,tp=1;

    while(1)
    {
        if(tp>1)
            printf("\n");
        scanf("%d%s",&s,inp);

        if((s==0))
            break;

        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            if(inp[i]=='0')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]=' ';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }


        else if(inp[i]=='1')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]=' ';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]=' ';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]=' ';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='2')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]=' ';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='3')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='4')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]=' ';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]=' ';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }
            else if(inp[i]=='5')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]=' ';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='6')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]=' ';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='7')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]=' ';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]=' ';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='8')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

            else if(inp[i]=='9')
            {
                op[0][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[0][i*(s+3)+j]='-';
                }
                op[0][i*(s+3)+j]=' ';
                op[0][i*(s+3)+j+1]=' ';

                for(k=1;k<=s;k++)
                {
                    op[k][i*(s+3)]='|';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';

                }

                op[k][i*(s+3)]=' ';

                for(j=1;j<=s;j++)
                {
                    op[k][i*(s+3)+j]='-';
                }
                op[k][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';
                k++;

                for(;k<2*s+2;k++)
                {
                    op[k][i*(s+3)]=' ';

                    for(j=1;j<=s;j++)
                    {
                        op[k][i*(s+3)+j]=' ';
                    }
                    op[k][i*(s+3)+j]='|';
                    op[k][i*(s+3)+j+1]=' ';
                }

                op[2*s+2][i*(s+3)]=' ';
                for(j=1;j<=s;j++)
                {
                    op[2*s+2][i*(s+3)+j]='-';
                }
                op[2*s+2][i*(s+3)+j]=' ';
                op[k][i*(s+3)+j+1]=' ';

            }

    }

        for(i=0;i<(2*s+3);i++)
          {

           for(j=0;j<=((n-1)*(s+3)+s+1);j++)
        {
          printf("%c",op[i][j]);
        }
        printf("\n");
          }

        tp++;

    }


    return 0;

}



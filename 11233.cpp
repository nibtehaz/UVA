#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int L,N,i,n,done;
    char in[200][50],out[200][50],inp[50];

    scanf("%d%d",&L,&N);
          {


              for(i=0;i<L;i++)
                {
                    scanf("%s%s",in[i],out[i]);
                }


                while(N--)
                {
                    scanf("%s",inp);
                    done=0;
                    for(i=0;i<L;i++)
                    {
                        if(!strcmp(in[i],inp))
                        {
                            printf("%s\n",out[i]);
                            done=1;
                            break;
                        }
                    }

                    if(done==1)
                        continue;

                    n=strlen(inp);

                    if((inp[n-1]=='y')&&((inp[n-2]!='a')&&(inp[n-2]!='e')&&(inp[n-2]!='i')&&(inp[n-2]!='o')&&(inp[n-2]!='u')))
                    {
                        inp[n-1]='i';
                        inp[n]='e';
                        inp[n+1]='s';
                        inp[n+2]='\0';
                    }

                    else if( ( inp[n-1]=='h'&& ( inp[n-2]=='s'||inp[n-2]=='c' ) ) || (inp[n-1]=='o') || (inp[n-1]=='s') || (inp[n-1]=='x') )
                    {
                        inp[n]='e';
                        inp[n+1]='s';
                        inp[n+2]='\0';
                    }
                    else
                    {
                        inp[n]='s';
                        inp[n+1]='\0';
                    }

                    printf("%s\n",inp);
                }


          }


    return 0;

}


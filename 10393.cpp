#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int finger[11];
    char pari[2000][70],inp[70],ans[2000][70];
    int F,N,word,i,j,len[2000],max,cnt;

    while(scanf("%d%d",&F,&N)!=EOF)
    {
        for(i=1;i<=10;i++)
            finger[i]=1;
        for(i=0;i<F;i++)
        {
            scanf("%d",&j);
            finger[j]=0;
        }
        gets(inp);
        for(i=0;i<N;i++)
        {
            gets(inp);
            strcpy(pari[i],inp);
            len[i]=strlen(inp);
        }

        max=0;

        for(j=0;j<N;j++)
        {
            if(len[j]<max)
            {
                strcpy(pari[j],"");
                continue;
            }

            for(i=0;i<len[j];i++)
            {
                inp[i]=pari[j][i];
                if((inp[i]=='q'||inp[i]=='a'||inp[i]=='z')&&finger[1]==0)
                    break;
                else if((inp[i]=='w'||inp[i]=='s'||inp[i]=='x')&&finger[2]==0)
                    break;
                else if((inp[i]=='e'||inp[i]=='d'||inp[i]=='c')&&finger[3]==0)
                    break;
                else if((inp[i]=='r'||inp[i]=='f'||inp[i]=='v')&&finger[4]==0)
                    break;
                else if((inp[i]=='t'||inp[i]=='g'||inp[i]=='b')&&finger[4]==0)
                    break;
                else if((inp[i]==' ')&&(finger[5]==0&&finger[6]==0))
                    break;
                else if((inp[i]=='y'||inp[i]=='h'||inp[i]=='n')&&finger[7]==0)
                    break;
                else if((inp[i]=='u'||inp[i]=='j'||inp[i]=='m')&&finger[7]==0)
                    break;
                else if((inp[i]=='i'||inp[i]=='k'||inp[i]==',')&&finger[8]==0)
                    break;
                else if((inp[i]=='o'||inp[i]=='l'||inp[i]=='.')&&finger[9]==0)
                    break;
                else if((inp[i]=='p'||inp[i]==';'||inp[i]=='/')&&finger[10]==0)
                    break;

            }

            if(i==len[j])
                max=len[j];
            else
                strcpy(pari[j],"");

        }

        word=0;
        for(i=0;i<N;i++)
        {

            if((len[i]==max)&&(strcmp(pari[i],"")!=0))
            {

                for(j=word-1;j>=0;j--)
                {
                    if(strcmp(ans[j],pari[i])<0)
                        break;
                    else if(strcmp(ans[j],pari[i])==0)
                    {
                        j=word;
                        break;
                    }
                    else
                        strcpy(ans[j+1],ans[j]);
                }
                if(j==word)
                    continue;
                else
                {
                    strcpy(ans[j+1],pari[i]);
                    word++;
                }

            }

        }

        printf("%d\n",word);
        for(i=0;i<word;i++)
            printf("%s\n",ans[i]);
    }


    return 0;

}

/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int i,j=0,k,stat,word=0,copy;
    char ch,dict[5005][205],temp[205];

    while((ch=getchar())!=EOF)
    {
        if(ch<=90&&ch>=65)
            temp[j++]=ch+32;
        else if(ch<=122&&ch>=97)
            temp[j++]=ch;
        else
        {
            if(j>0)
            {
                temp[j]='\0';
                copy=0;

                for(i=word-1;i>=0;i--)
                {
                    if(strcmp(dict[i],temp)==0)
                    {
                        copy=1;
                        break;
                    }
                }


                for(i=word-1;copy==0&&i>=0;i--)
                {
                    if(strcmp(dict[i],temp)<0)
                        break;


                    else
                        strcpy(dict[i+1],dict[i]);
                }

                if(copy==0)
                {
                    strcpy(dict[i+1],temp);
                    word++;
                }

            }

            j=0;
            strcpy(temp,"");
        }
    }

    if(j>0)
            {
                temp[j]='\0';
                copy=0;

                for(i=word-1;i>=0;i--)
                {
                    if(strcmp(dict[i],temp)==0)
                    {
                        copy=1;
                        break;
                    }
                }


                for(i=word-1;copy==0&&i>=0;i--)
                {
                    if(strcmp(dict[i],temp)<0)
                        break;


                    else
                        strcpy(dict[i+1],dict[i]);
                }

                if(copy==0)
                {
                    strcpy(dict[i+1],temp);
                    word++;
                }

            }
            j=0;


            for(i=0;i<word;i++)
                printf("%s\n",dict[i]);


    return 0;
}


/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
    int T,i,j,len,top;
    char inp[MAX];
    int map_array[MAX],stack[MAX];



    while(gets(inp))
    {

        len=strlen(inp);

        j=0;

        for(i=0;i<len;i++)
        {
            if( (i+1<len) && (inp[i]=='(') && (inp[i+1]=='*'))
                {
                    map_array[j++]=5;
                    i++;
                }

            else if( (i+1<len) && (inp[i]=='*') && (inp[i+1]==')'))
                {
                    map_array[j++]=-5;
                    i++;
                }

            else if(inp[i]=='(')
                map_array[j++]=1;

            else if(inp[i]==')')
                map_array[j++]=-1;

            else if(inp[i]=='{')
                map_array[j++]=2;

            else if(inp[i]=='}')
                map_array[j++]=-2;

            else if(inp[i]=='[')
                map_array[j++]=3;

            else if(inp[i]==']')
                map_array[j++]=-3;

            else if(inp[i]=='<')
                map_array[j++]=4;

            else if(inp[i]=='>')
                map_array[j++]=-4;

            else
                map_array[j++]=0;
        }

        len=j;
//for(i=0;i<len;i++)
  //  printf("%d ",map_array[i]);
    //    printf("\n");

        top=-1;

        for(i=0;i<len;i++)
        {
            if( map_array[i]>0 )
            {
                top++;
                stack[top]= map_array[i];
            }
            else if ( map_array[i]<0 )
            {
                if(stack[top]== -map_array[i])
                {
                    top--;
                }
                else
                {
                    printf("NO %d\n",i+1);
                    goto shesh;
                }
            }
        }


        if(top==-1)
        printf("YES\n");
        else
        printf("NO %d\n",len+1);

        shesh:
        ;
    }


    return 0;

}





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
#define MAX 1000005



int main()
{
    char stack[20005][20],instr[20],inp[20];
    int n,i,top;

    while(scanf("%d",&n)!=EOF)
    {
        top=-1;

        for(i=0;i<n;i++)
        {
            scanf("%s",instr);

            if(!strcmp(instr,"Sleep"))
            {
                scanf("%s",inp);
                top++;
                strcpy(stack[top],inp);

            }

            else if(!strcmp(instr,"Kick"))
            {
                if(top>=0)
                    top--;
            }

            else if(!strcmp(instr,"Test"))
            {
                if(top>=0)
                    printf("%s\n",stack[top]);
                else
                    printf("Not in a dream\n");
            }
        }
    }

    return 0;

}


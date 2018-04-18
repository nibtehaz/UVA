#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    int i,n,pal,j,test;
    char inp[1000005],den[1000005];

    while(gets(den))
    {
        if(!strcmp(den,"DONE")) break;

        n=strlen(den);
        for(i=0,j=0;i<n;i++)
        {
            if(('a'<=den[i])&&(den[i]<='z')) { inp[j]=den[i]; j++; continue;}
            else if(('A'<=den[i])&&(den[i]<='Z')) { inp[j]=den[i]-'A'+'a'; j++; continue;}
        }


        /* pali test*/
        test=1;
        for(i=0;i<j;i++)
{
    if(inp[i]!=inp[j-1-i]) {test=0; break;}
}
        if(test==1) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");

    }


    return 0;
}
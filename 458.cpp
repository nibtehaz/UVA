#include<stdio.h>
#include<string.h>

int main()
{
    char c[200];
    int n,i;

    while(gets(c))
    {
        n=strlen(c);

        for(i=0;i<n;i++)
            c[i]-=7;

        puts(c);
    }

    return 0;

}

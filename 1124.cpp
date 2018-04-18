#include<stdio.h>
#include<string.h>
int main()
{
    char prb[500];

    while((scanf ("%[^\n]%*c", prb))!=EOF)
    {
        printf("%s\n",prb);
    }

    return 0;
}


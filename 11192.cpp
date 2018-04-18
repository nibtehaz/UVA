#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int group,n,len,i,j;
    char str[2000];

    while(1)
    {
        scanf("%d",&group);
        if(group==0) break;

        scanf ("%s", str);
        n=strlen(str);

        len=n/group;
        for(i=0;i<n;i+=len)
        {
            for(j=i+len;j>i;j--)
                printf("%c",str[j-1]);
        }
        printf("\n");
    }



    return 0;

}


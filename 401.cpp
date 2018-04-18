#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    int i,n,pal,miro,j,test;
    char inp[55];
    char let[22]={'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
    char mir[22]={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};

    while(scanf("%s",inp)!=EOF)
    {
        n=strlen(inp);

        /* pali test*/
        test=1;
        for(i=0;i<n;i++)
        if(inp[i]!=inp[n-1-i]) {test=0; break;}

        pal=test;

        /* miro test*/

        test=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<21;j++)
            {
                if(inp[i]==let[j]) { break;}
            }
              if(mir[j]!=inp[n-1-i]) {test=0; break;}


        }

        miro=test;

        printf("%s -- ",inp);

        if(pal==0&&miro==0) printf("is not a palindrome.\n\n");
        else if(pal==1&&miro==0) printf("is a regular palindrome.\n\n");
        else if(pal==0&&miro==1) printf("is a mirrored string.\n\n");
        else         printf("is a mirrored palindrome.\n\n");

    }


    return 0;
}

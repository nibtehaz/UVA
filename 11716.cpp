#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,i,root,n,j;
    char inp[100005],mat[500][500];

    scanf("%d",&t);
    gets(inp);
    while(t--)
    {
        gets(inp);
        n=strlen(inp);
        root=sqrt(n);

        if((root+1)*(root+1)==n)
            root++;
        if(root*root==n)
        {
            for(i=0;i<n;i++)
            {
                mat[i/root][i%root]=inp[i];
            }

            for(i=0;i<root;i++)
                for(j=0;j<root;j++)
                    printf("%c",mat[j][i]);

            printf("\n");
        }

        else
        {
            printf("INVALID\n");
        }

    }


    return 0;
}

/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int T,L,key[2][10005],i;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&L);

        for(i=0;i<L;i++)
        {
            scanf("%d",&key[0][i]);
        }

        for(i=0;i<L;i++)
        {
            scanf("%d",&key[1][i]);
        }

        for(i=0;i<L;i++)
        {
            if(key[0][i]==1)
            {
                if(key[1][i]==1)
                    printf(".");
                else if(key[1][i]==2)
                    printf(",");
                else if(key[1][i]==3)
                    printf("?");
                else if(key[1][i]==4)
                    printf("\"");
            }

            else if(key[0][i]==2)
            {
                if(key[1][i]==1)
                    printf("a");
                else if(key[1][i]==2)
                    printf("b");
                else if(key[1][i]==3)
                    printf("c");
            }

            else if(key[0][i]==3)
            {
                if(key[1][i]==1)
                    printf("d");
                else if(key[1][i]==2)
                    printf("e");
                else if(key[1][i]==3)
                    printf("f");
            }

            else if(key[0][i]==4)
            {
                if(key[1][i]==1)
                    printf("g");
                else if(key[1][i]==2)
                    printf("h");
                else if(key[1][i]==3)
                    printf("i");
            }

            else if(key[0][i]==5)
            {
                if(key[1][i]==1)
                    printf("j");
                else if(key[1][i]==2)
                    printf("k");
                else if(key[1][i]==3)
                    printf("l");
            }

            else if(key[0][i]==6)
            {
                if(key[1][i]==1)
                    printf("m");
                else if(key[1][i]==2)
                    printf("n");
                else if(key[1][i]==3)
                    printf("o");
            }

            else if(key[0][i]==7)
            {
                if(key[1][i]==1)
                    printf("p");
                else if(key[1][i]==2)
                    printf("q");
                else if(key[1][i]==3)
                    printf("r");
                else if(key[1][i]==4)
                    printf("s");
            }

            else if(key[0][i]==8)
            {
                if(key[1][i]==1)
                    printf("t");
                else if(key[1][i]==2)
                    printf("u");
                else if(key[1][i]==3)
                    printf("v");
            }

            else if(key[0][i]==9)
            {
                if(key[1][i]==1)
                    printf("w");
                else if(key[1][i]==2)
                    printf("x");
                else if(key[1][i]==3)
                    printf("y");
                else if(key[1][i]==4)
                    printf("z");
            }

            else if(key[0][i]==0)
            {
                while(key[1][i]--)
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005


int main()
{
    char first[25][105],second[25][105],query[105];
    int p,q,i;

    scanf("%d",&p);
    gets(first[0]);

    for(i=0;i<p;i++)
    {
        gets(first[i]);
        gets(second[i]);
    }

    scanf("%d",&q);
    getchar();

    while(q--)
    {
        gets(query);

        for(i=0;i<p;i++)
        {
            if(!strcmp(query,first[i]))
            {
                printf("%s\n",second[i]);
                break;
            }
        }
    }



    return 0;
}



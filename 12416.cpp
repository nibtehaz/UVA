/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int space,max,state;
    char ch;

    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            continue;

        space=0;
        max=0;
        state=0;

        if(ch==' ')
        {
            if(state==0)
            {
                space=1;
                state=1;
            }

            else if(state==1)
            {
                space++;
            }
        }

        else
        {
            state=0;

            if(space>max)
                max=space;

            space=0;
        }

        while(1)
        {
            ch=getchar();
            if(ch=='\n')
                break;

            if(ch==' ')
            {
                if(state==0)
                {
                    space=1;
                    state=1;
                }

                else if(state==1)
                {
                    space++;
                }
            }

            else
            {
                state=0;

                if(space>max)
                    max=space;

                space=0;
            }
        }
        if(space>max)
            max=space;

        space=1;

        for(state=0;;state++)
        {
            if(space>=max)
                break;
            space*=2;
        }

        printf("%d\n",state);

    }

    return 0;

}



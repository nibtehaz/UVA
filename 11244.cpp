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
    int cnt,i,j,r,c,check;
    char sky[205][205];

    while(scanf("%d%d",&r,&c)!=EOF)
    {
        if(r==0&&c==0)
            break;
        for(i=0;i<r;i++)
            scanf("%s",sky[i]);

        cnt=0;

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                check=0;

                if(sky[i][j]=='*')
                    check=1;
                if(check==1)
                {
                    if(i>0)
                    {
                        if(sky[i-1][j]=='*')
                        {
                            check++;
                            continue;
                        }
                    }

                    if(i<(r-1))
                    {
                        if(sky[i+1][j]=='*')
                        {
                            check++;
                            continue;
                        }
                    }
                    if(j>0)
                    {
                        if(sky[i][j-1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }

                    if(j<(c-1))
                    {
                        if(sky[i][j+1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }
                    if(i>0&&j>0)
                    {
                        if(sky[i-1][j-1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }

                    if(i<(r-1)&&j>0)
                    {
                        if(sky[i+1][j-1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }
                    if(i>0&&j<(c-1))
                    {
                        if(sky[i-1][j+1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }

                    if(i<(r-1)&&j<(c-1))
                    {
                        if(sky[i+1][j+1]=='*')
                        {
                            check++;
                            continue;
                        }
                    }
                    cnt++;
                }
            }
        }

        printf("%d\n",cnt);

    }

    return 0;

}

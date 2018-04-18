#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int roman[200][5],num,i,j;

    roman[1][0]=1,roman[1][1]=0,roman[1][2]=0,roman[1][3]=0,roman[1][4]=0;

    for(i=2;i<=100;i++)
    {
        roman[i][0]=roman[i-1][0],roman[i][1]=roman[i-1][1],roman[i][2]=roman[i-1][2],roman[i][3]=roman[i-1][3],roman[i][4]=roman[i-1][4];

        j=i%10;

        if(j==4)
        {
            roman[i][0]++;
            roman[i][1]++;
        }

        else if(j==9)
        {
            roman[i][0]++;
            roman[i][2]++;
        }

        else
        {

            if(j>=5)
            {
                roman[i][1]++;
                roman[i][0]+=(j-5);
            }

            else
                roman[i][0]+=j;
        }

        j=i/10;

        if(j==4)
        {
            roman[i][2]++;
            roman[i][3]++;
        }

        else if(j==9)
        {
            roman[i][2]++;
            roman[i][4]++;
        }

        else if(j==10)
            roman[i][4]++;


        else
        {

            if(j>=5)
            {
                roman[i][3]++;
                roman[i][2]+=(j-5);
            }

            else
                roman[i][2]+=j;
        }


    }

    while(1)
    {
        scanf("%d",&num);
        if(num==0)
            break;

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",num,roman[num][0],roman[num][1],roman[num][2],roman[num][3],roman[num][4]);
    }

    return 0;
}


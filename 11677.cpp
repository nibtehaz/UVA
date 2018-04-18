#include<stdio.h>
int main()
{
    int H1,M1,H2,M2,time;

    for(;;)
    {
        scanf("%d %d %d %d",&H1,&M1,&H2,&M2);

        if(H1==0&&H2==0&&M1==0&&M2==0) break;

        else
        {
            if((H1==H2)&&(M2>=M1)) time=M2-M1;
            else if((H2<=H1)) time=(24+H2-H1)*60+M2-M1;
            else time=(H2-H1)*60+M2-M1;

            printf("%d\n",time);

        }
    }


    return 0;
}



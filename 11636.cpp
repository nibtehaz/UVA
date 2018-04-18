#include<stdio.h>
#include<math.h>

int main()
{

    int x=0,y,n;
    double y2;
    for(;;)
    {
        scanf("%d",&n);

        if(n<0) break;

        else
        {
            x++;
            y2=log((n)*1.0)/log(2.0);

            y = (int) y2;
            if((y2-y)>0) y++;

            printf("Case %d: %d\n",x,y);



        }
    }

    return 0;
}


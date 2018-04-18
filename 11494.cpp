#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int bin1 (int n);

int main()
{
    int x1,y1,x2,y2;

    while(1)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if((x1==0)&&(y1==0)&&(x2==0)&&(y2==0)) break;

        if((x1==x2)&&(y1==y2)) printf("%d\n",0);
        else if ((abs(x1-x2)==abs(y1-y2))||(x1==x2)||(y1==y2)) printf("%d\n",1);
        else printf("%d\n",2);

    }


    return 0;

}



#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int bin1 (int n);

int main()
{
    int r,t,tp;

    scanf("%d",&t);

    for(tp=1;tp<=t;tp++)
    {
        scanf("%d",&r);

        printf("Case %d:\n",tp);
        printf("%d %d\n",-(r*45)/20,(r*30)/20);
        printf("%d %d\n",(r*55)/20,(r*30)/20);
        printf("%d %d\n",(r*55)/20,-(r*30)/20);
        printf("%d %d\n",-(r*45)/20,-(r*30)/20);

    }


    return 0;

}

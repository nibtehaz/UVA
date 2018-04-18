#include<stdio.h>
#include<string.h>
int main()
{
    int k,m,r,c,i,j,i2,test,taken;
    char course[105][5],cata[105][5];

    while(1)
    {
        scanf("%d",&k);
        if(k==0) break;
        scanf("%d",&m);
        test=1;
        for(i=0;i<k;i++)
            scanf("%s",course[i]);




        for(i=0;i<m;i++)
        {
            taken=0;
            scanf("%d %d",&c,&r);

            for(j=0;j<c;j++)
            {
                scanf("%s",cata[j]);
                for(i2=0;i2<k;i2++)
                {


                    if(!strcmp(cata[j],course[i2]))
                {
                    taken++;
                    break;
                }
                }



           }

        if(taken<r)  test=0;
        }
        if(test) printf("yes\n");
        else printf("no\n");

    }
    return 0;
}


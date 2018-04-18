#include<stdio.h>
#include<string.h>

int main()
{
    int t,m,n,diff,i,test,j,w;
    /*freopen ("myfile.txt","w",stdout);*/
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        test=1;
       if(i!=1) printf("\n");

        scanf("%d",&w);
        scanf("%d %d",&m,&n);

        diff=m-n;
        if(diff<0) diff=-diff;

        for(j=1;j<w;j++)
        {
        scanf("%d%d",&m,&n);

        if((diff!=m-n)&&(diff!=n-m)) test=0;
        }

        if(test) printf("yes\n");
        else printf("no\n");

    }




    return 0;
}


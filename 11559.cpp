#include<stdio.h>
int main ()
{
    int N,B,H,W,cost,min,i,j,cata[19][15];             /*N=number of member,B=Budget,H=hotel number,W=Weekends*/
                                                  /*Cata=Catalogue of hotel index 0 > bill,other index>free room number  */
    while(scanf("%d %d %d %d",&N,&B,&H,&W)!=EOF)
    {
        
        min =B+1;
        
        for(i=0;i<H;i++)  /* gathering catalogue data*/
        {
            for(j=0;j<=W;j++)
            scanf("%d",&cata[i][j]);
        }
        
        for(i=0;i<H;i++)    /* selecting hotel */
        {
            for(j=1;j<=W;j++)
            {
                cost=0;
                if(cata[i][j]>=N) { cost=cata[i][0]*N; if((cost<=B)&&(cost<min)) min =cost ;}

            }
        }

        if(min>B) printf("stay home\n");

        else printf("%d\n",min);
    }
    return 0;
 }



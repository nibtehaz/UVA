#include<stdio.h>
int main ()
{
    double value,loan,dp,de[105]; /*dp = down payment , de=depreciation  */
    int du,i,j,dn; /*dn =depreciation number   ,  du=duration */

    for(;;){
        scanf("%d %lf %lf %d",&du,&dp,&loan,&dn);
        if(du<0) break ;
        else{
            for(i=0;i<=du;i++) de[i]=-1;
            for(i=0;i<dn;i++){
                scanf("%d",&j);
                scanf("%lf",&de[j]);
            }
            for(i=0;i<=du;i++)if(de[i]==-1) de[i]=de[i-1];
            value =(1-de[0])*(dp+loan);
            if(value>loan) { printf("0 months\n"); continue; }
            dp =loan/du ;
            loan -=dp;
            value*=(1-de[1]);
            if(value>loan) { printf("1 month\n"); continue; }
            else{
            for(i=2;i<=du;i++)   /* i is indicating month number here*/
            {
                loan -= dp;
                value *=(1-de[i]);
                if(value>loan) { printf("%d months\n",i); i=du+1; }
            }
        }
        }
    }
    return 0;
 }



/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int t,i,tp=1,j,ans[100];
    double sum,balance,doshomik;
     long long int ase;

    scanf("%d",&t);

    for(;tp<=t;tp++)
    {
        ase=0;
        sum=0;
        for(i=0;i<12;i++)
        {
            scanf("%lf",&balance);
            sum+=balance;
        }
        sum/=12;

        ase=(long long int)sum;

        for(i=1;;i++)
        {
            ans[i]=(int)ase%1000;
            ase/=1000;

            if(ase==0)
                {
                    j=i;
                    break;
                }
        }
        ase=0;
        for(i=j;i>1;i--)
        {
            ase=ase*1000+ans[i];
        }
        ase*=1000;
        doshomik=sum-ase;



        printf("%d $",tp);

if(ase>0){
        printf("%d",ans[j]);

        i--;
        for(i=j-1;i>1;i--)
            printf(",%d",ans[i]);

        printf(",%.2lf\n",doshomik);
}
else
{
        printf("%.2lf\n",doshomik);
}

    }



    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int t,tp=1,a,b,test;
    char c;
    double ans;

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        test=0;
        a=0;
        b=0;
        while(1)
        {
            c=getchar();
            if(test==0)
            {
                if((48<=c)&&(c<=57))
                    a=(c-48)+a*10;
            }
            if(test==0&&(!((48<=c)&&(c<=57))))
                test=1;

            if(test==1)
            {
                if((48<=c)&&(c<=57))
                    b=(c-48)+b*10;
            }

            if(c=='\n')
                break;

        }

        ans=a*0.5+b*0.05;


        printf("Case %d: %g\n",tp,ans);
        tp++;


    }

    return 0;

}

#include<stdio.h>

int main()
{
    int a,b,ans;

    for(;;)
    {
        scanf("%d %d",&a,&b);

        if((a==-1)&&(b==-1)) break;

        else
            {
                if(b>a) ans=b-a;
                else ans=a-b;
                if(ans>50)
                    ans=100-ans;

                printf("%d\n",ans);

            }
    }

    return 0;
}

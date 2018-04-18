#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;

    for(;;)
    {
        scanf("%d %d",&a,&b);

        if(a==0&&b==0) break;

        else
        {
            if(a==b)
            {
                b=sqrt(b);
                if(a==b*b) printf("%d\n",1);
            }
            else
            {

            c=sqrt(a);
            b=sqrt(b);

            if(c*c==a)printf("%d\n",abs(c-b)+1);
            else printf("%d\n",abs(c-b));

            }
        }
    }
    
    return 0;
}



#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t,n,p,i,hartal,j;

    scanf("%d",&t);

    while(t--)
    {
        hartal=0;
        int h[105]={0,};
        int N[3655]={0,};
        scanf("%d",&n);
        scanf("%d",&p);

        for(i=0;i<p;i++)
        {
            scanf("%d",&h[i]);

        }

        for(i=0;i<p;i++)
        {
            {
                for(j=1;;j++)
                {
                    if(j*h[i]>n) break;
                    if((N[j*h[i]]==0)&&((j*h[i])%7!=6)&&((j*h[i])%7!=0))
                    {
                        N[j*h[i]]=1;
                        hartal++;
                    }
                }
            }
        }

        printf("%d\n",hartal);
    }


    return 0;
}




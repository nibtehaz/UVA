#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000005];
    int t=1,q,i,j,temp,test,m,n;

    while(scanf("%s",str)!=EOF)
    {
        if(str[0]=='\n') break;

        else
        {
            scanf("%d",&q);
            printf("Case %d:\n",t);
            for(i=1;i<=q;i++)
            {
                test =1;
                scanf("%d %d",&m,&n);
                if(m>n) { temp=m;  m=n;  n=temp;  }

                temp=str[m];
                for(j=m+1;j<=n;j++)
                {
                    if(str[j]==temp) continue;
                    else { test=0; break;}
                }

                if(test)  printf("Yes\n");
                else printf("No\n");


            }



          t++;
        }



    }


    return 0;
}



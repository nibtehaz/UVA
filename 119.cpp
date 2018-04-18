#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][15],giver[15],get[10][15];
    int gain[10],n,m,i,j,cnt=0,gift,k;

    while((scanf("%d",&n))!=EOF)
    {
        if(cnt==1) printf("\n");
        if(cnt==0) cnt=1;
        for(i=0;i<n;i++)
        {
            scanf("%s",name[i]);
            gain[i]=0;
        }

        for(i=0;i<n;i++)
        {
            scanf("%s",giver);

            for(j=0;j<n;j++)
            {

            if(!(strcmp(giver,name[j])))
            {
                scanf("%d",&gift);

                scanf("%d",&m);
                if(m==0) break ;
                gain[j]+=(gift%m)-gift;

                for(k=0;k<m;k++)
                {
                    scanf("%s",get[k]);
                }

                for(k=0;k<m;k++)
                {
                    for(j=0;j<n;j++)
                    {
                        if(!(strcmp(get[k],name[j])))
                        {
                            gain[j]+=gift/m;
                            break;
                        }
                        else continue;

                    }
                }

            break;
            }
            else continue;

        }



    }

    for(i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],gain[i]);
    }

    }


    return 0;
}

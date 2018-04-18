#include<stdio.h>
#include<string.h>
int main()
{
    int device[25][3],n,m,c,t,i,max,p,fuse,op;

    for(t=1;;t++)
    {
        if(t!=1) printf("\n");
        scanf("%d %d %d",&n,&m,&c);

        if((n==0)&&(m==0)&&(c==0)) break ;

        else
        {
            p=0;
            fuse=1;
            max=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&device[i][0]);
                device[i][1]=0;
            }

            for(i=0;i<m;i++)
            {
                scanf("%d",&op);
                op--;
                if(device[op][1]==0)
                {
                    device[op][1]=1;
                    p=p+device[op][0];
                    if(p>c)  {fuse =0; }

                    else if(p>max) max=p;
                }

                else
                    {
                    device[op][1]=0;
                    p=p-device[op][0];
                    }


            }
            if (fuse==1) printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n",t,max);
            else printf("Sequence %d\nFuse was blown.\n",t)  ;
        }
    }

    return 0;
}



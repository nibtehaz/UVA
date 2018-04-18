#include<stdio.h>
#include<string.h>
int main()
{
    char ans[1000],g[1000];
    int alp[26],life,win,point,round,i,n,guess;

    for(;;)
    {
        scanf("%d",&round);

        if(round==-1) break;

        else
        {
            life=7;
            win=0;
            int alp[26]={0,};
            scanf("%s",ans);
            point=strlen(ans);

            for(i=0;i<point;i++)
            {
                n=ans[i]-'a';
                alp[n]++;
            }

            scanf("%s",g);
            guess=strlen(g);

            printf("Round %d\n",round);

            for(i=0;i<guess;i++)
            {

                n=g[i]-'a';
                if(alp[n]>0) {  win+=alp[n]; alp[n]=-1;}
                else if(alp[n]==0) { alp[n]--; life--;   }

                if(life==0) { printf("You lose.\n"); break;}
                if(win==point) { printf("You win.\n"); break;}


            }

            if((life>0)&&(point>win)) printf("You chickened out.\n");



        }
    }

    return 0;
}



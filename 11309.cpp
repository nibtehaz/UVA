#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int t,h,n,m,i,j,test,tp,time;
    char inp[6],inp2[6];

    scanf("%d",&t);

    for(tp=1;tp<=t;tp++)
    {
        scanf("%s",inp);
        h=(inp[0]-'0')*10+(inp[1]-'0');
        m=(inp[3]-'0')*10+(inp[4]-'0');
        m++;
        if(m==60) {h++; m=0;}

        for(;h<24;h++)
        {
            for(;m<60;m++)
            {
                time=h*100+m;

                for(i=0;;i++)
                {
                    inp[i]=(time%10)-1+'1';
                    time=time/10;
                    if(time==0) break;

                }
                n=i;

                test=1;
                for(i=0;i<=n;i++)
                if(inp[i]!=inp[n-i]) {test=0; break;}

                if(test==1) {printf("%c%c:%c%c\n",((h/10)+'1'-1),((h%10)+'1'-1),((m/10)+'1'-1),((m%10)+'1'-1)); break;}
                if(test==0) continue;

            }

             if(test==1) break;
             if(m==60) m=0;
        }

        if(h==24) {printf("00:00\n");}
    }



    return 0;
}

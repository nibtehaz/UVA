#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char s[500000],t[500000];
    int i,j,sn,tn,cnt;

    while(scanf("%s%s",s,t)!=EOF)
    {
        sn=strlen(s);
        tn=strlen(t);
        j=0;
        cnt=0;
        for(i=0;i<sn;i++)
        {
            for(;j<tn;j++)
            {
                if(s[i]==t[j]) {cnt++; j++; break;}
            }

        }
        if(cnt==sn) printf("Yes\n");
        else printf("No\n");
    }


    return 0;
}




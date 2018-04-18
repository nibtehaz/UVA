/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 1000005


int main()
{
   int let[26],cnt[36];
   int tp=1,i,n,j,cool,m,test;
   char word[500];

   while(scanf("%d",&n)!=EOF)
   {
       cool=0;

        for(j=0;j<n;j++)
        {
           test=1;

            for(i=0;i<26;i++)
            {
                let[i]=0;
                cnt[i]=0;
            }
            for(i=0;i<36;i++)
                cnt[i]=0;

            scanf("%s",word);
            m=strlen(word);
            if(m<2) continue;
            
            for(i=0;i<m;i++)
            {
               let[word[i]-97]++;
            }

            for(i=0;i<26;i++)
            {
               cnt[let[i]]++;
               if((cnt[let[i]]>1)&&(let[i]!=0)) {test=0; break;}
            }

            if(test==1) cool++;

        }

        printf("Case %d: %d\n",tp,cool);
        tp++;
   }

    return 0;
}

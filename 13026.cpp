/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005



int main()
{
    int T,tp=1,N,i,j,cnt,len,ans;
    char candi[2000][20],number[20];

    scanf("%d",&T);
    while(T--)
    {
      scanf("%d",&N);
      for(i=0;i<N;i++)
        scanf("%s",candi[i]);
      scanf("%s",number);

      len=strlen(number);

      printf("Case %d:\n",tp);
      tp++;

      for(i=0;i<N;i++)
      {
        cnt=0;
        for(j=0;j<len;j++)
        {
          if(number[j]==candi[i][j])
            cnt++;
        }

        if(len-cnt<=1)
          printf("%s\n",candi[i]);

      }
    }

    return 0;

}


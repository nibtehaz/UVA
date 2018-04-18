/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
	int N,M,i,j,max,tp=0;

	while(scanf("%d%d",&N,&M)!=EOF)
	{
		if(tp==1)
			printf("\n");
		tp=1;
		int sum[100]={0,};
		max=0;

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=M;j++)
			{
				sum[i+j]++;
				if(sum[i+j]>max)
					max=sum[i+j];
			}
		}

		N+=M;
		for(i=1;i<=N;i++)
			if(sum[i]==max)
				printf("%d\n",i);


	}

    return 0;

}


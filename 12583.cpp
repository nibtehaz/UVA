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
	int T,n,k,i,cnt,tp=1;
	int memory_bank[30];
	char inp[MAX];

	scanf("%d",&T);

	while(T--)
	{
		scanf("%d%d%s",&n,&k,inp);

        for(i=0;i<27;i++)
            memory_bank[i]=-1;

		cnt=0;

		for(i=0;i<n;i++)
		{
			if( (memory_bank[inp[i]-'A']==-1) || ((i-memory_bank[inp[i]-'A'])>k) )
				;
			else
				cnt++;

			memory_bank[inp[i]-'A']=i;
		}

		printf("Case %d: %d\n",tp,cnt);

		tp++;
	}


    return 0;

}


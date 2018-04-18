#include <stdio.h>
#include<string.h>

int main(void) {
	
	long long int k,k2,choto[10005],boro[10005],cnt,i,y;
	
	while(scanf("%lld",&k)!=EOF)
	{
		k2=2*k;
		cnt=0;
		
		for(i=k+1;i<=k2;i++)
		{
			y=(i*k)/(i-k);
			if(k==(i*y/(i+y)))
			{
				choto[cnt]=i;
				boro[cnt]=y;
				cnt++;
			}
			
		}
		
		printf("%lld\n",cnt);
		
		for(i=0;i<cnt;i++)
		printf("1/%lld = 1/%lld + 1/%lld\n",k,boro[i],choto[i]);
	}
	

	return 0;
}

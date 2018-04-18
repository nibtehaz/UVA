#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int m,n,t,b1,b2,b,d,max,min,i;

	while(scanf("%d%d%d",&m,&n,&t)!=EOF)
	{
		if(m>n)
		{
			m=m^n;
			n=m^n;
			m=m^n;
		}

		b2=t/n;
		b1=(t%n)/m;
		max=b1+b2;
		min=t-(b2*n)-(b1*m);

		for(;b2>=0;b2--)
		{
			b1=(t-b2*n)/m;
			b=b1+b2;
			d=t-(b2*n)-(b1*m);
			if(d<=min)
			{
				if(b>=max)
					{
						max=b;
						min=d;
					}
			}

		}

		if(min==0)
			printf("%d\n",max);
		else printf("%d %d\n",max,min);
	}

    return 0;
}


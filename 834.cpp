#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int a,b,c,d;

	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=a/b;
		printf("[%d",c);
		c=b;
		b=a%b;
		a=c;

        if(b!=0)
			{
			    c=a/b;
                printf(";%d",c);
                c=b;
                b=a%b;
                a=c;
			}




		while(b!=0)
		{
			c=a/b;
			printf(",%d",c);
			c=b;
			b=a%b;
			a=c;
		}

		printf("]\n");


	}

    return 0;
}


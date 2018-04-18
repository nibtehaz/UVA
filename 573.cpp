#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int H,U,D,F,hi,day,test;

	while(1)
	{
		scanf("%d%d%d%d",&H,&U,&D,&F);
		F*=U;
		H*=100;
		U*=100;
		D*=100;


		if(H==0)
			break;

		hi=0;
		day=0;

		for(day=1;;day++)
		{

			hi+=U;
			if(hi>H)
			{
				test=1;
				break;
			}


			if(U>0)
			{
				U-=F;
				if(U<0)
					U=0;
			}

			hi-=D;

			if(hi<0)
			{
				test=0;
				break;

			}

		}

		if(test==1)
			printf("success on day %d\n",day);

		else
			printf("failure on day %d\n",day);

	}



    return 0;
}


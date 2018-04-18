#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int p,s,mat[200][200],i,j,r1,c1,r2,c2,wide,row[200],b,left,right,len,max;

   scanf("%d",&p);

   while(p--)
   {
   		max=0;
    	scanf("%d",&s);

		for(i=1;i<=s;i++)
			for(j=1;j<=s;j++)
				mat[i][j]=0;

		scanf("%d",&b);

		while(b--)
		{
			scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

			for(i=r1;i<=r2;i++)
				for(j=c1;j<=c2;j++)
					mat[i][j]=1;
		}

		for(left=1;left<=s;left++)
		{
			for(i=1;i<=s;i++)
				row[i]=0;

			for(right=left;right<=s;right++)
			{
				for(i=1;i<=s;i++)
					row[i]+=mat[i][right];

				wide=right-left+1;

				len=0;

				for(i=1;i<=s;i++)
				{
					if(row[i]==0)
					{
						len++;
						if(wide*len>max)
							max=len*wide;
					}
					else
						len=0;
				}

			}
		}


       printf("%d\n",max);
   }

    return 0;
}


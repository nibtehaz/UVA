#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*THERE SHALL BE SOME GARBAGE VALUES BUT IT WILL NOT BE IN THE TEST CASE :) */

int main()
{
	unsigned long long int pascal[105][105]={0,};
	int n,r,i,j;

	pascal[1][1]=1;

	for(i=2;i<101;i++)
    {
        pascal[i][0]=1;
        pascal[i][1]=i;
        pascal[i][i]=1;
        for(j=2;j<i;j++)
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
    }


	while(1)
    {
        scanf("%d%d",&n,&r);
        if(n==0&&r==0)
            break;

        printf("%d things taken %d at a time is %llu exactly.\n",n,r,pascal[n][r]);


    }


    return 0;
}


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
	int A,len,i;
	char inp[MAX];

	while(1)
	{
		scanf("%s",inp);
		if(!strcmp(inp,"0"))
			break;

		len=strlen(inp);

        if(len==1)
        {
            A=(inp[0]-'0');
            A=sqrt((double)A);
            printf("%d\n",A);
        }

		else if(len%2==0)
		{
			A=(inp[0]-'0')*10+(inp[1]-'0');
			A=sqrt((double)A);
			printf("%d",A);
			len/=2;
			for(i=1;i<len;i++)
				printf("0");
			printf("\n");
		}

		else
		{
			{
			A=(inp[0]-'0');
			A=sqrt((double)A);
			printf("%d",A);
			len/=2;
			for(i=1;i<=len;i++)
				printf("0");
			printf("\n");
			}
		}
	}



    return 0;

}


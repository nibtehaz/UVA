#include <stdio.h>
#include<string.h>

int main(void) {
	
	int word,i;
	char sen[1005];
	
	while(scanf ("%[^\n]%*c", sen)!=EOF)
	{
		
		if(sen[0]=='\0') {printf("%d\n",0); continue;}
		word=0;
		for(i=0;sen[i];i++)
		if((('a'<=sen[i])&&(sen[i]<='z'))||(('A'<=sen[i])&&(sen[i]<='Z'))) {word++; break;}
		
		
		for(;sen[i];i++)
		if((('a'<=sen[i])&&(sen[i]<='z'))||(('A'<=sen[i])&&(sen[i]<='Z'))) continue;
		else
			{
			if((('a'<=sen[i+1])&&(sen[i+1]<='z'))||(('A'<=sen[i+1])&&(sen[i+1]<='Z')))
			word++;
		}
		printf("%d\n",word);
	}

	return 0;
}

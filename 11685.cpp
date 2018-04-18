#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000005];
    int x;

    for(;;)
    {
        scanf("%s",str);
        x=strlen(str);
        if(!(strcmp(str,"END"))) break;

        if(x==1) { if(str[0]=='1')  printf("%d\n",1) ;  else printf("%d\n",2);  continue; }
        else if(x<10)  printf("%d\n",3);
        else printf("%d\n",4);

    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char text[105];
    int t,press,i,j;

    scanf("%d",&t);getchar();
    for(i=1;i<=t;i++)
    {
        press=0;
        scanf("%[^\n]%*c", text);

        for(j=0;text[j];j++)
        {
            if(text[j]==' '||text[j]=='a'||text[j]=='d'||text[j]=='g'||text[j]=='j'||text[j]=='m'||text[j]=='p'||text[j]=='t'||text[j]=='w')  press++;
            else if(text[j]=='b'||text[j]=='e'||text[j]=='h'||text[j]=='k'||text[j]=='n'||text[j]=='q'||text[j]=='u'||text[j]=='x') press+=2;
            else if(text[j] == 'c' || text[j] == 'f' || text[j] == 'i' || text[j] == 'l' || text[j] == 'o' || text[j] == 'r' || text[j] == 'v' || text[j] == 'y') press+=3;
            else if(text[j]=='s'||text[j]=='z') press+=4;

        }
        printf("Case #%d: %d\n",i,press);
    }

    return 0;
}
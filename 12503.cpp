#include<stdio.h>
#include<string.h>

int main()
{
    char instr[105][105];
    int t,n,i,p,in;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        p=0;

        for(i=1;i<=n;i++)
        {
            scanf("%s",instr[i]);

            if(!(strcmp(instr[i],"LEFT"))) p--;
            else if(!(strcmp(instr[i],"RIGHT"))) p++;
            else if(!(strcmp(instr[i],"SAME")))
            {
                scanf("%s",instr[i]);
                scanf("%d",&in);
                strcpy(instr[i],instr[in]);
                if(!(strcmp(instr[i],"LEFT"))) p--;
            else if(!(strcmp(instr[i],"RIGHT"))) p++;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}

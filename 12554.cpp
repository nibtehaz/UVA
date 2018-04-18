#include<stdio.h>
#include<string.h>

int main()
{
    char song[16][25] ={ "Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char name[105][105];
    int i,j,guest,sing;

    scanf("%d",&guest);

    for(i=0;i<guest;i++)
    {
        scanf("%s",name[i]);
    }

    sing=(guest/16)+1;

    i=0;
    j=0;
    while(sing)
    {
        printf("%s: %s\n",name[i],song[j]);
        i++;  if(i==guest)  i=0;
        j++;  if(j==16) { j=0; sing--; continue;  }
    }

    return 0;
}

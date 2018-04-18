#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,n1,n2,i,test;
    char name1[2000],name2[2000];

    scanf("%d",&t);
    gets(name1);

    while(t--)
    {
        gets(name1);
        gets(name2);

        n1=strlen(name1);
        n2=strlen(name2);

        if(n1!=n2)
        {
            printf("No\n");

        }

        else
        {
            test=1;

            for(i=0;i<n1;i++)
            {
                if(((name1[i]=='a')||(name1[i]=='e')||(name1[i]=='i')||(name1[i]=='o')||(name1[i]=='u'))&&((name2[i]=='a')||(name2[i]=='e')||(name2[i]=='i')||(name2[i]=='o')||(name2[i]=='u')))
                    continue;
                else if(name1[i]!=name2[i])
                {
                    test=0;
                    break;
                }
            }
            if(test==0)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }



    return 0;

}


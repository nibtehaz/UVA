#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    char inp[1000];
    int n,i,carry,score,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",inp);
        n=strlen(inp);

        score=0;
        carry=0;
        for(i=0;i<n;i++)
        {
            if(inp[i]=='O')
            {
                carry++;
                score+=carry;
            }
            else
                carry=0;
        }
        printf("%d\n",score);
    }




    return 0;

}


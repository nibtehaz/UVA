#include<stdio.h>
#include<string.h>

int main()
{
    int n,f,a,b,c,budget;

    scanf("%d",&n);

    for(;n;n--)
    {
        budget=0;
        scanf("%d",&f);

        for(;f;f--)
        {
            scanf("%d %d %d",&a,&b,&c);
            budget+=a*c;
        }

        printf("%d\n",budget);

    }

    return 0;
}


#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int j,i=0,num,sti[10005],key;

    while(scanf("%d",&num)!=EOF)
    {
        sti[i]=num;
            key=sti[i];
            for(j=i-1;j>=0;j--)
            {
                if(sti[j]<key) break;
                sti[j+1]=sti[j];
            }
            sti[j+1]=key;


        if(i%2) key=(sti[i/2]+sti[(i/2)+1])/2;
        else key=sti[i/2];


        printf("%d\n",key);
        i++;
    }

    return 0;
}
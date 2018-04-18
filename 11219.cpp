#include<stdio.h>
int main()
{
    int d2,m2,y2,d1,m1,y1,t,i,age;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&d2,&m2,&y2);
        scanf("%d/%d/%d",&d1,&m1,&y1);

        if(m2>m1) age=y2-y1;
        else if(m2==m1)
        {
            if(d2>=d1) age=y2-y1;
            else age=y2-y1-1;
        }
        else age=y2-y1-1;

        if(age>130) printf("Case #%d: Check birth date\n",i);
        else if(age<0) printf("Case #%d: Invalid birth date\n",i);
        else printf("Case #%d: %d\n",i,age);

    }


    return 0;
}



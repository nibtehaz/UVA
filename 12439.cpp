#include<stdio.h>
#include<string.h>
int main()
{
    int d1,d2,t,i,ans;
    unsigned long long int j,y1,y2,y,cnt;
    char m1[20],m2[20];

     scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        cnt=0;
        scanf("%s %d, %llu",m1,&d1,&y1);
        scanf("%s %d, %llu",m2,&d2,&y2);

        j=y1;

        for(;j<=y2;j++)
        {
            if (((j%4==0)&&(j%100!=0))||(j%400==0)) break;

        }


        if(y2>=j) {cnt+=((y2-j)/400)*97;

        y2=j+((y2-j)%400);}



        for(;j<=y2;j=j+4)
        {
            if (((j%4==0)&&(j%100!=0))||(j%400==0)) cnt++;

        }

        if ((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&(strcmp(m1,"January")&&(strcmp(m1,"February")))) cnt--;
        if((((y2%4==0)&&(y2%100!=0))||(y2%400==0)))
        {
            if(!strcmp(m2,"January")) cnt--;
            else if ((!strcmp(m2,"February"))&&(d2<29)) cnt--;
        }



        printf("Case %d: %llu\n",i,cnt);



    }

    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int day=1,s,h1[120],m1[120],h2[120],m2[120],tm1[120],tm2[120],i,j,max,raas,temp,key[6];
    char kaaj[300];

    while(scanf("%d",&s)!=EOF)
    {
        if(s==0) {printf("Day #%d: the longest nap starts at 10:00 and will last for 8 hours and 0 minutes.\n",day); day++; continue;}

        for(i=0;i<s;i++)
        {
            scanf("%d:%d",&h1[i],&m1[i]);
            scanf("%d:%d",&h2[i],&m2[i]);
            scanf ("%[^\n]%*c", kaaj);

            tm1[i]=h1[i]*60+m1[i];
            tm2[i]=h2[i]*60+m2[i];


            key[0]=tm1[i],key[1]=tm2[i],key[2]=h1[i],key[3]=m1[i],key[4]=h2[i],key[5]=m2[i];


            for(j=i-1;j>=0;j--)
            {
                if(key[0]>tm1[j]) break;
                else {tm1[j+1]=tm1[j]; h1[j+1]=h1[j]; h2[j+1]=h2[j]; m1[j+1]=m1[j]; m2[j+1]=m2[j]; tm2[j+1]=tm2[j]; }
            }

            tm1[j+1]=key[0]; h1[j+1]=key[2]; h2[j+1]=key[4]; m1[j+1]=key[3]; m2[j+1]=key[5]; tm2[j+1]=key[1];
        }


        h2[s]=10;
        m2[s]=00;

        max=tm1[0]-600;
        raas=s;

        for(i=1;i<s;i++)
        {
            temp=tm1[i]-tm2[i-1];
            if(temp>max) {max=temp; raas=i-1;}
        }

        temp=1080-tm2[s-1];
        if(temp>max) {max=temp; raas=s-1;}


        if(max<60)
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d minutes.\n",day,h2[raas],m2[raas],max);

        else
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d hours and %d minutes.\n",day,h2[raas],m2[raas],max/60,max%60);

        day++;

    }

    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int L,R,i,j,t,a[4];
    char s[4][6];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",s[0]);
        scanf("%s",s[1]);
        scanf("%s",s[2]);
        scanf("%s",s[3]);

        L=0;
        R=0;

        for(i=0;i<4;i++)
        {
            a[0]=(s[i][0]-48)*2;
            a[1]=(s[i][1]-48);
            a[2]=(s[i][2]-48)*2;
            a[3]=(s[i][3]-48);


            L+=(a[0]/10)+(a[0]%10)+(a[2]/10)+(a[2]%10);
            R+=(a[1])+(a[3]);
        }

        if((L+R)%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }

    return 0;

}


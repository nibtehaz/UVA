/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

char inp[1500],temp[1500],sinp[1500];


int main()
{
    int m,i,t,test,p,len;

    scanf("%d",&t);
    while(t--)
    {
        int s[20]={0,};

        test=1;

        scanf("%s",sinp);
        scanf("%d",&m);
        len=strlen(sinp);

        for(i=0;i<len;i++)
            inp[i]=sinp[i]-48;

        for(i=0;i<m;i++)
        {
            scanf("%d",&p);
            s[p]=1;
        }
        if(s[2]==1)
        {

            if(inp[len-1]%2!=0)
                {

                    test=0;
                    goto ans;
                }
            else
                s[2]=2;
        }

        if(s[3]==1)
        {

            p=0;
            for(i=0;i<len;i++)
                p+=inp[i];
            if(p%3==0)
                s[3]=2;

            else
            {
                test=0;
                goto ans;
            }
        }

        if(s[4]==1)
        {
            if(len>1)
            p=inp[len-2]*10+inp[len-1];
            else
            p=inp[len-1];

            if(p%4!=0)
                {
                    test=0;
                    goto ans;
                }
            else
                s[4]=2;
        }

        if(s[5]==1)
        {
            if(inp[len-1]==5||inp[len-1]==0)
                s[5]=2;
            else
            {
                test=0;
                goto ans;
            }
        }

        if(s[6]==1)
        {

            if(s[2]==0)
            {
                if(inp[len-1]%2==0)
                    s[2]=2;
            }
            if(s[3]==0)
            {
                p=0;
                for(i=0;i<len;i++)
                    p+=inp[i];
                if(p%3==0)
                    s[3]=2;
            }

            if(s[2]==2&&s[3]==2)
                s[6]=2;
            else
            {
                test=0;
                goto ans;
            }
        }

        if(s[7]==1)
        {
            p=0;
            for(i=0;i<len;i++)
            {
                p=p*10+(inp[i]);


                if(p>=7)
                    p%=7;

            }


            if(p==0)
                s[7]=2;

            else
            {
                test=0;
                goto ans;
            }
        }

        if(s[8]==1)
        {
            p=inp[len-1];
            if(len>1)   p+=inp[len-2]*10;
            if(len>2)   p+=inp[len-3]*100;

            if(p%8!=0)
                {
                    test=0;
                    goto ans;
                }
            else
                s[8]=2;
        }

        if(s[9]==1)
        {
            p=0;
            for(i=0;i<len;i++)
                p+=inp[i];
            if(p%9==0)
                s[9]=2;

            else
            {
                test=0;
                goto ans;
            }
        }

        if(s[10]==1)
        {
            if(inp[len-1]==0)
                s[10]=2;
            else
            {
                test=0;
                goto ans;
            }
        }
        if(s[11]==1)
        {
            p=0;
            for(i=0;i<len;i+=2)
                p+=inp[i];
            for(i=1;i<len;i+=2)
                p-=inp[i];

            if(p%11==0)
                s[11]=2;
            else
            {
                test=0;
                goto ans;
            }
        }
        if(s[12]==1)
        {
            if((s[6]==2&&s[2]==2)||(s[6]==2&&s[4]==2)||(s[3]==2&&s[4]==2))
                s[12]=2;

            else
            {
                if(s[3]!=2)
                {
                    p=0;
                    for(i=0;i<len;i++)
                        p+=inp[i];
                    if(p%3==0)
                        s[3]=2;
                }

                if(s[4]!=2)
                {
                    if(len>1)
                    p=inp[len-2]*10+inp[len-1];
                    else
                    p=inp[len-1];

                if(p%4==0)
                    s[4]=2;
                }

                if(s[3]==2&&s[4]==2)
                    s[12]=2;
                else
                {
                    test=0;
                    goto ans;
                }
            }
        }
        ans:
        if(test==0)
            printf("%s - Simple.\n",sinp);
        else
            printf("%s - Wonderful.\n",sinp);
    }

    return 0;



}



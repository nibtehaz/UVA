#include<stdio.h>
#include<string.h>
int main()
{
    char time_zone[][6]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
    float incri[]={0.0,0.0,1.0,1.0,0.0,1.0,1.0,2.0,2.0,3.0,3.0,4.0,-4.0,-3.0,-3.5,-2.5,-5.0,-4.0,-6.0,-5.0,-7.0,-6.0,-8.0,-7.0,-10.0,-9.0,-8.0,10.0,11.0,9.5,10.5,8.0};
    int t,i,ampm;
    int h,m,tm;
    char c1[6],c2[6],time[10],am[6];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",time);
        if(!strcmp(time,"noon")) {   h=12; m=00;   ampm=2;   }
        else if(!strcmp(time,"midnight")) {  h=00; m=00;  ampm=1;  }

        else { scanf("%s",am);
        { if(time[2]==':')  {h= (time[0]-'0')*10+(time[1]-'0'); m=(time[3]-'0')*10+(time[4]-'0');    }
          else  {h= (time[0]-'0'); m=(time[2]-'0')*10+(time[3]-'0');    }
        }
        if(!strcmp(am,"a.m.")) ampm=1;
        else ampm=2;

        }


        if(ampm==2)
        {
            if(h!=12) h=12+h;
        }
        if(ampm==1)
        {
            if(h==12) h=0;
        }


        tm=h*60+m;

        scanf("%s",c1);
        scanf("%s",c2);

        for(i=0;i<32;i++)
            if(!strcmp(c1,time_zone[i])) {  tm-=incri[i]*60; break;  }

        for(i=0;i<32;i++)
            if(!strcmp(c2,time_zone[i])) {  tm+=incri[i]*60; break;  }

           while(1)
           {
               if (tm>=1440) tm-=1440;
               else if(tm<0) tm+=1440;

               if(0<=tm&&tm<1440) break;
           }

           if((0<=tm)&&(tm<=719)) ampm=1;
           else ampm=2;

           h=tm/60;
           if(h==0) h=12;
           else if(h>12) h-=12;


           m=tm%60;

            if((h==12)&&(m==0)&&(ampm==1)) printf("midnight\n");
            else if((h==12)&&(m==0)&&(ampm==2)) printf( "noon\n");
            else
            {

            printf("%d:",h);
            if(m<=9)
                printf("%d%d",0,m);
            else printf("%d",m);

            if(ampm==1)
                printf(" a.m.\n");
            else printf(" p.m.\n");

            }

    }

    return 0;
}



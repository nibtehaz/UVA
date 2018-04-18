#include<stdio.h>

int main()
{

    int a,b,c,d,ans;

    for(;;)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if((a==0)&&(b==0)&&(c==0)&&(d==0)) break;

        else
            {

                ans =1080;
        /*step 1*/

           if(a<b)    ans+=(40+a-b)*9;
           else       ans+=(a-b)*9;

            if(b<c)   ans+=(c-b)*9;
            else      ans+=(40+c-b)*9;

              if(c<d)    ans+=(40+c-d)*9;
           else       ans+=(c-d)*9;


            }
            printf("%d\n",ans);
    }


    return 0;
}


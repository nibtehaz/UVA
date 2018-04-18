#include<stdio.h>
#include<math.h>

int main()
{
    int L,W,H,ang,temp;
    double ans,pi=acos(-1),cosine,sine;

    while(scanf("%d %d %d %d",&L,&W,&H,&ang)!=EOF)
    {
        cosine=cos(ang*pi/180.0);
        sine=sin(ang*pi/180.0);
        if(H*cosine>L*sine)
        ans=(L*H-(L*L*(sine/cosine)/2.0))*W*1.0;
        else ans=H*H*W/(2.0*(sine/cosine));

        printf("%.3lf mL\n",ans);
    }


    return 0;
}

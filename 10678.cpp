#include<stdio.h>
#include<math.h>

int main()
{
    int N,D,L;
    double area,D2,L2;

    scanf("%d",&N);
    for(;N;N--)
    {
        scanf("%d %d",&D,&L);
        L2=L/2.0;
        D2=sqrt((L2*L2)-(D*D/4.0));
        area=2*acos(0.0)*D2*L2;
        printf("%.3lf\n",area);
    }


    return 0;
}

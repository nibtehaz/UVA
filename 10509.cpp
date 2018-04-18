#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    double n,dx;
    int a,b;

    while(1){
        scanf("%lf",&n);

        if((n*n)<1e-11) break;

        a=pow(10,((log10(n))/3));
        b=a+1;

        if((-1e-11<(n-(b*b*b)))&&(1e-11>(n-(b*b*b)))) printf("%.4lf\n",1.0+a);

        else{

        dx=(n-a*a*a*1.0)/(3.0*a*a);

        printf("%.4lf\n",dx+a);
        }

    }

	return 0;
}


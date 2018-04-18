#include<stdio.h>

int main ()
{

  int t,n,m;  /* t-> test case , n-> rows , m-> column */

  scanf("%d",&t);

  for(;t;t--)
  {
      scanf("%d %d",&n,&m);

    

      m-=2;
      n-=2;

      if(m%3==0) m=m/3;
      else m= (m/3)+1;
      if(n%3==0) n=n/3;
      else n= (n/3)+1;


      printf("%d\n",m*n);
  }


    return 0;
}

#include<stdio.h>
int main (){
        int t,p,q,r,i;
        scanf("%d",&t);
        for(i=1;i<=t;i++){
            scanf("%d %d %d",&p,&q,&r);
            if(((q<p)&&(p<r))||((r<p)&&(p<q))) { printf("Case %d: %d\n",i,p); continue ; }
            else if(((p<q)&&(q<r))||((r<q)&&(q<p))) { printf("Case %d: %d\n",i,q); continue ; }
            else if(((p<r)&&(r<q))||((q<r)&&(r<p))) { printf("Case %d: %d\n",i,r); continue ; }
        }
    return 0;
 }



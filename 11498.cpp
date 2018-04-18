#include<stdio.h>
int main (){
    int k,n,m,x,y;         /*k=test cases,(n,m)=division point, (x,y)=postion */
    for(;;){
        scanf("%d",&k);
        if(k==0) { break ;}
        else{
            scanf("%d %d",&n,&m);
            for(;k;k--){
                scanf("%d %d",&x,&y);
                x-=n;
                y-=m;
                if((x==0)||(y==0)) { printf("divisa\n"); continue;  }
                if((x>0)&&(y>0)) { printf("NE\n"); continue;  }
                if((x>0)&&(y<0)) { printf("SE\n"); continue;  }
                if((x<0)&&(y>0)) { printf("NO\n"); continue;  }
                if((x<0)&&(y<0)) { printf("SO\n"); continue;  }
            }
        }
    }
    return 0;
 }



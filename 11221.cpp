#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int i,t,n,pal,j,test,k,a,b,tp;
    char inp[100005],den[100005],sq[200][200];


scanf("%d",&t);
   gets(inp);


    for(tp=1;tp<=t;tp++)

    {
            gets(den);


        n=strlen(den);
        for(i=0,j=0;i<n;i++)
        {
            if(('a'<=den[i])&&(den[i]<='z')) { inp[j]=den[i]; j++; continue;}
            else if(('A'<=den[i])&&(den[i]<='Z')) { inp[j]=den[i]; j++; continue;}
        }
        k=sqrt(j);
        if(k*k!=j) test=0;
        else test=1;
        a=0;
        i=0;
            for(b=0;;b++)
            {
                sq[a][b]=inp[i];
                if(i==j) break;
                i++;
                if(b==(k-1)) {a++; b=-1; continue;}
            }



            for(i=0,a=0;a<k&&test;a++)
            {
                for(b=0;b<k&&test;b++,i++){
                      if(inp[i]!=sq[a][b]) {test=0;}  }
            }

            for(i=0,a=k-1;a>=0&&test;a--)
            {
                for(b=k-1;b>=0&&test;b--,i++){
                      if(inp[i]!=sq[a][b]) {test=0;}  }
            }

            for(i=0,b=0;b<k&&test;b++)
            {
                for(a=0;a<k&&test;a++,i++){
                      if(inp[i]!=sq[a][b]) {test=0;}  }
            }



              for(i=0,b=k-1;b>=0&&test;b--)
            {
                for(a=k-1;a>=0&&test;a--,i++){
                      if(inp[i]!=sq[a][b]) {test=0;}  }
            }





if(test==1) printf("Case #%d:\n%d\n",tp,k);
else printf("Case #%d:\nNo magic :(\n",tp);
    }


    return 0;
}
